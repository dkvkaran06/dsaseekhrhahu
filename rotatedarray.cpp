#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int end,int start,int key)
{
  
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
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
    return -1;
}
int pivot(int arr[],int size)
{
    int s=0;
    int e=size-1;
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
int findpos(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int pivote=pivot(arr,size);
    
    
        if(arr[pivote]<=key && arr[size-1]>=key)
        {
            return binarysearch(arr,size,pivote,size-1,key);
        }
        else
        {
            return binarysearch(arr,size,0,pivote-1,key);
        }
    

}
int main()
{
    int arr[5]={7,9,1,4,5};
 
    cout<<"index at "<<findpos(arr,5,4);
    
   

}
