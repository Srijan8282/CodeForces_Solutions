
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    
    int t;
    cin>>t;
    while(t--)
    {
         int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(b[i]!=a[n-1])
            cout<<b[i]-a[n-1]<<" ";
            else
            cout<<b[i]-a[n-2]<<" ";
        }
        cout<<endl;
    }
    return 0;
}