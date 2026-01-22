#include<iostream>
#include<climits>
using namespace std;
int getmin(int num[],int size)
{
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }

    }
    return min;
}
int getmax(int num[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }

    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"max element is "<< getmax(arr,n)<<endl;
    cout<<"min element is "<<getmin(arr,n);
}
// int main()
// {
//     int arr[5]={12,343,2333,42,322};
//     int big=0;
//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]>big)
//         {
//             big=arr[i];
//         }
//     }
//     cout<<"maximum element is "<<big;
// }