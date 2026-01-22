#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5]={0,1,0,3,13};
    int nonzero=0;// index banaya non zero values ke liye ;
    for(int j=0;j<5;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[nonzero]);
            nonzero++;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}