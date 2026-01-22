#include<iostream>
using namespace std;
int unique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)

    {
        ans =ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[5]={2,3,3,1,2};
    
    cout<<unique(arr,5);
}
// can have other methods but they are slow as compared to this one//
// one we can use creating same array two time i and j cpmparing their 
//elements.