#include<iostream>
using namespace std;
int ap(int a)
{
 int ans=3*a+7;
 return ans;
}
int main()
{
    int n;
    cin>>n;
    int answer=ap(n);
    cout<<"nth term is "<<answer;
}