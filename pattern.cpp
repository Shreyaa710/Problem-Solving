#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    // int sum=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
                if(i+j>n+1)
                {
                    cout<<"*";
                }
                else{
                    cout<<j;
                }
            
        }
       for(j=1;j<=n;j++)
       {
        if(i-j>0)
        {
            cout<<"*";
        }
        else
        {
            cout<<n-j+1;
        }
       }
        cout<<endl;
     
    }
}