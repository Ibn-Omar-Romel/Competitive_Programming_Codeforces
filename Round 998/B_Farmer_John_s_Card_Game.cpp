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


void solve() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> vec[i][j];
    }

    for (int i = 0; i < n; i++) {
        sort(vec[i].begin(), vec[i].end());
    }


    //test
    vector<int> test;
    for (int i = 0; i < n; i++) {
        test.push_back(vec[i][0]);
    }

    sort(test.begin(), test.end());
    vector<int> test2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (test[i] == vec[j][0]) {
                test2.push_back(j);
                break;
            }
        }
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m-1; j++) {
            if (j + 1 < n && i < m) {     
                if (vec[i][j+1] - vec[i][j] != n) {
                    flag = false;
                    break;
                }
            }
        }
        if (!flag) {
            break;
        }
    }

    if (flag) {
        for (int i = 0; i < n; i++) {
            cout << test2[i]+1 << " ";
        }
        cout << endl;
    } else {
        cout << "-1" << endl;
    }
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
