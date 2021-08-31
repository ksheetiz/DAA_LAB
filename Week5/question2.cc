#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> a, int n, int diff){
    int start = 0, end = n;
    while(start<end){
        int mid = (start+end)/2;
        if(a[mid]==diff)
            return true;
        else if(a[mid] > diff){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
    return false;
}

int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int> ans;
        vector<int> a;
        for(int i = 0; i < n; ++i){
            int x;  cin>>x;  a.push_back(x);
        }
        sort(a.begin(),a.end());
        int sum;    cin>>sum;
        for(int i = 0; i < n; ++i){
            int diff = sum - a[i];
            diff = abs(diff);
            if(binarySearch(a,n,diff)){
                ans.push_back(a[i]);
                ans.push_back(diff);
            }
        }
        if(ans.size() == 0)
            cout<<"NO Such Pairs exists !";
        else{
            for(int i = 0; i < ans.size(); ++i){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}