#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int min_distance(vector<int> &dis, vector<bool> &visited, int size){

    int min = INT_MAX, min_idx;

    for(int i = 0; i<size; ++i){
        if(visited[i] == false and dis[i] <= min){
            min = dis[i];
            min_idx = i;
        }
    }
    return min_idx;
}

void shortest_path(vector<vector<int>> &a, int source, int size){
    vector<int> distance(size, INT_MAX);
    //vector<vector<int>> edges(size);
    vector<bool> visited(size, false);


    distance[source-1] = 0;

    for(int i = 0; i < size-1; ++i){
        
        int min_idx = min_distance(distance, visited, size);

        visited[min_idx] = true;

        for(int j = 0; j < size; ++j){
            if(visited[j] == false and a[min_idx][j] != 0 and distance[min_idx] != INT_MAX and distance[min_idx] + a[min_idx][j] < distance[j]){
                distance[j] = distance[min_idx] + a[min_idx][j];
            }
        }
    }
    cout<<source<<" : "<<distance[0]<<endl;

    for(int i = 0; i < size; ++i){
        /*for(int j = 0; j < edges[i].size(); ++j){
            cout<<edges[i][j]<<" ";
        }
        cout<<" : "<<distance[i]<<endl; */
        cout<<source<<" "<<i+1<<" : "<<distance[i]<<endl;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    //For reading the input from file
    freopen("input.txt","r",stdin);

    //For writing the output to the file
    freopen("output.txt","w",stdout);

    #endif

    int r;  cin>>r;

    vector<vector<int>> vec(r,vector<int> (r));
    for(int i = 0; i<r; ++i){
        for(int j = 0; j<r; ++j){
            cin>>vec[i][j];
        }
    }
    
    int source;    cin>>source;

    shortest_path(vec, source, r);

    return 0;
}