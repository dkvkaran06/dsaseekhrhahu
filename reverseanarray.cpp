#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while (start<=end)
    {
    swap(arr[start],arr[end]);
    start++;
    end--;
    }

}
int main()
{
    
    int arr1[6]={23,13,2,4,2,1};
    int arr2[5]={2,3,5,2,44};
    reverse(arr1,6);
    reverse(arr2,5);
    printArray(arr1,6);
    printArray(arr2,5);
}



























// ye program bhi shi h lekin isse hamari original array nhi badlati
//sirf ye print krne ke kaam aati reverse me original aaray whi rhti .
// {
//     int arr[5]={4,42,2,4,3};
//     for(int i=4;i>=0;i--)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<arr[0];
// }