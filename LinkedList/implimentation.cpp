#include <iostream>
using namespace std;

int main()
{

    int nums[] = {1, 1, 2,2,3,4};
    int arrSize = sizeof(nums) / sizeof(nums[0]);
    int length = arrSize;
    for (int i = 0; i < arrSize-1 ; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            nums[i + 1] = nums[i + 2];
            length--;
        }
    }
    length +=1; 

int k=0;
    while (k<length)
    {
        cout<<nums[k];
        k++;
    }
    

    return 0;
}