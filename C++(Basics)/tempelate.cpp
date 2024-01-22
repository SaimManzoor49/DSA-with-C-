#include <bits/stdc++.h>
using namespace std;

template <typename T>//// is provides types of variable which are dynamic in nature

T add_nums(T a, T b) 
{
    return a + b;
}

int main()
{
    int a = 5, b = 4;
    float c = 5.5, d = 4.6;

    cout << "Sum is: " << add_nums(a, b) << endl;
    cout << "Sum is: " << add_nums(c, d) << endl;
    return 0;
}