/// ye same program yaha 5 ka 100 output de rha rounding error ke wajah
// se lekin dusre compiler pe ye shi de rha hai.


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    float ans=0; /// using ans as float instead of int 
    while(n!=0)
    {
        int bit=n & 1;
        ans=(bit*pow(10,i))+ans;
        n=n >> 1;
        i++;
    }
    cout<<ans;
}
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0;
//     int place = 1;

//     while(n != 0)
//     {
//         int bit = n & 1;
//         ans = ans + bit * place;
//         place = place * 10;
//         n = n >> 1;
//     }

//     cout << ans << endl;

//     return 0;
// }


