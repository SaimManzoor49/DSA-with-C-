#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{

    int binary = 0;

    int x = 1;
    while (n)
    {
        binary += x * (n % 10);
        x *= 2;
        n /= 10;
    }

    return binary;
}

int octalToDecimal(int n)
{
    int octal = 0;
    int x = 1;

    while (n)
    {
        octal += x * (n % 10);
        x *= 8;
        n /= 10;
    }
    return octal;
}

int hexadecimalToDecimal(string n)
{
    int hex = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            hex += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            hex += x * (n[i] - 'A' + 10);
        }
        else if (n[i] >= 'a' && n[i] <= 'f')
        {
            hex += ((n[i] - 'a') + 10) * x;
        }
        x *= 16;
    }
    return hex;
}

int decimalToBinary(int n)
{
    int x = 1;
    int bi = 0;

    while (x <= n)
        x *= 2;
    x /= 2;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        bi = bi * 10 + lastdigit;
    }
    return bi;
}

int octalToBinary(int n)
{
    int x = 1;
    int bi = 0;

    while (x <= n)
        x *= 8;
    x /= 8;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 8;
        bi = bi * 10 + lastdigit;
    }
    return bi;
}

string hexToBinary(int n)
{
    int x = 1;
    string ans = "";

    while (x <= n)
        x *= 16;
    x /= 16;


while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;
        if(lastdigit<9){
        ans += to_string(lastdigit);
        }else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }    

    return ans;
}

int main()
{

    int n;
    cin >> n;
    // cout << binaryToDecimal(n) << endl;
    // cout << octalToDecimal(n) << endl;
    // string st;
    // cin >> st;
    // cout << hexadecimalToDecimal(st) << endl;
    cout << hexToBinary(n) << endl;
}