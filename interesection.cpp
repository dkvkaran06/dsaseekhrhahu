#include<iostream>
#include<climits>
using namespace std;
int intersection(int arr[],int size1,int arr2[],int size2,int result[])
{
    int k=0;
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr[i]==arr2[j])
            {
                result[k]=arr[i];
                k++;
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
    return k;
    
}
int main()
{
    int m,n;
    m=4,n=5;
    int arr[]={2,4,2,5,5};
    int arr2[]={2,5,5,1};
    int result[5];
    int size=intersection(arr,n,arr2,m,result);
    for(int i=0;i<size;i++)
    {
        cout<<result[i]<<" ";  
    }
    
   
}