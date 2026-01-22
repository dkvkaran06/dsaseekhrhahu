#include<iostream>
using namespace std;
int duplicate(int arr[],int size)
{
int ans=0;
for(int i=0;i<size;i++)
{
    ans=ans^arr[i];
}
for(int i=1;i<size-1;i++)
{
    ans=ans^i;
}
return ans;
}
int main()
{
    int arr[5]={3,2,3,4,5};
    int answer=duplicate(arr,5);
    cout<<answer;
}