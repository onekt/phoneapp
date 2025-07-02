#include <iostream>
#include <string>

using namespace std;

struct contact
{

    int id;

    string name;

    string pNumber;
};
const int n = 100;

contact contacts[n];
int countContact = 0;

string addContact(string name, string pNumber)
{

    if (countContact >= n)
    {

        cout << "Phonebook is full " << endl;

        return "Phonebook is full ";
    }

    contact contact1;

    contact1.id = countContact + 1;

    contact1.name = name;

    contact1.pNumber = pNumber;

    contacts[countContact] = contact1;

    cout << "contact added successfully" << endl;

    countContact++;
};

int searchContact(int id)
{

    if (id > countContact || id < 0)
    {
        return 0;
    }

    for (int i = 0; i <= countContact; i++)
    {
        if (contacts[i].id == id)
        {
            // cout<<contacts[i];
            cout << contacts[i].name;
            return 0;
        }
    }
}

int main()
{

    addContact("billy1", "1234567890");
    addContact("billy2", "1234567890");
    addContact("billy3", "1234567890");
    addContact("billy4", "1234567890");
    addContact("billy5", "1234567890");
    addContact("billy6", "1234567890");
    addContact("billy7", "1234567890");
    addContact("billy11", "1234567890");
    addContact("billy12", "1234567890");
    addContact("billy13", "1234567890");
    addContact("billy14", "1234567890");
    addContact("billy15", "1234567890");
    addContact("billy16", "1234567890");
    addContact("billy17", "1234567890");

    searchContact(5);
}