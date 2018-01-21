//
// Created by meirtz on 18-1-19.
//

#include "ContactBook.h"


extern const bool _DEBUG;

using namespace std;

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;
    for(i=0; i<argc; i++){
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

bool ContactBook::addPerson(Contacts & person) {
    this->people.push_back(person);
    this->hash_book.insert(make_pair(person.id, people.size() - 1));

    if (_DEBUG) {
        cout<<"Added one person to ContactBook instance with following content:"<<endl;
        Contacts::display_contacts_instance(person);
    }
    /*char insert_sql[300];
    sprintf(insert_sql, "insert into ContactBook (name, number, sex, address, date, email) \"%s\", \"%s\", %d, \"%s\", \"%s\", \"%s\" ", \
    person.name.c_str(), person.number.c_str(), (int)person.sex, person.address.c_str(), person.date.c_str(), person.email.c_str());

    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    char *sql;


    rc = sqlite3_open("contacts.db", &db);
    rc = sqlite3_exec(db, insert_sql, callback, 0, &zErrMsg);*/
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

    if(i == 1) {
        printf("No contact found!\n");
    }
}

ContactBook::ContactBook() {
    /*printf("Reading data from data base...\n");
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open("contacts.db", &db);
    if( rc ){
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        exit(0);
    }else{
        fprintf(stderr, "Opened database successfully\n");
    }*/

    if(_DEBUG) {
        cout<<"ContactBook_instance constructed"<<endl;
    }
}

ContactBook::~ContactBook() {
    if(_DEBUG) {
        cout<<"ContactBook_instance destroyed"<<endl;
    }
}

bool ContactBook::deletePerson(int pos) {
    try {
        //people.erase((vector<Contacts>::iterator)&people[pos]);
        people.erase(people.begin()+pos-1);
    } catch (exception &e){
        cout<<"Error occurred when deleting a person at position "<<pos<<" ."<<endl;
    }

}

bool ContactBook::clearBook() {
    try {
        this->people.clear();
        cout<<"Reloading book..."<<endl;
    } catch(ContactException &e) {
        //cout<<e.what()<<endl;
        cout<<"Can't clear ContactBook!"<<endl;
    }

}
