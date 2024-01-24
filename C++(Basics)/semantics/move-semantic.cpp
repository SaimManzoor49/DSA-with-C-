#include <iostream>
using namespace std;

void swap(int &a, int &b) // more efficent the normal swap function
{
    int temp = move(a);
    a = move(b);
    b = move(temp);
}

string greet(){
    return "Hello World!";
}

int main()
{

    int a = 5;
    int b = 2;
    swap(a, b);
    printf("value of a is %d\n", a);

    string str = greet(); 
    string&& str1 = greet();  // move sementic
    cout<<str1<<endl;


    return 0;
}