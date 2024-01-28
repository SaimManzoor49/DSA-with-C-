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