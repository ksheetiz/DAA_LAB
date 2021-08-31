#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }
        int m;  cin>>m;
        int b[m];
        for(int i = 0; i < m; ++i){
            cin>>b[i];
        }
        vector<int> ans;
        int i = 0, j = 0;
        while((i<n)&&(j<m)){
            if(a[i] > b[j]){
                j++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else{
                ans.push_back(a[i]);
                i++;    j++;
            }
        }
        if(ans.size() == 0)
            cout<<"No Common Element present !"<<endl;
        else{
            for(int i = 0; i < ans.size(); ++i){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
            
    }
}