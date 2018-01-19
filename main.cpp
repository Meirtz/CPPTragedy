#include <iostream>
#include "Contacts.h"
#include "ContactBook.h"

extern const bool _DEBUG = true;

using namespace std;

void contacts_test() {
    Contacts test_contacts_instance("Meirtz", "18512377787", true, "Yayuan, Chongqing Jiaotong Unversity, China");
    Contacts::display_contacts_instance(test_contacts_instance);
}
void contact_book_test() {
    ContactBook test_book_instace;

    Contacts person1("Meirtz", "18512377787", true, "Yayuan A, Chongqing Jiaotong Unversity, China");
    Contacts person2("T.Zhang", "12345678901", true, "Yayuan B, Chongqing Jiaotong Unversity, China");

    test_book_instace.addPerson(person1);
    test_book_instace.addPerson(person2);
    test_book_instace.dispaly();
    test_book_instace.deletePerson(2);
    test_book_instace.dispaly();
}

int Contacts::total_num = 0;


int main() {
    contacts_test();
    contact_book_test();
    return 0;
}