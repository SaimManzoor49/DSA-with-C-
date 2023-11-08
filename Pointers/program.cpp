#include <iostream>
using namespace std;


// void increment(int *a){
//     *a=*a+1;
// } 


// int SomeOfElements(int a[]) 
int SomeOfElements(int *a)// same as above

{

cout<<"SomeOfElement function  "<<endl; 
cout<<" sizeof array a : "<<sizeof(a)<<" sizeof a[0] : "<<sizeof(a[0])<<endl;  // sizeof arr[0] = 4, sizeof arr = 4 -_- (bcz of referance of arr) 
int size = sizeof(a)/sizeof(a[0]);

int sum=0;

for(int i = 0; i<size;i++){
    sum+=a[1];
}

return sum;
    
}


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

    ///////////////////4} reinterpret cast syntax ->>> reinterpret_cast<type*>(&val) // Most dangerous casting not in cpp standerd used for Pointer to Pointer type casting


    ///////////////////////////////////////////// Void Pointer
    // int a = 10;
    // void *p = &a;

    // cout<<p<<endl;
    // cout<<*p<<endl;//not possible bcz the pointer have no type dose not know whats the size of variable in memory(in bytes to look for)
    // cout<<*p+1<<endl;// same goes for this 


    //////////////////////////////////////////////Pointers to Pointers

        // int x=10;
        // int *p;
        // p=&x;
        // *p=20;
        // int **q=&p;
        // // cout<<**q<<endl;
        // int ***ppp = &q;
        // ***ppp = 30;
        // cout<<***ppp<<endl;

    /////////////////////////////////////////// Call by referance - useCase of Pointer

    // int a =10;
    // cout<<a<<endl;
    // increment(&a);
    // cout<<a<<endl;


    ////////////////////////////////////////// Arrays as function argument
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]); 
    cout<<"main function  "<<endl;
    cout<<" sizeof array a : "<<sizeof(a)<<" sizeof a[0]: "<<sizeof(a[0])<<endl;

    int sum = SomeOfElements(a);

    cout<<"sum : "<<sum<<endl;




    return 0;
}
