#include <iostream>
#include <string>
using namespace std;

template <typename T>

void func(T t)
{

    cout << t << endl;
}

template <typename T ,typename... Args> // variadic
void func(T t, Args... args)
{
    cout << t << endl;
    func(args...); // recursion
}

int main()
{

    func(1, 2.2, 'c', true, "saim");

    return 0;
}