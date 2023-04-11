#include<iostream>
using namespace std;

int swap(int arr[],int n)
{
    int i=0,j=1;
    int temp;
    while(i<n && j<n)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i+=2;j+=2;
    }
}


int main()
{
    int size,i;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an array"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    swap(arr,size);
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}