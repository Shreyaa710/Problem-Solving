#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
        for(j=2;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=2;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=i;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(j=i+1;j<=n;j++)
        {
            cout<<" ";
        }
        for(j=i+1;j<=n;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}