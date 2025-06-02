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

// void solve() {

//     int n;
//     cin >> n;

//     vector<vector<int>> arra(n, vector<int>(n));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> arra[i][j];
//         }
//     }

//     ll count = 0;

//     for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
//         for (int k = 0; k < n; k++) {
//             if (arra[i][k] != arra[j][k]) {
//                 count++;
//                 arra[j][k] = arra[i][k];
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0, k = n - 1; j < n / 2; j++, k--) {
//             if (arra[i][j] != arra[i][k]) {
//                 count++;
//                 arra[i][k] = arra[i][j];
//             }
//         }
//     }
//     cout << count << endl;

// }

void solve() {
    int n;
    cin >> n;

    int arra[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arra[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            int a = arra[i][j];
            int b = arra[j][n - i - 1];
            int c = arra[n - i - 1][n - j - 1];
            int d = arra[n - j - 1][i];

            int ones = a + b + c + d;
            int zeros = 4 - ones;

            count += min(ones, zeros);
        }
    }

    cout << count << endl;
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
