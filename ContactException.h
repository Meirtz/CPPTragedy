//
// Created by meirtz on 18-1-19.
//

#ifndef CONTACTS_CONTACTEXCEPTION_H
#define CONTACTS_CONTACTEXCEPTION_H

#include <iostream>
#include <string>

class ContactException:public std::exception {
public :
    explicit ContactException(const std::string s);

};

#endif //CONTACTS_CONTACTEXCEPTION_H
