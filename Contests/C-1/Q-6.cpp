
/*

Monk loves Primes, whether it is number or word

Rules to convert a string to a number:
1. Convert the UpperCase letters to LowerCase letters
2. Convert the LowerCase letters to UpperCase letters

Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the LowerCase letters. The resultant number is X.

Note: If X is negative take absolute value of it

Print 1 if X is a prime number and 0 if not
(Prime Number: A number which is divisble by the number one and itself, i.e, it has 2 divisors)

 

Input Format:

A single line which consists of a string

 

Output Format:

0 or 1 in a single line 

 

Constraints:

1 <= string length <= 2000

*/

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