#include<iostream>
using namespace std;
int power(int num1,int num2)// can use (int a,int b)//need not to be a and b , we can take diff. parameters here
{//here we cannot access int main variables
    int ans=1;
    for(int i=1;i<=num2;i++)
    {
        ans=ans*num1;
    }
    return ans;
}
int main()
{
    //here we cannot access funtion variables
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);//here power is function
    cout<<answer;
    return 0;
}