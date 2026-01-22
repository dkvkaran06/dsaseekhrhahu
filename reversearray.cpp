#include<iostream>
#include<vector>
using namespace std;
 // as we have learned STL so we need to do that 
vector<int>reverse(vector<int> v,int pos)
{
    int s=pos+1;
    int e=v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;

    }
    return v;
}
void print(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

 int main()
 {
    vector<int> v;
    int pos=1;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int> ans=reverse(v,pos);
    print(ans);
 }

// void reverse(int arr[],int size,int pos)
// {
//     int start=pos+1;
//     int end=size-1;
//     while(start<=end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int pos=1;
//     reverse(arr,5,1);
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }