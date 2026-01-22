#include<iostream>
using namespace std;
void fibo(int a)
{
    int b=0;
    int c=1;
    
    for(int i=1;i<=a;i++)
    {
        int nextno=b+c;
        cout<<nextno<<" ";
        b=c;
        c=nextno;
        
    }
    
    
}
int main()
{
    int n;
    cin>>n;
    cout<<"0"<<" "<<"1"<<" ";
    fibo(n);

    
    
}