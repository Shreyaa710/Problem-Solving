#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
     int i=0;
    while(n)
    {
        int digit = n%10;
        if(digit==1){
        ans = (digit*pow(2,i))+ans;
        }
        n=n/10;
        i++;

    }
    cout<<"answer is "<<ans;
}