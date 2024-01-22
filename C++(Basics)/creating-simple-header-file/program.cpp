#include<iostream>
#include "myHeaderFile.h"
using namespace std;


int main()
{
    int a = 5, b = 4;
    float c = 5.5, d = 4.6;

    cout << "Sum is: " << add_nums(a, b) << endl;
    cout << "Sum is: " << add_nums(c, d) << endl;
    return 0;
}
