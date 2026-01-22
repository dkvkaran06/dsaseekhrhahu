#include<iostream>
using namespace std;
int factorial(int a)
{
    int fact=1;
     while(a!=1)
    {
        fact=fact*a;
        a--;
        
    }
    return fact;
}

int main()
{
    
    int n,r;
    cin>>n>>r;
    
    int answer=factorial(n);
    int answ=factorial(r);
    
    cout<<"factorial is "<<answer<<endl;
    cout<<"factorial is "<<answ;
    return 0;
} // namespace std;
