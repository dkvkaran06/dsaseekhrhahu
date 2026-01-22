#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<=30;i++)
    {
        if(ans==n)
        {
            cout<<"true";
            return 0;/// this close programs immediately .
        }
        if(ans<INT_MAX/2)
        {
            ans=ans*2;
        }
        
    }
    cout<<"false";
}

