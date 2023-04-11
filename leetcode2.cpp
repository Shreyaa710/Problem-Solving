#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n)
    {
        if(1&n){
            count++;
            cout<<n<<" ";
        }
        n=n>>1;
    }
    cout<<count;
}