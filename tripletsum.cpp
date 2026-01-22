#include<iostream>
using namespace std;
int paired(int arr[],int size,int sum)
{
    
for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        for(int k=j+1;k<size;k++)
        {
        if(arr[i]+arr[j]+arr[k]==sum)
        {
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
        }
        }
    }
}
}
int main()
{
    int arr[5]={3,2,4,5,2};
    int sum=12;
    paired(arr,5,sum);
    
}