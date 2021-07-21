#include<iostream>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t>0){
        t--;
        int n;  cin>>n;
        int a[n];
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        int key, i;    cin>>key;
        int flag = 0;
        for(i = 0; i < n; ++i){
            if(a[i] == key){cout<<"Present "<<i+1<<endl;    flag = 1;   break;}
        }
        if(flag == 0){cout<<"Not Present "<<i<<endl;}
    }
}