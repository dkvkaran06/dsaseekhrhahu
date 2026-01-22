#include<iostream>
#include<climits>
using namespace std;
int getpivot(int arr[],int size)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
int arr[5]={2,4,8,1,3};
int pivot=getpivot(arr,5);
cout<<pivot;
}