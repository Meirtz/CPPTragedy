//
// Created by meirtz on 18-1-19.
//

#ifndef CONTACTS_INTERFACE_H
#define CONTACTS_INTERFACE_H

#include <iostream>
#include <ContactBook.pb.h>
#include "Contacts.h"
#include "ContactBook.h"
#include "ContactBook.pb.h"
#include <ctime>
#include <fstream>
#include <regex>

extern const bool _DEBUG;
extern const char *_CLEAR_STR;

extern bool isNumber(const char * str);

using namespace std;

class Interface {
public:
    ContactBook book;

    Interface(){}
    Interface(ContactBook &book);

    void display_all();
    void display_new();
    void display_search();
    void save_exit();
    Contacts & new_person();
    bool delete_person();
    bool copyBookToLocal() {

    }
    bool readBook();
    bool saveBook();
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
