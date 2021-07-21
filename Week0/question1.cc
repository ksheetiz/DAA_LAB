#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array : ";
    int n;      cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cout<<"Enter the element a["<<i<<"] = ";
        cin>>a[i];
    }

    cout<<"Enter the Element which you want to find : ";
    int key;       cin>>key;
    int flag = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == key){cout<<"The Element "<<key<<" was found at index "<<i+1;     flag = 1;     break;}
    }

    if(flag == 0){cout<<"The Element was not present in the provided array ! ";}
    return 0;
}