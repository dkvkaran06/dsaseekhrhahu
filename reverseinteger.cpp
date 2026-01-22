#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int digit=n%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN))
        {
            cout<<"oveflow or underflow";
        }
        // add these line in case you need for excepetion cases

        ans=(ans*10)+digit;
        n=n/10;
        i++;
    }
    cout<<ans;
}