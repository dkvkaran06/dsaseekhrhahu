#include<iostream>
using namespace std;
int summation(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"size of element";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of elements of array is "<<summation(arr,n);


}
