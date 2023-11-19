#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7; // this numbers has spefic significance first result will be able to stored in int second multimlicative inverse exists of all nums for this num
// const int N = 1e5 + 10;
const int N = 1e7 + 10;
// long long int Fact[N];
long long int arr[N];
// long long int HashArr[N];
long long int preFixArr[N];

int main()
{
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

    ///////////////////////////////////////////// Prifix Sum (preffered to use arr starting from 1 index instead of 0)

    /*
    Given array of a size N integers. given quries Q and each quriey given L and R print sum of array elements from index L to R (L and R included)
    Wheres
        1 <= N <= 10^5
        1 <= a[i] <= 10^9
        1 <= Q <= 10^5
        1 <= L , R <= N
    */

//    int n;
//    cin>>n;
//    for (int i = 1; i <= n; i++)
//    {
//         cin>>arr[i];
//         // preFixArr[i] = preFixArr[i-1]+arr[i]; // prefix Sum
//    }
   

//    int q;
//    cin>>q;
//    while (q--)
//    {
//     int l,r;
//     cin>>l>>r;
//     long long int sum = 0;
//     for (int i = l; i <= r; i++)
//     {
//         sum += arr[i];
//     }
//     cout<<sum;
//    }
//////////////////////////// Time complaxity = O(n^2) input = 10^10 for given constraints   
//////////////////////////// using preFix Sum   

//    int q;
//    cin>>q;
//    while (q--)
//    {
//     int l,r;
//     cin>>l>>r;
//     cout<<preFixArr[r]-preFixArr[l-1];
//    }

//////////////////////////// Time complaxity = O(n) input = 10^5 for given constraints





}