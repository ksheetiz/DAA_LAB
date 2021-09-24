#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int partition(vector<int>& v, int l, int h)
{
    int p = v[l];
    l--, h++;
    while(true)
    {
        do
        {
            l++;
        }while(v[l] < p);

        do
        {
            h--;
        }while(v[h] > p);

        if(l >= h)
        {
            return h;
        }
        swap(v[l], v[h]);
    }
}

int quick_sort(vector<int>& v, int l, int h, int k)
{
    if(k > 0 && k <= h - l + 1)
    {
        int m =  partition(v, l, h);

        if(m-l == k-1)
        {
            return v[m];
        }
        else if(m-l > k-1)
        {
            return quick_sort(v, l, m, k);
        }
        return quick_sort(v, m+1, h, k-m+l-1);
    }
    return INT_MAX;
}

int main(){

    int t;  cin>>t;

    while(t--){
        int n;  cin>>n;
        vector<int> vec(n);
        for(int i = 0; i < n; ++i){
            cin>>vec[i];
        }
        int target; cin>>target;
        
        int key = quick_sort(vec,0,n-1,target);
        if(key == INT_MAX){
            cout<<"Not Present"<<endl;
        }
        else{
            cout<<key<<endl;
        }
    }
    return 0;
}