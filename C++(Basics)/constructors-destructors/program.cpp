#include <iostream>
#include <string>
using namespace std;

class Phone
{

    string _name = "";
    string _os = "";
    int _price = 0;
    // Phone(); // Disableing a constructor by putting it in private section

public:
    Phone();                                                       // default constructor
    Phone(const string &name, const string &os, const int &price); // parametrized constructor
    Phone(const Phone &p);                                         // Copy constructor
    string getName() const { return _name; }
    string getOs() const { return _os; }
    int getPrice() const { return _price; }

    ~Phone(); // destructor
};

Phone::Phone() : _name(), _os(), _price()
{
    puts("Default constructor is called");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("Paratamarized constructor is called");
}

Phone::Phone(const Phone &p)
{
    puts("Copy constructor is called");

    _name = "old name " + p._name + "new Name ...";
    _os = p._os;
    _price = p._price + 200;
}

Phone::~Phone()
{
    cout << "Destructor is called for object " + _name << endl;
}

int main()
{

    Phone myPhone;
    cout << myPhone.getName() << endl;
    Phone ipxs("IPhone Xs", "IOS-14", 1000);
    cout << ipxs.getName() << endl;
    Phone ip12(ipxs);
    cout << ip12.getName() << endl;

    return 0;
}