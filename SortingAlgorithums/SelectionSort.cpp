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


void selectionSort(int *arr,int size){
    for (int i = 0; i < size-1; i++)
    {
        
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        

    }
    
}

int main(){

int arr[]= {3,3,2,5,7,8,1,2};
int size = sizeof(arr)/sizeof(arr[0]);

selectionSort(arr,size);

print(arr,size);



}