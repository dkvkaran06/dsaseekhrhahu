#include<iostream>
using namespace std;
int getlength(char arr[])//no need to give size
{
    int count=0;
    int i=0;
    while(arr[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char arr[20];
    cout<<"enter your name"<<endl;
    cin>>arr;
    cout<<"your name is "<<arr<<endl;
    cout<<"length is "<<getlength(arr);
}