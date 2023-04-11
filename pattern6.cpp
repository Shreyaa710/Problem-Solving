#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j<=n)
            {
                cout<<"  ";
            }
            else
            {
                cout<<n-j+1<<" ";
            }
        }
        for(j=1;j<i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}