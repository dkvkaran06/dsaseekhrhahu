#include<iostream>
using namespace std;
int main()
{
    
    int a,b;
    cout<<"enter first no ";
    cin>>a;
    cout<<"enter second no ";
    cin>>b;
    char ch;
    cout<<"enter the operation u need to perform ";
    cin >>ch;
    switch(ch)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"invalid operator";
    }
}