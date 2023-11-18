#include<bits/stdc++.h>
using namespace std;


void swap(int & a,int & b){
    int temp=a;
    a=b;
    b=temp;
}

void print(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


void bubbleSort(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        
        for (int j = 0; j < size-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        

    }
    
}

int main(){

int arr[]= {3,3,2,5,7,8,1,2};
int size = sizeof(arr)/sizeof(arr[0]);

bubbleSort(arr,size);

print(arr,size);



}