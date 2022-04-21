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
    
    for(int i=0;i<n-1;i++)                           // bubble sort
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<" The sorted  elements in array :";          // outputing the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}