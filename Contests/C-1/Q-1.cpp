/*

Cheems doesn't like extra content so coming straight to the point. Given the input of one line, having words separated by a single space, print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.

Input:-
Given in one line, all letters are lowercase only, separated by a single space.

Characters used in input are from 'a' to 'z' only ( 26 in total ) , both included.

Length of input  
 

Output:-
Output each word with characters in uppercase.

Note:- A testcase contains only one word as the input to get partial marks. Also, the ideal solution has been provided, you can test any of your legal input to get its answer.

*/

#include <iostream>
#include <string>
using namespace std;

void to_capital(char &ch){
    ch = ch-'a'+'A';
}

void sol1(){
     string str;
    getline(cin, str);
    string word = "";

    for (int i = 0; i < str.size() + 1; i++)
    {

        if (str[i] == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else if (str[i] == '\0')
        {
            cout << word;
        }
        else
        {
            to_capital(str[i]);
            word += str[i];
        }
    }
}

void sol2(){
    while (true)
    {
        string str;
        cin>>str;
        if(str.size()==0){
            break;
        }
        for(int i=0;i<str.size();i++){
            to_capital(str[i]);
        }
        cout<<str<<endl;
    }
    
}

int main()
{

    // sol1();
    // sol2();
   
}