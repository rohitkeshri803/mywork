#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int d=0;
        d=max(d,arr[0]);

        for(int i=1;i<n;i++)
        {
            d=max(d,arr[i]-arr[i-1]);            
        }
        d=max(d,2*(x-arr[n-1]));
        cout<<d<<endl;
    }
}
