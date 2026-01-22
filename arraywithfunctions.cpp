#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,p;
    cin>>n>>p;
    int arr1[n]={1};
    int arr2[p]={0};
    printArray(arr1,n);
    printArray(arr2,p);
    cout<<sizeof(arr1)/sizeof(int); //finding size of array


}