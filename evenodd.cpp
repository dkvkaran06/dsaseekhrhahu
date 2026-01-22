#include<iostream>
using namespace std;
bool isEven(int a)//yha pe ek bool return type banaya 
{
    if(a&1)//if(a%2!=0)
    {
        return 0;//odd pe 0 dega
    }
    return 1;
    // else
    // {
    //     return 1;// even pe 1 dega
    // }
}
int main()
{
    int n;
    cin>>n;
    if(isEven(n))
    {
        cout<<"no is even";
    }
    else{
        cout<<"no is odd";
    }
    return 0;

}