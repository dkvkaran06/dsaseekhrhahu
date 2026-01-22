#include<iostream>
#include<vector>
#include<climits>
using namespace std;



int unique(int arr1[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[j]!=arr1[i])
            {
                cout<<"this i is not  unique element"<<endl;
            }
        }
        
    }
    return; 
    
}
int main()
{
    int n;
    cin>>n;
    int arr[100]={3,242,2,2,4,242,3,8,4};
    cout<<unique(arr,n);
}
