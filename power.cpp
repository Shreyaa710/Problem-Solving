#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=31;i++)
    {
        if(n==pow(2,i))
        {
            cout<<"Yes power of 2"<<endl;
            return 0;
        }
    }
    
    cout<<"not power of 2"<<endl;

}