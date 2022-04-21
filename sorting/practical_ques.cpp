#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int>> v;
    int n;
    cin>>n;
    string s1;
    int per;
    for(int i=0;i<n;i++)
    {
          cin>>s1;
          cin>>per;
          v.push_back({s1,per});
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i].second < v[j].second )
            {
                int temp=v[i].second;
                v[i].second=v[j].second;
                v[j].second=temp;

                 string temp1=v[i].first;
                v[i].first=v[j].first;
                v[j].first=temp1;
            }
        }
    }
    cout<<" The sorted form is:";
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
}