/*

Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.

Given the number of  test case t.The first line of each test case is a number n.Next line contains n integers - A1,A2,......An.For each given test case tell whether the given sequence will be liked by Jiya.

INPUT FORMAT-

First line constains t number of test cases.

Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.

OUTPUT FORMAT -

Print "YES" or "NO",whether Jiya likes the sequence or not.

CONSTRAINTS-

1≤t≤100

1≤n≤15

1≤Ai≤10, for all i

 

HINT - Least significant digit of a number can be obtained by taking the number % 10.

Mind the case of output to be printed.

*/

#include<iostream>
using namespace std;


int main(){

int t;
cin>>t;
while (t--)
{
    long long res=1;
    long long len;
    cin >> len;
    while (len--)
    {
        long long num;
        cin>>num;
        res*=num;
    }

    if(res % 10 == 2 || res % 10 == 3 || res % 10 == 5){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}


}