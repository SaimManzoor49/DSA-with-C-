#include <bits/stdc++.h>
using namespace std;

int main()
{

    ////////////////////////////////////////////////////
    /*
    Given arr of size N Given quiries q which is represented by integer L,R Find GCD(Gratest comman Divisor) of arr after including the part from range L to R.
    inclusively 1 based indexing you are graunteed that after excluding the part of the array remainig array is non empty
    (1 ,l-1) and (r+1,n)
    */

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n, q;
    //     cin >> n >> q;
    //     int arr[n + 10];
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     while (q--)
    //     {
    //         int l, r;
    //         cin >> l >> r;
    //         int gc = 0;

    //         for (int i = 1; i <= l - 1; i++)
    //         {
    //             gc = __gcd(gc, arr[i]);
    //         }
    //         for (int i = r + 1; i <= n; i++)
    //         {
    //             gc = __gcd(gc, arr[i]);
    //         }
    //         cout << gc << endl;
    //     }
    // }
    ////////////// time complexity O(t*q*l+r) = O(n^3)
    ////////////////////////////////////////////////////////Sol 2 using pre-compution

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 10];
        int fgcd[n + 10];
        int bgcd[n + 10];
        fgcd[0]=bgcd[n+1] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            fgcd[i] = __gcd(fgcd[i - 1], arr[i]);
        }
        for (int i = n; i >= 1; --i)
        {
            bgcd[i] = __gcd(bgcd[i + 1], arr[i]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            // int gc = 0;

            cout << __gcd(fgcd[l - 1], bgcd[r + 1]) << endl;
        }
    }
    ////////////// time complexity O(n+n+n+(t*Q)) = O(n^2);
}