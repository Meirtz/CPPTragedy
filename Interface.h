//
// Created by meirtz on 18-1-19.
//

#ifndef CONTACTS_INTERFACE_H
#define CONTACTS_INTERFACE_H

#include <iostream>
#include <ContactBook.pb.h>
#include "ContactBook.h"
#include "ContactBook.pb.h"
#include <fstream>

extern const bool _DEBUG;
extern const char *_CLEAR_STR;


using namespace std;

class Interface {
public:
    ContactBook book;

    Interface(){}
    Interface(ContactBook &book);

    void display_all();
    void display_new();
    void display_search();
    void save_exit() {
        saveBook();
        exit(0);
    }
    Contacts & new_person();
    bool delete_person();
    bool copyBookToLocal() {

    }
    bool readBook() {
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
            book.dispaly();
        }
        //uint32_t size = person.ByteSize();
        //unsigned char byteArray[size];
        //person.SerializeToArray(byteArray, size);
    }
    bool saveBook() {
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
    void display_main() {
        if(!_DEBUG) {
            system(_CLEAR_STR);
        }

        printf("Welcome to Contacts! Please Choose a option:\n");
        printf("1. Display contacts.\n");
        printf("2. Create new contact.\n");
        printf("3. Search person by fullname.\n");
        printf("4. Exit.\n");
        int input = 0;
        cin>>input;
        switch(input) {
            case 1: display_all();break;
            case 2: display_new();break;
            case 3: display_search();break;
            case 4: save_exit(); break;
            default: printf("Invalid input!");display_main();
        }
    }

};



#endif //CONTACTS_INTERFACE_H
