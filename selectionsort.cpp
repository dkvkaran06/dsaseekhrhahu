#include<iostream>

using namespace std;
void selectionsort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int minindex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minindex])
                {
                    minindex=j;
                }
        }
        swap(arr[minindex],arr[i]);
    }
}
int main()
{
    int arr[5]={23,4,5,12,3};
    selectionsort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
