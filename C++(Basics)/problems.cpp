#include <bits/stdc++.h>
using namespace std;

char upper(char c)
{
    return c - 'a' + 'A';
}

int main()
{
    ///////////////////////////////////if space occurs break the line and convert complete string to uppercase methord - 1
    // string str = "my name is saim";
    // for (int i = 0; i < str.size(); i++)
    // {
    //     // str[i] = toupper(str[i]);
    //     if (str[i] == ' ')
    //     {
    //         cout << endl;
    //     }
    //     else
    //     {

    //         cout << str[i];
    //     }
    // }

    ////////////////////// Methord 2
    // while(true){
    //     string str;
    //     cin>>str;
    //     if(str.size()==0){
    //         break;
    //     }
    //     for(int i=0;i<str.size();i++){
    //         str[i]=upper(str[i]);
    //     }
    //     cout<<str<<endl;
    // }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////Problem 2 least significat digit of a sequence of num should be either 2,3,5

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     long long int product = 1;
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int x;
    //         cin >> x;
    //         product *= x;
    //     }
    //     cout<<product<<endl;
    //     if (product % 10 == 2 || product % 10 == 3 || product % 10 == 5)
    //     {
    //         cout << "Yes" << endl;
    //     }
    //     else
    //     {
    //         cout << "No" << endl;
    //     }
    // }




}