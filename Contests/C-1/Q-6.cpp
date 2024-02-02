#include <iostream>
#include <string>
using namespace std;

void toggleCase(char &c)
{
    if (c >= 'a' && c <= 'z')
    {

        c = 'A' + (c - 'a');
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c = 'a' + (c - 'A');
    }
}

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        toggleCase(str[i]);
    }

    int res = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            res -= str[i];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            res += str[i];
        }
    }

    if (res < 0)
    {
        res *= -1;
    }

    int flag = 1;

    for (int i = 2; i < res; i++)
    {
        if (res % i == 0)
        {
            flag = 0;
            break;
        }
    }

    cout << flag;
    return 0;
}