#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Sets
{
    int a, b, c, d;
};

ostream &operator<<(ostream &stream, Sets &mySets)
{
    stream << mySets.a << " " << mySets.b << " " << mySets.c << " " << mySets.d;
    return stream;
}

int main()
{

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    for (auto i = nums.begin(); i < nums.end(); ++i)
    {
        cout << *i << endl;
    }

    vector<Sets> mySets;

    mySets.push_back({1, 2, 3, 4});
    mySets.push_back({5, 6, 7, 8});

    for (int i = 0; i < mySets.size(); ++i)
    {
        cout << mySets[i] << endl;
    }

    return 0;
}