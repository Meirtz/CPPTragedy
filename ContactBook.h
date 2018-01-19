//
// Created by meirtz on 18-1-19.
//

#ifndef CONTACTS_CONTACTBOOK_H
#define CONTACTS_CONTACTBOOK_H

#include "Contacts.h"
#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

extern const bool _DEBUG;

class ContactBook {
public:
    unordered_map<unsigned long, unsigned int> hash_book; // Left int for id, right int for position in vector;

    vector<Contacts> people;
    ContactBook();
    ~ContactBook();

    bool addPerson(Contacts &person);
    bool deletePerson(int pos) {
        try {
            people.erase((vector<Contacts>::iterator)&people[pos]);
        } catch (exception &e){
            cout<<"Error occurred when deleting a person at position "<<pos<<" ."<<endl;
        }

    }
    void dispaly();
};


#endif //CONTACTS_CONTACTBOOK_H