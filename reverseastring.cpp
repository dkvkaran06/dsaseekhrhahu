#include<iostream>
using namespace std;
void reverse(char arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e )
    {
        swap(arr[s],arr[e]);
        s++;
        e--;

    }


}
int length(char arr[])
{
    int c=0;
    int i=0;
    while(arr[i]!='\0')
    {
        c++;
        i++;
    }
    return c;
}
bool ispalindrome(char arr[],char arr2[],int len)
{
    for(int i=0;i<len;i++)
    {
        
            if(arr[i]!=arr2[i])
            {
                return 0;
            }
           
        
    }
    return 1;
    
}
int main()
{
    char arr[30];
    char arr2[30]; /// copiyng array 1 to another 
    cout<<"enter ur name";
    cin>>arr;
    cout<<"your name is "<<arr<<endl;
    int n=length(arr);
    
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    arr2[n]='\0'; 
     reverse(arr2,n);
    cout<<arr2<<endl;
    cout<<ispalindrome(arr,arr2,n);
    

}