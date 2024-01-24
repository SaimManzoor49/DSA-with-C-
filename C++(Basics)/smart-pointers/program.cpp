#include <iostream>
#include <memory>
using namespace std;

class User
{

public:
    User()
    {
        puts("Constructor is called");
    }
    ~User()
    {
        puts("Destructor is called");
    }
    void greet()
    {
        cout << "Hello World " << this << endl;
    }
};

int main()
{
    {   // unique pointers are block scoped
        // in unique pointers you cant copy values or share them
        // User *saim = new User(); //
        // saim->greet(); // simple pointers // destructor is never called memory leak possible

        // unique_ptr<User>saim (new User()); // first Methord
        // saim->greet(); // destructor called automatically

        unique_ptr<User> saim = make_unique<User>(); // second methord
        saim->greet();                               // destructor is called automatically
    }
    puts("Outside the scope destructor will be called before me :_)");

    {// shared pointers

        shared_ptr<User> saim = make_shared<User>();
        shared_ptr<User> saimm = saim;
        saim->greet();
        saimm->greet();

        // shearnig and copying is allowed


    }



}