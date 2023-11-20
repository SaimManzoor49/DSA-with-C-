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

   

}
