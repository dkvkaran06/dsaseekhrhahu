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
int ncr(int num1,int num2, int num3)
{
    int num=factorial(num1);
    int denom=((factorial(num2))*(factorial(num3)));
    int ans=num/denom;
    return ans;
}
int main()
{
    
    int n,r,c;
    cin>>n>>r;
    c=n-r;
    int answer=factorial(n);
    int answ=factorial(r);
    int answe=factorial(c);
    // store kara ke rkh diye hai values of factorial variblesme 
    int combination=ncr(n,r,c);
    cout<<"nCr is "<<combination;
    return 0;
} // namespace std;
