#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    int arr[n],temp;
    cout<<"Enter elements of an array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    i=0;
    while(i<n)
    {
        j=i+1;
        int count=1;
        while(j<n)
        {
            if(arr[j]==arr[i])
            {
            count++;
            temp=arr[j];
            arr[j]=arr[++i];
            arr[i]=temp;
            }
            j++;
        }
        
            if(count==1)
            {
                cout<<arr[i]<<" unique "<<endl;
            }

        ++i;
    }
}