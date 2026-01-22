#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;;
    for(;;) /// we want to tell we can run without using
    //those init,condn,updt
    {
        if(i<=n)
        {
            cout<<i<<endl;
        }
        else
        {
            break;// this break will direclty bring you out
            // of loop at line 21
        }
        i++;
    }
    
}