#include<bits/stdc++.h>
using namespace std;

void swap(int A[], int left, int right){
    int temp = A[left];
    A[left] = A[right];
    A[right] = temp;
}

int Partition(int A[], int low, int high, int *comp, int *swaps){
    int left, right, pivot_item = A[low];
    left = low;
    right = high;
    while(left < right){
        while(A[left] <= pivot_item){
            (*comp)++;
            left++;
        }
        
        while(A[right] > pivot_item){
            (*comp)++;
            right--;
        }
        if(left < right){
            (*comp)++;
            (*swaps)++;
            swap(A,left,right);
        }
    }
    A[low] = A[right];
    A[right] = pivot_item;
    return right;
}

void Quicksort(int A[], int low, int high, int *comp, int *swaps){
    int pivot;
    if(high > low){
        pivot = Partition(A,low,high,comp,swaps);
        Quicksort(A,low,pivot-1,comp,swaps);
        Quicksort(A,pivot+1,high,comp,swaps);
    }
}

int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin>>a[i];
        }
        int comp = 0, swaps = 0;
        Quicksort(a, 0, n, &comp, &swaps);
        for(int i = 0; i < n; ++i){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparisons = "<<comp<<endl;
        cout<<"Swaps = "<<swaps<<endl;
    }
}