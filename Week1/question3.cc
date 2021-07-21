#include<iostream>
using namespace std;

int start, max1, count;

void jumpSearch(int a[], int lo, int max, int n, int key){
    start = lo;
    max1 = max;
    if(max>=n){return;}
    if((a[max]==key)||(a[lo]==key)){count++;    return;}
    else if((a[lo]<key)&&(a[max]>key)){count++; return;}
    else if(a[max]<key){  
        count++; 
        jumpSearch(a,lo+2,max+2,n,key);
    }
}

int main(){
    int t;  cin>>t;
    while{
        t--;
        int n;  cin>>n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }
        int key;    cin>>key;
        jumpSearch(a, 0, 2, n, key);
        if((a[start]==key)||(a[max1]==key)||(a[start+1]==key))
        {
            count++;
            cout<<"Present "<<count<<endl;
        }
        else{
            count++;
            cout<<"Not Present "<<count<<endl;
        }
    }
}   
