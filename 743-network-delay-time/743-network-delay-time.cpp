class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // Create adjacency matrix to store the directed graph
        vector<vector<int>> graph[n+1];
        int i;
        for(i=0;i<times.size();i++){
            // Store graph like this -> graph[u] = [v, w]
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];
            graph[u].push_back({v, w});
        }
        
        // Declare a vector to store the time it takes to reach each node & initialize the time it takes to reach every node as maximum time i.e. INT_MAX
        vector<int> shortest_time(n+1, INT_MAX);
        
        // The shortest time to reach node 'k' from itself will be 0, of course
        shortest_time[k] = 0;
        
        // Declare a priority queue as min heap to store the SHORTEST TIME it takes to reach each node.
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        // Store the the time taken to reach source node i.e. 0 & source node 'k' in pq
        // Below means shortest time to reach 'k' is 0
        pq.push(make_pair(0, k));
        
        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            
            for(auto temp : graph[u]){
                int v = temp[0];
                int w = temp[1];
                
                if(shortest_time[u] + w < shortest_time[v]){
                    // It takes shortest time = shortest_time[u] + w to reach to node 'v'
                    pq.push(make_pair(shortest_time[u] + w, v));

                    // Update shortest time for v
                    shortest_time[v] = shortest_time[u] + w;
                }
            }
            
        }
        
        // Keep track of the maximum time out of all the shortest times to reach various nodes, initially it will be time taken to reach node 'k'.
        int total_time = 0;
        for(int i=1;i<=n;i++){
              if(shortest_time[i] == INT_MAX) return -1;
              total_time = max(total_time,shortest_time[i]);
        }
        return total_time;
    }
};