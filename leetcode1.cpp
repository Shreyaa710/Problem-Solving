#include<iostream>
using namespace std;

int main()
{
    int n,rem,ans;
    cin>>n;
    int sum=0;
    int product=1;
    while(n)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        product=product*rem;
    }
    ans=product-sum;
    cout<<"answer = "<<ans;

}