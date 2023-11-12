#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout << 7 / 2 << endl;   // = 3 why intiger  (calculated always higher dataType)
    // cout << 7 / 2.0 << endl; // = 3.5 why float (calculated always higher dataType)
    // cout << 'c' + 1 << endl; // = 100 why? bcz 'c' == 99 in ASCII so 99 + 1 = 100 (calculated always higher dataType)
    /* (precidence of DTs) double > float > long long int > long int > int > cheracter  */
    // int a = 3 / 2.1;   // calculated in float bcz of high precedence but then bcz of storing in int DT only 1 is stored (instead of floating point number)
    // cout << a << endl; // = 1
    // double a = 3/2; 
    // cout << a << endl; // = 1 why? bcz calculated as integers , both operands are int so result is 1 whcih is the stored in doubke :_) 

    // int,long int, long long int, float,double,char,bool,
    // Ranges :
    // -10^9 < int < 10^9
    // -10^12 <long int < 10^12
    // -10^18 <long long int < 10^18

    // int mx = INT_MAX;// max range of int
    // cout<<mx; 
    // cout<<mx+1; // throw error + val = -INT_MAX; 

    // int a = 100000;
    // int b = 100000;
    // int c = a*b;
    // cout<<c; // = 1410065408 -> exceed int range;

    int a = 100000;
    int b = 100000;
    double c = a*b;
    cout<<c; // = 1410065408 -> exceed int range;

    return 0;
}