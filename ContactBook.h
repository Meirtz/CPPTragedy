//
// Created by meirtz on 18-1-19.
//

#ifndef CONTACTS_CONTACTBOOK_H
#define CONTACTS_CONTACTBOOK_H

#include "Contacts.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <sqlite3.h>
#include "ContactBook.pb.h"



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
            //people.erase((vector<Contacts>::iterator)&people[pos]);
            people.erase(people.begin()+pos-1);
        } catch (exception &e){
            cout<<"Error occurred when deleting a person at position "<<pos<<" ."<<endl;
        }

    }
    bool clearBook() {
        try {
            this->people.clear();
            cout<<"Reloading book..."<<endl;
        } catch(ContactException &e) {
            //cout<<e.what()<<endl;
            cout<<"Can't clear ContactBook!"<<endl;
        }

    }
    void dispaly();
};


#endif //CONTACTS_CONTACTBOOK_H
