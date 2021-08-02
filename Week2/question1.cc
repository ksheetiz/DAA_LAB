#include<iostream>
using namespace std;

int Search(int a[], int lo, int hi, int target){
    if(hi >= lo){
        int mid = (lo + hi)/2;

        if(a[mid] == target)
            return mid;
        
        else if(a[mid] > target)
            return Search(a, lo, mid-1, target);
        
        else
            return Search(a, mid+1, hi, target);
    }
    return -1;
}

int frequency(int a[], int position){
    int target = a[position];
    int count = 1;
    for(int i = position-1; ;--i){
        if(a[i] == target)
            count++;
        else
            break;
    }
    for(int i = position + 1; ; ++i){
        if(a[i] == target)
            count++;
        else
            break;
    }
    return count;
}

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
        int position = Search(a, 0, size-1, target);
        if(position != -1){
            int count = frequency(a, position);
            cout<<target<<" - "<<count<<endl;
        }
        else
            cout<<"Key not present !";
    }
    return 0;
}