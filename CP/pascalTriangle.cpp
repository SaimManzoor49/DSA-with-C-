#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // int factorial=1;
    // for (int i = 2; i <= n; i++)
    // {
    //     factorial*=i;
    // }
    // return factorial;
    
    if(n==1||n==0){
        return 1;
    }

    return n*fact(n-1);

}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " "; // c0^1 , c0^2 ...
        }
        cout << endl;
    }
}

