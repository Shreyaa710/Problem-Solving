#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j<=n)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }

    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=i;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}