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
    int n;
    cin >> n;

    int s = (n * (n - 1)) / 2;
    map<int, int> freq;

    for (int i = 0; i < s; ++i) {
        int a;
        cin >> a;
        freq[a]++;
    }

    vector<int> result;
    int j = 1;

    for (auto &[num, count] : freq) {
        while (count > 0 && j <= n) {
            result.push_back(num);
            count -= (n - j);
            ++j;
        }
    }

    while (result.size() < n) {
        result.push_back(result.back());
    }

    for (int x : result) cout << x << " ";
    nl;
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
