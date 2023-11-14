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

    // int a = 100000;
    // int b = 100000;
    // long longint c = a*b;
    // cout<<c; // = 1410065408 -> still exceed int range why? bcz first calculated as int then stored in double (while calculating as int is exceeded the range)

    // int a = 100000;
    // int b = 100000;
    // double c = a*1LL*b;//higher order = long long int so treated as LLi
    // cout<<fixed<<setprecision(0)<<c; // = 1e+010 = 1x10^10 // correct // fixed to remove scientfic notation // setprecision(0) to remove floting point nums

    // double c = 1e24;//higher order = long long int so treated as LLi
    // cout<<fixed<<c; // = 99999998322.000 something but not 1e24 why? // We do agree that double is used to store very large values but at wot cost (at cost of less precision)
    /* don't use double and float unless for very spefic useCase (instead use long int or long long int) */

    //////////////////////////////// Problem //////////////////////////////////////
    /* Given rectangle of lenght l and b. Print area of rectangle */

    // Constraints:
    // 1 <= l <= 10^9
    // 1 <= b <= 10^9

    // Input Format
    //  2 spaces seperated integer l and b

    // Output
    // Single number which is area of rectangle

    // Simple input:
    //  3 4

    // Sample output:
    // 12

    /////////////////Solution

    // int l,b;
    // cin>>l;
    // cin>>b;

    // long long int area = l*b*1LL;
    // cout<<area;

    ///////////////////////////////////////////////////////////////////////////////////////

    // int n=10;
    // while (n--) // every num instead of 0 is true (1,2,3,4,5,... == true && 0 == false)
    // {
    //     cout<<n<<endl;
    // }
    /////////////
    // for (;;)
    // {
    //     cout<<"HeloWorld! infinately!!!";
    // }

    //////// continue  keyword will skip current iteration(1 iteration skiped) and contine next itreation

    ///////////////// a simple task /////////////////
    // while(true){
    //     int n;
    //     cin>>n;
    //     if(n==42){
    //         break;
    //     }
    //     cout<<n<<endl;
    // }
    /////////////////////////////////////////////////

    ////////////// a simple tast ///////////////

    // find sum of int s = 123456; // 6+5+4+3+2+1

    // int s = 1234567;

    // int sum=0;

    // while (s>0)
    // {
    //     sum+=s%10;
    //     s /= 10;
    // }
    // cout<<sum;

    ///////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////// C++ strings
    // string str = "Hello";
    // string str2 = "World!";
    // string str3 = str + " " + str2;
    // // cout<<str3.size();
    // // str[1] = e
    // //////string is collection of cheracters

    // for (int i = 0; i < str3.size(); i++)
    // {
    //     cout << str3[i] << " ";
    // }
    // cout << endl;

    // string str;
    // getline(cin,str); // used to take in put in strings solving prob or spaces in cin
    // cout<<str;
    // return 0;

    // int t;
    // cin>>t;
    // cin.ignore();// using cin your cursor will be like 1|      and next cin first ignore this '\n' and then take input // just to understand underthehood buffers concept works
    // while(t--){
    //     string s;
    //     getline(cin,s);// but in getline your curesor will not ignore '\n' instead take input directly first input will be '\ns'  //// just to understand underthehood buffers concept works
    //     cout<<s<<endl;;
    // }

    ///////////////////////// Reverse string

    //     string str;
    //     string str_rev;
    //     cin>>str;

    //     for(int i = str.size(); i>=0; i--){
    // //          str_rev +=str[i]; // it works but not good bcz adding char(str[i]) in string(str_rev) is to preffered + Time Complaxity = O(n)
    //          str_rev.push_back(str[i]); // it is good to do Time Complaxity = O(1)
    //     }

    //     cout<<str_rev;

    ////////////////////// take large number input

    // string s;

    // cin>>s;

    // int last_digit = (int)s[s.size()-1] - '0' ;
    // cout<<last_digit;

    ////////////////////////////////////// Arrays

    // int a[5];
    // a[6] = 10;//
    // cout<<a[6];// it worked but is an undefined behavoiur the val at unallocated memory loc can be changend by any other process.

    // int n = 1e7; 
    // int a [n];// this large size is not allowed in local Scope but allowed in global Scope (should must be constant)
    // in local scope the array will be stored in stack memorey which is small
    //////////
    // int n = 1e5; 
    // int a [n];// this large size is allowed in local Scope and its close to max allowed size;
    // in global scope the array will be stored in data Segment which is larger then stack 
    // a[n-1] = 7;
    // cout<<a[n-1];



}
