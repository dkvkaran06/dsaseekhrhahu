#include<iostream>
using namespace std;
int main()
{
    
    int size=5;
    int arr[size]={5,22,6,23,12};
    for(int i=1;i<5;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}