#include<iostream>
using namespace std;

bool ispalindrome(char arr[],int len)
{
    
    int s=0;
    int e=len-1;
     
    while (s<=e)

    {
        if(arr[s]!=arr[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }

    }
    return 1 ;
    
    // for(int i=0;i<len;i++)
    // {
       
    //         if(arr[i]!=arr[len-1-i])
    //         {
    //             return 0;
    //         }
           
       
        
    // }
    // return 1;
    
    
     
    
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
int main()
{
    char arr[30];
    cout<<"enter ur name";
    cin>>arr;
    cout<<"your name is "<<arr<<endl;
    int n=length(arr);
    cout<<arr<<endl;
    cout<<ispalindrome(arr,n);

}