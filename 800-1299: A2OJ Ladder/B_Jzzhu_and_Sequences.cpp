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


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int mod = 1e9 + 7;

    int f1, f2, n;
    cin >> f1 >> f2 >> n;

    n = (n - 1) % 6;

    vector<int> vec(6);
    vec[0] = f1;
    vec[1] = f2;
    vec[2] = f2 - f1;
    vec[3] = -f1;
    vec[4] = -f2;
    vec[5] = f1 - f2;

    cout << (vec[n] % mod + mod) % mod << endl;
    
    return 0;
}
