#include<iostream>
using namespace std;
bool ispossible(int arr[],int size,int m,int mid)
{
     int student=1;
     int pagesum=0;
     for(int i=0;i<size;i++)
     {
        if(pagesum+arr[i]<=mid)
        {
            pagesum=pagesum+arr[i];

        }
        else{
            student++;
            if(student>m||arr[i]>mid)
            {
                return false;
            }
            pagesum=arr[i];
        }
     }
}
int bs(int arr[],int size,int m)
{
    int s=0;
    int sum=0;
    for(int i=0;i<size;i++)
    { 
        sum=sum+arr[i];

    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(ispossible(arr,size,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int m=2;
    int arr[4]={5,5,5,5};
    cout<<bs(arr,4,m);
}