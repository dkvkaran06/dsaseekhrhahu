#include<iostream>
using namespace std;
void rotate(int arr[],int arr2[],int size ,int k)
{
    for(int i=0;i<size;i++)
    {
        arr2[(i+k)%size]=arr[i];
    }
    
}
void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int arr[5]={1,2,3,45,5};
int k=2;
int arr2[5]={0};
rotate(arr,arr2,5,2);
print(arr2,5);
}