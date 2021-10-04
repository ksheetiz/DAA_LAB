#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool isBipartite(vector<vector<int>> &v, int s){
    queue<int> Q;
    vector<int> color(v.size()+1, 0);
    int curr = 1;
    Q.push(s);
    color[s] = curr;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        if(v[u][u] != 0)
            return false;
        
        curr = curr * -1; //change color;
        for(int i = 1; i <v.size(); ++i){
            if(v[u][i] != 0 && color[i] == 0){
                color[i] = curr;
                Q.push(i);
            }
            if(v[u][i] != 0 && color[i] == color[u])
                return false;
        }
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE

    //for reading input from file
    freopen("input.txt","r",stdin);

    //for writing output to file
    freopen("output.txt","w",stdout);

    #endif
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;

        vector<vector<int>> v(n+1, vector<int> (n+1));

        for(int i = 1; i<=n; ++i){
            for(int j = 1; j <=n; ++j){
                cin>>v[i][j];
            }
        }

        if(isBipartite(v,1)){
            cout<<"Yes It is bipartite";
        }
        else{
            cout<<"No it is not Bipartite";
        }
        cout<<endl;
    }
    return 0;
}