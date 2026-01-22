
///BAHUT HI DIFFICULT SA LAGA MUJHE TO BHAI 
#include<iostream>
using namespace std;
bool rotaedandsorted(int arr[],int size)
{
    int count=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if(arr[size-1]>arr[0])
    {
        count++;
    }
    return count<=1;
}
int main()
{
    int arr1[5]={3,4,5,1,2};
    int arr2[6]={3,4,2,5,2,6};
    cout<<rotaedandsorted(arr1,5)<<endl;
    cout<<rotaedandsorted(arr2,6);

}