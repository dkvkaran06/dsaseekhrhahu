#include<iostream>
using namespace std;


int setbits(int num1)
{
    int count=0;
    while(num1!=0)
    {
        if(num1&1)
        {
            count++;
        }
        num1=num1>>1;
    }
    return count;
}
int main()
{
    int a ,b;
    cin>>a>>b;
    cout<<"total no of set bits in a and b are "<<setbits(a)+setbits(b);
    
     
    

}
