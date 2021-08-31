#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        char ch;
        vector<int> vec(26,0);
        for(int i = 0; i < n; ++i){
            cin>>ch;
            int x = ch - 97;
            vec[x]++;
        }
        int max = INT_MIN, index = INT_MIN;
        for(int i = 0; i < vec.size(); ++i){
            if(vec[i]>max){
                max = vec[i];
                index = i;
            }
        }
        if(max<=1)
            cout<<"No Duplicates Found !"<<endl;
        else{
            char c = index + 97;
            cout<<c<<"-"<<max;
        }

    }
}