#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter the array size :";
    cin>>n;
    int a[n];
    cout<<" Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];     // 5 3 6 2 7 2                  2 2 3 5 6 7
                       // 0 1 2 3 4 5
    }

    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    int b[max+1]={0};
    
    int c[n];
      
    for(int i=0;i<n;i++)
    {                               //0 0 2 1 0 1 1 1
        b[a[i]]++;                 // 0 1 2 3 4 5 6 7 
    }
    

    for(int i=1;i<=max;i++)
    {                              // 0 0 2 3 3 4 5 6 
        b[i]=b[i]+b[i-1];          // 0 1 2 3 4 5 6 7  
    }
    for(int i=n-1;i>=0;i--)
    {
        int pos=b[a[i]]--;
        c[pos-1]=a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        a[i]=c[i];
    }
    
    cout<<" The sorted elements:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}