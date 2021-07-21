#include<iostream>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t>0){
        t--;
        int n;  cin>>n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }
        int key;    cin>>key;
        int flag = 0, count = 0;
        int max = n, min = 0;
        while(min<max){
            int mid = (max + min)/2;
                if(key>a[mid]){min = mid+1; count++;}
                else if(key<a[mid]){max = mid;   count++;}
                else{
                    count++;
                    cout<<"Present !"<<" Comparison made = "<<count<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){cout<<"Not Present ! "<<"Comparison Made = "<<count<<endl;}   
        
    }
}