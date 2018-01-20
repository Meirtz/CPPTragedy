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
    //Contacts类实例的引用计数，统计内存总共生产了多少个Contacts实例，在构造函数和拷贝构造函数调用时引用计数加一，析构函数调用时引用计数减一。该变量仅在调试中使用。
public:
    long id;
    string name;
    string number;
    bool sex;
    string address;
    string date;
    string email;

    Contacts();
    Contacts(const char *name, const char *number, bool sex = true, const char *address = "", const char *date = "", const char *email = "");
    Contacts(const Contacts & con);
    ~Contacts();

    static void display_contacts_instance(Contacts &ins);
    static int get_total_num();
};

#endif //CONTACTS_CONTACTS_H
