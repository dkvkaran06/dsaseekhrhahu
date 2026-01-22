#include<iostream>
using namespace std;
int paired(int arr[],int size,int sum)
{
    
for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(arr[i]+arr[j]==sum)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}
}
int main()
{
    int arr[5]={3,2,4,1,2};
    int sum=5;
    paired(arr,5,sum);
    
}