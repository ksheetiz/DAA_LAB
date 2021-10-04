#include<iostream>
#include<queue>
#include<vector>

using namespace std;

bool isPathBFS(vector<vector<int>> &v, int s, int d){
    
    vector<int> visited(v.size()+1, 0);
    queue<int> Q;
    Q.push(s);
    visited[s] = true;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i = 1; i < v.size(); ++i){

            if(v[u][i] == 1 && i==d)
                return true;
            
            if(v[u][i] == 1 && visited[i]==false){
                visited[i] = true;
                Q.push(i);
            }
        }
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE

    //for getting input from input.txt
    freopen("input.txt","r",stdin);

    //for writing output to output.txt
    freopen("output.txt","w",stdout);

    #endif

    int n,s,d;
    vector<vector<int>> v(n+1, vector<int> (n+1));

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin>>v[i][j];
        }
    }

    cin>>s>>d;

    if(isPathBFS(v,s,d)){
        cout<<"Yes the Path Exist";
    }
    else{
        cout<<"No Path Exist";
    }
    return 0;
}   