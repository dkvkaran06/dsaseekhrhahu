#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        
        int j=1;
        char start='A'+i-1; //use this here or use that 16 line there.
        while(j<=n)
        {
            // char ch ='A'+i+j-2;
            cout<<start<<" ";
            start++;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}