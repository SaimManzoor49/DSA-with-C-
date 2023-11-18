#include <bits/stdc++.h>
using namespace std;

char upper(char c)
{
    return c - 'a' + 'A';
}

char lower(char c){
    return c -'A' + 'a'; 
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

    //////////////////////////////////////////////////////////// Binary string t0 decimal

    // string str;
    // cin>>str;
    //     long long int decimal=0;
    //     long long int power2=1;
    // for(int i=0;i<str.size();i++){
    //     decimal+=(str[i]-'0')*(power2);
    //     power2*=2;
    // }
    // cout<<decimal<<endl;

    ///////////////////////////////////////////////////////// find Cth number from the numbers which are multiple of A or B then print from Cth number to 0 in way that if divisble by A print Reminder and same for B but if divisible by both A and B print LCM of A,B of the number.

    // int a, b, c;
    // cin >> a >> b >> c;
    // int Cth_num= 0;
    // for (int i = 2; c > 0; i++)
    // {
    //     if (i % a == 0 || i % b == 0)
    //     {
    //         c--;
    //         Cth_num = i;
    //     }
    // }

    // int lcm;
    // for (int i = 1; i <= a*b; i++)
    // {
    //     if(i%a==0&&i%b==0){
    //         lcm=i;
    //         break;
    //     }
    // }

    // int step;

    // if(Cth_num%a==0&&Cth_num%b==0){
    //     step=lcm;
    // }else if (Cth_num%a==0)
    // {
    //     step = a;
    // }else{
    //     step = b;

    // }

    // for (int i = Cth_num; i >=0; i=i-step)
    // {
    //     cout<<i<<" ";
    // }

    ///////////////////////////////////////////////////// print Pascal Triangle for t testCases
    /*
        1
        1   1
        1   2   1
        1   3   3   1
        1   4   6   4   1
        1   5   10  10  5   1
        1   6   15  20  15  6   1

      */

     // [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     int numRows;
    //     cin >> numRows;
    //     int arr[numRows][numRows];

    //         arr[0][0]=1;
    //     for (int i = 1; i < numRows; i++)
    //     {
    //         arr[i][0]=1;
    //         arr[i][i]=1;
    //         for (int j = 1; j < i; j++)
    //         {
    //             arr[i][j] = arr[i-1][j-1] +  arr[i-1][j];
    //         }
    //     }
        
    //     for (int i = 0; i < numRows; i++)
    //     {
    //         for (int j = 0; j <= i; j++)
    //         {   
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
            
    //     }
    // }


    ///////////////////////////////////////// Convert lower case letters of string to  upper and viceVersa sum up ASCII values of upper case letters and subtract ASCII vals of lower case letters if the result is prime print 1 else 0

    // string str;
    // cin>>str;

    // for (int i = 0; i < str.size(); i++)
    // {
    //     if(str[i]>='a'&& str[i]<='z'){
    //         str[i]=upper(str[i]);
    //     }else if (str[i]>='A'&&str[i]<='Z')
    //     {
    //         str[i]=lower(str[i]);
    //     }
        
    // }

    // int result=0;
    
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if(str[i]>='a'&& str[i]<='z'){
    //       result -= str[i]; 
    //     }else if (str[i]>='A'&&str[i]<='Z')
    //     {
    //       result += str[i]; 
    //     }
    // }

    // if(result<0){
    //     result *= -1;
    // }

    // for(int i=2;i<result;i++){
    //     if (result%i == 0)
    //     {
    //         cout<<0;
    //         return 0;
    //     }
        
    // }
    // cout<<1;



    
}