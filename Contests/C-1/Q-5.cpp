#include<iostream>
using namespace std;



int main(){

    int t;
    cin>>t;

    while (t--)
    {

        int n;
        cin >> n;

        int a[n][n];
        a[0][0] = 1;

        for (int i = 1; i < n; ++i)
        {
            a[i][0] = 1;
            a[i][i-1]=1;
            for (int j = 1; i < i-1; ++j)
            {
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
            
        }
        


    }
    


}