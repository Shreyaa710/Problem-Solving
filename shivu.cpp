#include<iostream>
#include<math.h>

using namespace std;

int main()
{
/*
  // Question-1
  cout<<"Enter the size of array : "<<endl;
  int size;
  cin>>size;
  int a[size];
  cout<<"Enter the elements : "<<endl;
  for(int i=0; i<size;i++)
  {
    cin>>a[i];
  }
  int temp;
  for(int i=0;i<size-1;i=i+2)
  {
    temp = a[i+1];
    a[i+1]=a[i];
    a[i]=temp;
  }
  cout<<"Swapped array is : "<<endl;
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
*/


  // Question-2
  int a[9]={1,1,2,2,0,9,5,5,0};
  int size=9;
  int occurence;
  int j, i;
  for(j=0;j<size;j++)
  {
    occurence=0;
    for (i=0;i<size;i++)
    {
      if(a[i]==a[j] || i==j)
      {
        occurence++;
      }
    }
    if(occurence==1)
    {
      cout<<a[j]<<" is unique element at index "<<j<<"."<<endl;
    }
    // else
    // {
    //   cout<<"It is a non-unique element."<<endl;
  }
}
