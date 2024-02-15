#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n){
    const int N = 20;
static int hasharr[N];

for (int i = 0; i < n; i++)
{
    hasharr[arr[i]]++;
}


for (int j = 1; j < N+1; j++)
{
    if(hasharr[j]>1){
        return true;
    }
}

unorder_map<int,int>mp;
    return false;
}

int main(){

int arr1[]={1,2,3,4};
int arr2[]={1,2,3,1};
int arr3[]={1,1,1,3,3,4,3,2,4,2};

cout<<  check(arr1,4)<<endl;
cout<<  check(arr2,4)<<endl;
cout<<  check(arr3,10)<<endl;


}