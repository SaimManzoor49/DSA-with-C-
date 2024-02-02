/*

Time is precious. So lets get to the crux of the problem straightaway!

Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order. We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B)
 

Hint: It's recommended you implement this using continue and goto statements. ;)


Constraints:

2 <= A,B <= 1000 (A and B will not be equal)

1 <= C <= 1000

Input format:

One line containing numbers - A, B, and C

Output format:

One line containing values from C-th number to 0 with the corresponding step value.

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cth_num;
    for (int i = 2; c > 0; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            c--;
            cth_num = i;
        }
    }
    int lcm;
    for (int i = 1; i <= a * b; ++i)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    int step;
    if (cth_num % a == 0 && cth_num % b == 0)
    {
        step = lcm;
    }
    else if (cth_num % a == 0)
    {
        step = a;
    }
    else
    {
        step = b;
    }

    for (int i = cth_num; i >= 0; i -= step)
    {
        cout << i << " ";
    }
}