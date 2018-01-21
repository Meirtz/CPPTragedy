//
// Created by meirtz on 18-1-19.
//

#include "Interface.h"

Interface::Interface(ContactBook &book) {
    this->book = book;
}

void Interface::display_all() {
    //readBook();
    if(!_DEBUG) {
        system(_CLEAR_STR);
    }
    this->book.dispaly();
    printf("Please choose an option:\n");
    printf("1. New contact\n");
    printf("2. Delete contact\n");
    printf("3. Edit contact\n");
    printf("4. Back\n");

    int input = 0;
    cin>>input;
    switch(input) {
        case 1: this->book.addPerson(new_person());display_all();break;
        case 2: delete_person();display_all();break;
        case 3: delete_person();this->book.addPerson(new_person());display_all();break;
        case 4: display_main();break;
        default: printf("Invalid input!");display_all();
    }
}

void Interface::display_new() {
    if(!_DEBUG) {
        system(_CLEAR_STR);
    }
    this->book.addPerson(new_person());
    //saveBook();
    display_main();
}

void Interface::display_search() {
    if(!_DEBUG) {
        system(_CLEAR_STR);
    }
    printf("Please input fullname:");

    string fullname;
    cin>>fullname;

    int i = 1;
    vector<Contacts>::iterator iter;
    for (iter = book.people.begin(); iter != book.people.end(); iter++) {
        if((*iter).name == fullname) {
            printf("%d:\n",i);
            Contacts::display_contacts_instance(*iter);
            i++;
        }
        cout<<endl;
    }

    if(i == 1) {
        printf("No match found!\n");
    }
    printf("1. Back\n");
    char buf = ' ';
    cin>>buf;
    display_main();
}

Contacts &Interface::new_person() {

    auto is_email_valid = [](const std::string& email) -> bool {
        // define a regular expression
        const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

        // try to match the string with the regular expression
        return std::regex_match(email, pattern);
    };

    if(!_DEBUG) {
        system(_CLEAR_STR);
    }
    string name, number, address=" ", date=" ", email=" ";
    bool sex=true;

    printf("Name:");
    cin>>name;

    printf("Number:");
    cin>>number;
    while(!isNumber(number.c_str())) {
        printf("Invalid phone number. Please input again:");
        cin>>number;
    }

    printf("Sex:");
    cin>>sex;
    while(sex!=0&&sex!=1) {
        printf("Invalid sex type. Please input again:");
        cin>>sex;
    }

    printf("Address:");
    cin>>address;
    //std::getline(std::cin, address);


    printf("Birthday:");
    cin>>date;
    struct tm tm;
    while(!strptime(date.c_str(), "%Y-%m-%d", &tm)) {
        printf("Invalid date. Please input again:");
        cin>>date;
    }

    if(_DEBUG) printf("I've got the date string: %s\n", date.c_str());


    printf("E-mail:");
    cin>>email;
    while(!is_email_valid(email)) {
        printf("Invalid E-mail address. Please input again:");
        cin>>email;
    }


    Contacts *p = new Contacts(name.c_str(), number.c_str(), sex, address.c_str(), date.c_str(), email.c_str());
    return *p;
}

bool Interface::delete_person() {
    int pos;
    printf("Please input an ID:");
    cin>>pos;
    this->book.deletePerson(pos);
    saveBook();
}

bool Interface::readBook() {
    ContactsBook::ContactBook localBook;
    book.clearBook();

    fstream input("Book.bin", ios::in | ios::binary);
    if(!localBook.ParseFromIstream(&input)) {
        cout<<"Read local book failed!"<<endl;
    }


    for (int i = 0; i < localBook.people_size(); ++i) {
        const ContactsBook::Contacts& person = localBook.people(i);
        string name = person.name();
        string number = person.number();
        bool sex = person.sex();
        string address = person.address();
        string date = person.date();
        string email = person.email();
        Contacts *p = new Contacts(name.c_str(), number.c_str(), sex, address.c_str(), date.c_str(), email.c_str());
        book.addPerson(*p);
        //book.dispaly();
    }
    //uint32_t size = person.ByteSize();
    //unsigned char byteArray[size];
    //person.SerializeToArray(byteArray, size);
}

bool Interface::saveBook() {
    vector<Contacts>::iterator iter;
    ContactsBook::ContactBook localBook;

    for (iter = book.people.begin(); iter != book.people.end(); ++iter) {
        ContactsBook::Contacts* person = localBook.add_people();
        person->set_name((*iter).name);
        person->set_number((*iter).number);
        person->set_sex((*iter).sex);
        person->set_address((*iter).address);
        person->set_date((*iter).date);
        person->set_email((*iter).email);
    }

    size_t size = localBook.ByteSize();
    char *buffer = new char[size];
    string *buffer_str = new string;
    localBook.SerializeToString(buffer_str);
    if(_DEBUG) cout<<"\n\n\n---------------"<<*buffer_str<<"\n\n\n---------------";
    delete buffer_str;

    fstream output("Book.bin", ios::out | ios::trunc | ios::binary);
    if(!localBook.SerializeToOstream(&output)) {
        cout<<"Save book to local file failed!"<<endl;
    }


}

void Interface::save_exit() {
    saveBook();
    exit(0);
}

/*Contacts &Interface::edit(int pos) {
    Contacts a = Contacts();
    return &a;
}*/
