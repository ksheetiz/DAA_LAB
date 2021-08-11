#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){
        int size;   cin>>size;
        int arr[size];
        for(int i = 0; i < size; ++i){
            cin>>arr[i];
        }
        int Comparisons = 0, Shifts = 0;
        for(int i = 0; i < size; ++i){
            int index = i;
            for(int j = i+1; j < size; ++j){
                Comparisons++;
                if(arr[index] > arr[j]){
                    index = j;
                }
            }
            if(index != i){
                int temp = arr[i];
                arr[i] = arr[index];
                arr[index] = temp;
                Shifts++;
            }
        }
        cout<<"Comparisons = "<<Comparisons<<endl;
        cout<<"Shifts = "<<Shifts<<endl;
    }
}