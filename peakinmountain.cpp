#include<iostream>
using namespace std;
int peak(int arr[],int size)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid<arr[mid+1]])
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
    int arr[5]={0,4,5,33,200};//unsorted arrray;
    int index=peak(arr,5);
    cout<<"peak exist at index "<<index;

}