#include <iostream>
using namespace std;

int main()
{

    // int a = 10;
    // int *p = &a;

    // int arr[3]{1, 2, 3};
    //////////////////////////////////////////Printing Pointers and addresses

    // cout<<" p == &a "<<" p = "<<p<<" &a = "<<&a<<endl;
    // cout<<*p<<endl;
    // cout<<*arr<<endl;
    // cout<<arr[0]<<endl;

    ///////////////////////////////////////////accessing a var using Pointer
    // *p = 20;
    // *arr = 11;

    ///////////////////////////////////////////variable a is over written deiretly by changing value at its address
    // cout<<*p<<endl;
    // cout<<*arr<<endl; //11
    // cout<<arr[0]<<endl; //11
    // cout<<a<<endl;

    ////////////////////////////////////////////Accessing arrays 2 element using pointer and array type

    // cout<<*arr+1<<endl; // +1 means plus sizeof(int) in memory address of first index array

    ///////////////////////////////////////////Changing pointer type
    //////////////////////////////////////////Type Casting
    ////////////////1} C Style syntax->>>  (type)val // * for pointers
    // char *cp = (char*)&val;
    ////////////////2} static cast  syntax->>>  static_cast<type>(val)
    // char *cp = static_cast<char*>(ip);

    // int val = 1025;
    // char * cp = (char*)&val;
    // cout<<&val<<endl;
    // cout<<cp<<endl;

    //////////////////3} const cast syntax ->>> const_cast<type>(val)
    // const int c = 20;
    // int *cp = const_cast<int*>(&c);
    // *cp = 11212; /// OverWriting a const variable using pointers and typeCasting
    // cout<<*cp;

    return 0;
}
