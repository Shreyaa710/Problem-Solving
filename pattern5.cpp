#include<Iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<j;
            }
            j=j-2;
            while(j)
            {
                cout<<j;
                j--;
            }
            cout<<endl;
        }
}