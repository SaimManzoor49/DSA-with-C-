#include <bits/stdc++.h>
using namespace std;

// void increment(int i){ // by value
// void increment(int &i){ // by Referance
//     i++;
// }

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

const int M = 1e9 + 7; // this numbers has spefic significance first result will be able to stored in int second multimlicative inverse exists of all nums for this num
// const int N = 1e5 + 10;
const int N = 1e7 + 10;
// long long int Fact[N];
long long int HashArr[N];

int main()
{
    ////////////////////////////////////////////////// Referances(&) in c++ but dosent exist in c

    // int a = 3;
    // int b = 4;

    // cout<<a<<endl;
    // increment(a);
    // cout << a << " " << b << endl;
    // swap(a, b);
    // swap(a, b);// swap is also build in in c++ but not in c
    // max(a,b); //
    // min(a,b); //
    // cout << a << " " << b << endl;
    //////////same goes for strings but not for arrays. arrays are always pass be ref

    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // (a+b)%M = ((a%M)+(b%M))%M
    // (a*b)%M = ((a%M)*(b%M))%M
    // (a-b)%M = ((a%M)-(b%M)+M)%M
    // (a/b)%M = ((a%M)*(b^-1)%M) b innverse = multiplicative inverse // ignore for now
    ///// Used when the required answer is vary large to store so we give smaller version of answer using modulo

    //////////////////////////////// find factorial of N number (N<=10e5) for T test cases (T<=10e5)

    //////////////////////// SOL 1
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin>>n;
    //     int fact = 1;
    //     for (int i = 2; i <= n; i++)
    //     {
    //         fact = fact*i;
    // it works for only small number bcz fact of large num cant be stored even in long long int
    //         fact = (fact*i) % M;
    // so we use modulo to store fact of large number in smaller version but still for very large number allowed computional time will be finished
    //     }
    // cout<<fact;
    // }

    //////////////////////// SOL 2 first we will declare global constants and an array or large size and will use pre computional technique
    // Fact[0] = 1;
    // Fact[1] = 1;
    // for (int i = 2; i < N; i++)
    // {
    //     Fact[i] = (Fact[i-1]*i)%M;
    // }
    // // used pre computional technique now just need to print the calculated factorial or required number t times

    // int t;
    // cin>>t;
    // while (t--)
    // {
    //     int n;
    //     cin>>n;
    //     cout<<Fact[n];
    // }

    ////////////////////////////////////////////////////// for q time find how many times a number existes in an array

    /////////////////////// SOL 1 complaxity O(n^2)
    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int x;
    //     cin >> x;
    //     int ct = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] == x)
    //         {
    //             ct++;
    //         }
    //     }
    //     cout << ct;
    // }

    ///////////////////////// SOL 2 using hashing declared global variables complaxity O(n)

    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     HashArr[arr[i]] += 1;
    // }
    // int q;
    // cin>>q;
    // while (q--)
    // {
    //     int x;
    //     cin>>x;
    //     cout<<HashArr[x];
    // }
    

}
