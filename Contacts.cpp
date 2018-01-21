//
// Created by meirtz on 18-1-19.
//

#include "Contacts.h"

extern const bool _DEBUG;

using namespace std;

Contacts::Contacts(const char *name, const char *number, bool sex, const char *address, const char *date, const char *email)
        : name(name), address(address), date(date), email(email) {
    try {
        if(!isNumber(number))
            throw ContactException("Invalid numbers.");
        else
            this->number = number;
    } catch(ContactException &e) {
        cout<<"Invalid numbers."<<endl;
    }

    if(_DEBUG) cout<<"I've got date string:"<<date<<" and in object is:"<<this->date<<endl;
    this->sex = sex;
    time_t t;
    time(&t);
    id = long(t);
    this->total_num++;
    if (_DEBUG) cout << "Contacts_instance constructed, "<<this->total_num<<" instance(s) in total." << endl;
}

Contacts::~Contacts() {
    this->total_num--;
    if (_DEBUG) cout << "Contacts_instance destroyed, "<<this->total_num<<" instance(s) left." << endl;
}

int Contacts::get_total_num() {
    return Contacts::total_num;
}

extern bool isNumber(const char * str) {
    if (str == NULL)
        return false;
    int len = strlen(str);
    if (len == 0)
        return false;
    bool isaNumber = false;
    char ch;
    for (int i = 0; i < len; i++) {
        if (i == 0 && str[i] == '+')
            continue;
        if (isdigit(str[i])) {
            isaNumber = true;
        } else {
            isaNumber = false;
            break;
        }
    }
    return isaNumber;
}

void Contacts::display_contacts_instance(Contacts &ins) {
    printf(" -------------------------------------------------------------- \n");
    printf("|%-16s|%-45s|\n", "Name:", ins.name.c_str());
    printf("|%-16s|%-45s|\n", "Number:", ins.number.c_str());
    printf("|%-16s|%-45s|\n", "Sex:", (ins.sex?"Male":"Female"));
    printf("|%-16s|%-45s|\n", "Address:", ins.address.c_str());
    printf("|%-16s|%-45s|\n", "Birthday:", ins.date.c_str());
    printf("|%-16s|%-45s|\n", "Email:", ins.email.c_str());
    //printf("%-16s|%-45s|\n",);
    printf(" -------------------------------------------------------------- \n");

    if(_DEBUG) printf("%-16s|%-45d|\n", "TOTAL_NUM", Contacts::get_total_num());

}

// total_num should be retrained when copying instance(= when calling copy constructor).
Contacts::Contacts(const Contacts &con) {
    //const void *p = reinterpret_cast<const void *>(&con);
    //void *this_ptr = const_cast<void *>(reinterpret_cast<const void *>(this));
    //memcpy(this_ptr, p, sizeof(con));

    this->id = con.id;
    this->name = con.name;
    this->number = con.number;
    this->sex = con.sex;
    this->address = con.address;
    this->date = con.date;
    this->email = con.email;
    total_num++;
}

Contacts::Contacts() {}

