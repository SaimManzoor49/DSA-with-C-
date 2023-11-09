#include <iostream>
using namespace std;

/////////////////////////////////////
void increment(int *a)
{
    *a = *a + 1;
}

/////////////////////////////////////
// int SomeOfElements(int a[])
int SomeOfElements(int *a) // same as above

{

    cout << "SomeOfElement function  " << endl;
    cout << " sizeof array a : " << sizeof(a) << " sizeof a[0] : " << sizeof(a[0]) << endl; // sizeof arr[0] = 4, sizeof arr = 4 -_- (bcz of referance of arr)
    int size = sizeof(a) / sizeof(a[0]);

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += a[1];
    }

    return sum;
}
/////////////////////////////////////////////////////////////////

// void printStr(const char *C) //For ReadOnly
// void printStr(char C[])
void printStr(char *C)
{

    while (*C != '\0')
    {
        cout << *C;
        C++;
    }
}
////////////////////////////////////////////////////////////////

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
    // int a[] = {1, 2, 3, 4, 5};
    // int size = sizeof(a) / sizeof(a[0]);
    // cout << "main function  " << endl;
    // cout << " sizeof array a : " << sizeof(a) << " sizeof a[0]: " << sizeof(a[0]) << endl;

    // int sum = SomeOfElements(a);

    // cout << "sum : " << sum << endl;

    //////////////////////////////////////// Cheracter Arrays and pointers (string data structure)

    // char str[20] = "saim"; // null char is implicet
    // char str[] = "saim"; // prefered to use bcz of compile time size determination of arr size (efficent memory managment)
    // char str[4] = "saim";//compilation error bcz no space for null cheracter '\0'
    // char str1[20];
    // str1="saim\0";//not possible
    // cout<<str<<endl;
    //////////////////////////  str[i] ==== *(str+i)
    //////////////////////////  arrays always passed as referance

    // printStr(str);
    ////////////////////////////////////////////        //

    // char *C = "saim"; // same as cout<<"saim"; // stays constant // C[2] = 's'; => not possible
    // cout<<*C; // s
    // printStr(C);

    ///////////////////////////////
    // int p[] = {1,3,4,5,5};
    //  p //// act as a pointer but not auctuall trrated as pointer  // just provide us flexability to access array
    // int * p2;
    // p=p2;// both are pointers of same type, but the statement in not possible  could say p is constatnt pointer p2 is simple pointer
    //////////////////////////

    /////////////////////////////////////////// Pointers and multi Dimensional Arrays

    // int a[2][3] = {{1,2,3},{4,5,6}};
    // a = 1923#4 =>
    // *a = a[0] = 892#3  = {1,2,3};
    // *(a+1) = a[1] = 7843#4 ={4,5,6};

    // cout<<*(*(a+1)+2);

    // cout<<a<<endl;
    // cout<<*a<<endl;
    // cout<<a[0]<<endl;
    ///// a[0]  =  arr[3] && a[1] = arr[3] two arrays of size 3 each stored in one array of size 2
    ///// a[0] === row 1
    ///// a[1] === row 2
    // So
    // int *b = *a;  // *b = 1;
    // int *b = *(a+1); // *b = 4;
    // cout<<(*b);
    // Or
    // int (*b) [3] = a ; // correct

    // cout<<**b; // 1

    int c[3][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}},
        {{9, 10}, {11, 12}}};

    //          | x1,x2|
    //          | y1,y2|
    //          | z1,z2|

    // c[0] = arrA[2] = arr2[2]+arr3[3]
    // c[1] = arrB[2] = arr4[2]+arr5[3]
    // c[0] = arrC[2] = arr6[2]+arr7[3]

    // Func(int arr[][2][2]){} // size is required for all dimensions other then 1 // they got adresses in nested state
    // Func(int (*arr)[2][2]){} // same as above
    // pointer to pointer wont work in 2 or 3 dimensional arrays => Func(int **arr){} or Func(int ***arr){}  

    return 0;
}
