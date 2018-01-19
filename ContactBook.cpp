//
// Created by meirtz on 18-1-19.
//

#include "ContactBook.h"

extern const bool _DEBUG;

using namespace std;

bool ContactBook::addPerson(Contacts & person) {
    this->people.push_back(person);
    this->hash_book.insert(make_pair(person.id, people.size() - 1));

    if (_DEBUG) {
        cout<<"Added one person to ContactBook instance with following content:"<<endl;
        Contacts::display_contacts_instance(person);
    }
}

void ContactBook::dispaly() {
    int i = 1;
    cout<<"Displaying whole contacts:"<<endl;
    vector<Contacts>::iterator iter;
    for (iter = people.begin(); iter != people.end(); iter++) {
        cout<<i<<":"<<endl;
        Contacts::display_contacts_instance(*iter);
        cout<<endl;
        i++;
    }
}

ContactBook::ContactBook() {
    if(_DEBUG) cout<<"ContactBook_instance constructed"<<endl;
}

ContactBook::~ContactBook() {
    if(_DEBUG) cout<<"ContactBook_instance destroyed"<<endl;
}
