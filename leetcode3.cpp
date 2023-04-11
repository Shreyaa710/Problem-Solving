#include<iostream>
using namespace std;

int main()
{
    int rem;
    int rev=0;
    int n;
    cin>>n;
    while(n)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(rev > INT_FAST8_MAX || rev <INT_FAST8_MIN)
        {
            return 0;
        }
    else{
        cout<<rev<<endl;
     }
   
}