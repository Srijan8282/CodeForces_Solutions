#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string>arr(8);

        for(int i=0;i<8;i++){
            cin>>arr[i];
        }

        string ans="";
        for(int i=0;i<8;i++){

            for(int j=0;j<8;j++){
                if(arr[i][j]!='.'){
                    ans+=arr[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}