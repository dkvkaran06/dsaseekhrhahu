#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int arr[],int size,int k,int mid)
{
     int cowcount=1;
     int lastpos=arr[0];
     for(int i=0;i<size;i++)
     {
        if(arr[i]-lastpos>=mid)
        {
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastpos=arr[i];
        }
     }
     return false;

}
int agresiveecow(int arr[],int size,int k)
{
    sort(arr,arr+5);
    int s=0;
    int maxi=-1;
    for(int i=0;i<size;i++)
    {
        maxi=max(maxi,arr[i]);

    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e)
    {
        if(ispossible(arr,size,k,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[5]={4,6,3,2,1};
    int k=2;
    cout<<agresiveecow(arr,5,k);

}