//
// Created by meirtz on 18-1-19.
//

#ifndef CONTACTS_INTERFACE_H
#define CONTACTS_INTERFACE_H

#include <iostream>
#include "ContactBook.h"
#include "ContactBook.pb.h"

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
    Contacts & new_person();
    bool delete_person();
    bool readBook() {
        uint32_t size = person.ByteSize();
        unsigned char byteArray[size];
        person.SerializeToArray(byteArray, size);
    }
    bool saveBook() {
        uint32_t size = sizeof(book);
        unsigned char byteArray[size*2];
        book.SerializeToArray(byteArray, size*2);
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
            case 4: break;
            default: printf("Invalid input!");display_main();
        }
    }

};



#endif //CONTACTS_INTERFACE_H
