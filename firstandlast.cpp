#include<iostream>
using namespace std;

int firstoccurence(int arr[],int size,int key)// finding in left most occured or not
{
int s=0,e=size-1;
int mid=s+(e-s)/2;
int ans=-1;

while(s<=e)
{
    if(arr[mid]==key)
    {
        ans=mid;
        e=mid-1;
        
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    
    mid=s+(e-s)/2;
}
return ans;
}
int lastoccurence(int arr[],int size,int key)
{
int s=0,e=size-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e)
{
    if(arr[mid]==key)
    {
        ans=mid;
        s=mid+1;
    }
     else if(arr[mid]>key)
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    
    mid=s+(e-s)/2;
}
return ans;
}
int main()
{
   int arr[5]={1,1,1,1,6};
   int index1=firstoccurence(arr,5,1);
   int index2=lastoccurence(arr,5,1);
   cout<<"firstoccureance at "<<index1<<" "<<"second occurence at"<<index2<<endl;
   int count=(index2-index1)+1;
   cout<<"no of times key occcurs in array"<<count;


}