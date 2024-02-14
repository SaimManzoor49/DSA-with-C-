#include <iostream>
using namespace std;

/* Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.
Example
n=10

q =[[1,5,3],[4,8,7],[6,9,1]]

Queries are interpreted as follows:
    a b k
    1 5 3
    4 8 7
    6 9 1

dd the values of k between the indices a and b inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]

*/

const int N = 1e7+10;
int arr[N];

int main()
{

    int t,q;
    cin>>t>>q;

    while (q--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;
    }

    for (int i = 1; i <= t; ++i)
    {
        arr[i]+=arr[i-1];
    }

    long long max=-1;
    for (int i = 1; i <= t; i++)
    {
       if (arr[i]>max)
       {
        max=arr[i];
       }
       
    }

    cout<<max;
    
    
    

    return 0;
}