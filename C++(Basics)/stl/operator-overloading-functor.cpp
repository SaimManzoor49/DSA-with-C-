#include <iostream>
using namespace std;

class MyFloat
{
    float ft;

public:
    MyFloat()
    {
        ft = 0.1;
    }
    void getValue()
    {
        cout << ft << endl;
    }
    void operator()(float v)
    {
        ft += v;
    }
};

int main()
{

    MyFloat f;
    f.getValue();

    f(7);
    f.getValue();

    return 0;
}