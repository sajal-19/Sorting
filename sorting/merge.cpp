#include<iostream>
using namespace std;
void merge(int arr[], int l,int mid, int h)
{
     int n1=mid+1-l;
     int n2=h-mid;
     int a[n1];
     int b[n2];
     int k=l;

     for(int i=0;i<n1;i++)
     {
         a[i]=arr[i+l];
     }
     for(int i=0;i<n2;i++)
     {
         b[i]=arr[mid+i+1];
     }
     int i=0,j=0;
     while(i<n1 && j<n2)
     {
         if(a[i]<b[j])
         {
           arr[k]=a[i];
           i++;
            k++;
         }
         else
         {
             arr[k]=b[j];
             j++;
              k++;
         }   
     }
     while(i<n1)
     {
         arr[k]=a[i];
         i++;
         k++;
     }
     while(j<n2)
     {
          arr[k]=b[j];
          j++;
          k++;
     }
}
void merge_sort(int arr[], int l, int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
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
    merge_sort(arr, 0,n-1);
      cout<<" The sorted  elements in array :";          // outputing the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}