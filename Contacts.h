//
// Created by meirtz on 18-1-19.
//
#ifndef CONTACTS_CONTACTS_H
#define CONTACTS_CONTACTS_H

#include <iostream>
#include <string>
#include "ContactException.h"
#include <cstring>

extern const bool _DEBUG;
using namespace std;

extern bool isNumber(const char * str);

class Contacts {
private:
    static int total_num;
public:
    long id;
    string name;
    string number;
    bool sex;
    string address;
    string date;
    //multiple date, such as birthday
    string email;

    Contacts();
    Contacts(const char *name, const char *number, bool sex = true, const char *address = "", const char *date = "", const char *email = "");
    Contacts(const Contacts & con);
    ~Contacts();

    static void display_contacts_instance(Contacts &ins);
    static int get_total_num();
};

#endif //CONTACTS_CONTACTS_H
