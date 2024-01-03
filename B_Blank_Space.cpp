#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int streak=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                streak++;
            }
            else{
                maxi=max(maxi,streak);
                streak=0;
            }
        }
        maxi=max(maxi,streak);
        cout<<maxi<<endl;
    }
}