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
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
         int spac=i-1;
        while(spac)
        {
            cout<<"*";
            spac--;
        }
        // int star=1;
        // while(star<=i-1)
        // {
        //     cout<<"*";
        //     star++;
        // }
        // int sta=1;
        // while(sta<=i-1)
        // {
        //     cout<<"*";
        //     sta++;
        // }
        int space=i-1;
        while(space)
        {
            cout<<"*";
            space--;
        }
        //  int num = n;
        // while (num >= i) {
        //     cout << num;
        //     num--;
        // }
        int start=n-i+1;
        j=1;// using j again and again we need to reset it before using loop understand;
        // if we dont reset value of j=1 here then it will not take j as it's value will be bigger already
        //according to upper j inittialisaiton,so we need to reset it.////////
        while(j<=n-i+1)
        {
            cout<<start;
            
            start--;
            j++;
        }
        cout<<endl;
        i++;
        //this one is very good programe of pattern 
        

    }
}