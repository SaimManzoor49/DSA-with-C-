#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long res = 0;
        long long pow_2 = 1;
        long long len;
        cin >> len;

        string str;
        cin >> str;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            int digit = str[i] - '0';
            res += digit * pow_2;
            pow_2 *= 2;
        }

        cout << res;
    }
}
