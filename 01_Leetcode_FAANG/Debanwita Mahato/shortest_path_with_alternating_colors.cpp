vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int> dist(n, -1);
        vector<vector<pair<int,int>>> adj(n);
        for(auto it: redEdges){
            adj[it[0]].push_back({it[1], 0}); // 0 -> red
        }
        for(auto it: blueEdges){
            adj[it[0]].push_back({it[1], 1}); // 1 -> blue
        }
        dist[0] = 0;
        queue<vector<int>> q;
        //2 is only for the first node
        q.push({0,0,2}); //node,dist and color(Here color is 2 just for the source)
        bool vis[101][3]; 
        memset(vis, false, sizeof(vis));
        while(!q.empty()){
            auto it = q.front(); q.pop();
            int cur = it[0];
            int dis = it[1];
            int edge = it[2];
            for(auto nei: adj[cur]){
                if(vis[nei.first][nei.second] == true or nei.second == edge) continue;
                if(dist[nei.first] == -1){  //if it is -1 then we are definately visiting it for the first time so lets update its value
                    dist[nei.first] = dis + 1;
                    vis[nei.first][nei.second] = true;
                    q.push({nei.first, dis + 1, nei.second});
                }else{ //if the dist[nei.first] != -1 then the shortest distance has already been found and makes no sense to update it again
                    vis[nei.first][nei.second] = true;
                    q.push({nei.first, dis + 1, nei.second});
                }
            }
        }
        return dist;
    }