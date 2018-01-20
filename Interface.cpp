//
// Created by meirtz on 18-1-19.
//

#include "Interface.h"

Interface::Interface(ContactBook &book) {
    this->book = book;
}

void Interface::display_all() {
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

    display_main();
}

Contacts &Interface::new_person() {
    if(!_DEBUG) {
        system(_CLEAR_STR);
    }
    string name, number, address=" ", date=" ", email=" ";
    bool sex=true;

    printf("Name:");
    cin>>name;

    printf("Number:");
    cin>>number;

    printf("Sex:");
    cin>>sex;

    printf("Address:");
    cin>>address;

    printf("Date:");
    cin>>date;

    printf("E-mail");
    cin>>email;
    Contacts *p = new Contacts(name.c_str(), number.c_str(), sex, address.c_str(), date.c_str(), email.c_str());
    return *p;
}

bool Interface::delete_person() {
    int pos;
    printf("Please input an ID:");
    cin>>pos;
    this->book.deletePerson(pos);
}

/*Contacts &Interface::edit(int pos) {
    Contacts a = Contacts();
    return &a;
}*/
