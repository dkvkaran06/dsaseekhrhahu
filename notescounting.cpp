#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    int notes;
    // if(n>=100){
    //     notes=100;
    // }
    // else if(n>=50)
    // {
    //     notes=50;
    // }
    // else if(n>=20)
    // {
    //     notes=20;
    // }
    // else
    // {
    //     notes=1;
    // }
    // we can either use above one for expression of switch or switch(100)
    // it will start from 100 case 
    switch(100)// direclty start from  case 100
    {
        case(100):
        {
         m=n/100;
        cout<<"no of 100 notes are "<<m<<endl;
        n=n%100;
        }
        case(50):
        {
            m=n/50;
            cout<<"no of 50 notes are "<<m<<endl;
            n=n%50;
            
        }
        case(20):
        {
            m=n/20;
            cout<<"no of 20 notes are "<<m<<endl;
            n=n%20;
        }
        case(1):
        {
            m=n/1;
            cout<<"no of 1 notes are "<<m<<endl;
            n=n%1;
            break;
        }
        default:
        {
            cout<<"default case";
        }
    
        
    }
}