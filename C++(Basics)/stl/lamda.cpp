#include <iostream>
using namespace std;

int main()
{

    []
    {
        cout << " i am lamda :_) " << endl;
    }();

    auto sum = [](auto a, auto b)
    { return a + b; };
    cout << sum(3.3, 4.1234224) << endl;

    return 0;
}