#include<iostream>
using namespace std;
long long int binarysearch(int num)
{
    int s=0,e=num;
    long long int mid=s+(e-s)/2;
    
    int ans;
    while(s<=e)
    {
       long long  int square=mid*mid;
        if(square>num)
        {
            e=mid-1;
        }
        else if(square<num)
        {
              ans=mid;
            s=mid+1;
        }
        else{
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double moreprecised(int num,int precision,int sqrt)
{
    double ans=sqrt;
    double factor=1;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<num;j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;
    
}
int main()
{
int num;
cin>>num;
int sqrt=binarysearch(num);
cout<<moreprecised(num,3,sqrt);

}