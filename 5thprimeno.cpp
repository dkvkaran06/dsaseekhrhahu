#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)//rem=0 not prime no.
        {
            isprime=0;
            break;
        }
        
            
    }
    if(isprime==0)// rem=0 not prime no
    {
        cout<<"it is not prime no";
    }
    else
    {
        cout<<"it is  prime no";
    }
}