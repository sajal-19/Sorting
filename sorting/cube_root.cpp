#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=2;
    while(i<=n/2)
    {
        if(i*i*i==n)
        {
            cout<<"The cube root is:"<<i;
            break;
        }
        if(i*i*i>n)
        {
            cout<<"The cube root is:"<<i-1;
            break;
        }
        i++;
    }
   
}