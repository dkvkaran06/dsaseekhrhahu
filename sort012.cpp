#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort10(int arr[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        while(arr[i]==0 && i<j)
        {
            i++;
        }
        while(arr[j]==1 && i<j)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
    
}
// int main()
// {
//     vector<int> arr={1,0,0,1};
//     // int arr[4]={1,0,0,1};
//     // sort(arr,arr+4);
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<4;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
int main()
{
    int arr[5]={1,0,1,1,0};
    sort10(arr,5);
    printArray(arr,5);

}