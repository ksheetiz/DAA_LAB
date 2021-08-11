#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        int n;      cin>>n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin>>arr[i];
        }
        int flag = 0;
        unordered_set<int> st;
        for(auto x : arr){
            if(st.find(x) ==st.end()){
                st.insert(x); 
            }
            else{
                flag = 1;   break;
            }
        }
        if(flag == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}