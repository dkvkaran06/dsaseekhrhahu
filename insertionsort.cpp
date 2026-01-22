#include<iostream>
using namespace std;
int main()
{
    
    int size=5;
    int arr[size]={5,22,6,23,12};
    for(int i=1;i<5;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;

    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}