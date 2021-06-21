#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int v , vector<int>adj[]){
    vector<int> bfs;
    vector<int> visited(v , 0);
 
    for(int i = 0 ; i<v ; i++){
        if(!visited[i]){

            queue<int> q;
            q.push(i);
            visited[i] = 1;

            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for(auto it : adj[node]){
                   if(!visited[i]){
                       q.push(it);
                       visited[it] = 1;
                   }
                }
            }
        }
    }
    return bfs;
}


int main() {
    
    int v , e;
    cin>>v>>e;

    vector<int> adj[v];

    for(int i = 0 ; i<e ; i++)
    {   
        int f , s;
        cin>>f>>s;
       adj[f].push_back(s);
       adj[s].push_back(f);
    }
    vector<int> ans;
    ans =  bfsOfGraph( v , adj );

    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    // for(int i = 0 ; i<v ; i++){
    //     cout<<"Edge "<<i<<": ";
    //     for(int j = 0 ; j<adj[i].size() ; j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
