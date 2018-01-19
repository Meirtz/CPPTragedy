//
// Created by meirtz on 18-1-19.
//

#ifndef CONTACTS_INTERFACE_H
#define CONTACTS_INTERFACE_H

#include <iostream>

using namespace std;

class Interface {
public:
    display_main() {
        printf("Welcome to Contacts! Please Choose a option:\n");
        printf("1. Display contacts.\n");
        printf("2. Create new contact.\n");
        printf("3. Search person by fullname.\n");
        int input = 0;
        switch(input) {
            case 1: display_all();break;
            case 2: display_new();break;
            case 3: display_search();break;
        }

    }

};


#endif //CONTACTS_INTERFACE_H
