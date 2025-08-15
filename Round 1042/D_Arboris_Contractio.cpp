#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


void dfs( int u, int p, vector<vector<int>> &adj, vector<int> &degree, vector<int> &vec1, vector<int> &vec2, vector<int> &vec3) {

    vec1[u] = 1;
    vec3[u] = 0;

    if (degree[u] == 1)
        vec2[u] = 1;
    else 
        vec2[u] = 0;


    for (int v : adj[u]) {
        
        if (v == p) 
            continue;

        dfs(v, u, adj, degree, vec1, vec2, vec3);

        vec1[u] += vec1[v];

        vec2[u] += vec2[v];

        if (vec1[v] > 1) {
            vec3[u] += vec2[v];
        }
    }
}


void solve() {

    int n;
    cin >> n;

    vector<vector<int>>adj(n+1);
    vector<int>degree(n+1, 0);

    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        degree[u]++, degree[v]++;
    }

    for (int i = 0; i <= n; i++) {
        if (degree[i] == n) {
            cout << 0 << endl;
            return;
        }
    }

    vector<int> vec1(n+1), vec2(n+1), vec3(n+1, 0);
    
    dfs(1, 0, adj, degree, vec1, vec2, vec3);

    ll operations = LLONG_MAX, total = vec2[1];

    for (int i = 1; i <= n; i++) {

        ll value = vec3 [i];

        if (i != 1) {
            ll parent = n - vec1[i];

            if (parent > 1) {
                value += (total - vec2[i]);
            }
        }

        if (value < operations) {
            operations = value;
        }
    }

    cout << operations << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
