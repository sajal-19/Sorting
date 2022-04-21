#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<" Enter the elements in array :";          // inputing the array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++)                           // selection sort
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<" The sorted  elements in array :";          // outputing the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}