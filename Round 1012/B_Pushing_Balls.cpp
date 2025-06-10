#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

#define fr(a, b) for(int i = a; i < b; i++) 

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>>vec(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char x;
            cin >> x;
            vec[i][j] = x - '0';
        }
    }

    int ans = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (vec[i][j] == 1) {

                int count = 0;
                for(int k = 0; k <= i; k++) {
                    if (vec[k][j] == 0) {
                        count++;
                        break;
                    }
                }

                for (int k = 0; k <= j; k++) {
                    if (vec[i][k] == 0) {
                        count++;
                        break;
                    }
                }

                if(count == 2) {
                    ans = 1;
                    break;
                }
            }
            if (ans == 1)
                break;
        }
        if (ans == 1)
            break;
    }
    if (ans == 1)
        no;
    else 
        yes;
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
