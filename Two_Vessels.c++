#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        double a,b,c;
        cin>>a>>b>>c;

        double mid=(a+b)/2;

        double extra=abs(a-mid);

        cout<<ceil((float)extra/(float)c)<<endl;
    }

    return 0;
}
