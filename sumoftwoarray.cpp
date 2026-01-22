#include<iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int s=0;
    int e= size-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;

    }
}
void sumofarray(int arr[],int arr2[],int n,int m,int arr3[])//int size)
{
int i=n-1;
int j=m-1;
int carry=0;
int k=0;//int k=size-1;
while(i>=0 && j>=0)
{
    int val1=arr[i];
    int val2=arr2[j];
    int sum= val1+val2+carry;
    carry=sum/10;
    sum=sum%10;
    arr3[k]=sum;
    i--;
    j--;
    k++;//k--;

}
while(i>=0)
{
   
    int sum= arr[i]+carry;
    carry=sum/10;
    sum=sum%10;
    arr3[k]=sum;
    i--;
    k++;
    
}
while(j>=0)
{
   
    int sum= arr2[j]+carry;
    carry=sum/10;
    sum=sum%10;
    arr3[k]=sum;
    j--;
    k++;
    
}
while(carry!=0)
{
    int sum= carry;
    carry=sum/10;
    sum=sum%10;
    arr3[k]=sum;
}


}
void print(int arr3[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    int arr[4]={1,3,4,4};
    int arr2[3]={3,4,2};
    
    int arr3[5]={};
    sumofarray(arr,arr2,4,3,arr3);//4
    reverse(arr3,4);
    print(arr3,4);

}