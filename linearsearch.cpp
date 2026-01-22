#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    
    for(int i=0;i<size;i++)
    {
    if(arr[i]==key)
    {
        return 1;
    }
    }
    return 0;
}
int main()
{
    int key;
    cout<<"element to be finded ";
    cin>>key;
    int arr[5]={43,4,2,66,3};
    bool found=search(arr,5,key);
    // cout<<found;
    if(found)
    {
        cout<<"element exist in array";
    }
    else
    {
        cout<<"element doesnot exist in array";
    }
    
    
}