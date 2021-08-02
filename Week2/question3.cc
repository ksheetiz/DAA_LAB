#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t>0){
        t--;
        int size;   cin>>size;
        int a[size];
        for(int i = 0; i < size; ++i){
            cin>>a[i];
        }
        int target;     cin>>target;
        unordered_set <int> st;
        int count = 0;
        for(int i = 0; i < size; ++i){
            int diff = target + a[i];
            if(st.find(diff) == st.end())
                st.insert(a[i]);
            else
                count++;
        }
        cout<<count<<endl;
    }
}