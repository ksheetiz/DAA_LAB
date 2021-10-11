#include<iostream>
#include<vector>
#include<climits>

using namespace std;


int shortest_path(vector<vector<int>> v, int s, int d, int k)
{
	if(k == 0 && s == d)
	{
		return 0;
	}
	if(k == 1 && v[s][d] != 0)
	{
		return v[s][d];
	}
	if(k <= 0)
	{
		return -1;
	}

	int edge = INT_MAX;

	for(int i = 0; i < v.size(); i++)
	{
		if(v[s][i] != 0 && s != i && d != i)
		{
			int temp = shortest_path(v, i, d, k-1);

			if(temp != -1 && temp != INT_MAX)
			{
				edge = min(edge, v[s][i] + temp);
				
			}
		}

	}

	return edge;
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
    int dest;   cin>>dest;
    int len;    cin>>len;

    int edge = shortest_path(vec, source-1, dest-1, len);

    if(edge == INT_MAX){
        cout<<"No Edge Possible";
    }
    else{
        cout<<"Weight of shortest path from ("<<source<<" , "<<dest<<") with "<<len<<" edges : "<<edge;
    }

    return 0;
}