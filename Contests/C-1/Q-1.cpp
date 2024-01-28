// given the input of one line, having words seperated by a single space print each word in in new line also capatalize all the words
// input <= 10e4

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