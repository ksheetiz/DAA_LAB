#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;      cin>>t;
    while(t--){
        int size;   cin>>size;
        int arr[size];
        for(int i = 0; i < size; ++i){
            cin>>arr[i];
        }
        int Comparison = 0, Shifts = 0;
        for(int i = 1; i < size; ++i){
            int j = i-1;
            int key = arr[i];
            while(j>=0 and arr[j]>key){
                arr[j+1] = arr[j];
                j--;
                Comparison++;
                Shifts++;
            }
            
            Shifts++;
            arr[j+1] = key;
        }
        cout<<"Comparisons = "<<Comparison<<endl;
        cout<<"Shifts = "<<Shifts<<endl;
    }
}