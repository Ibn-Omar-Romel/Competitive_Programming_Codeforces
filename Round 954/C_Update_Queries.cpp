#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n, m; 
        cin >> n >> m;

        string s; 
        cin >> s;

        vector<int> ind(m); 

        for ( int i = 0 ; i < m ; i++ ) { 
            cin >> ind[i];
        }

        string c; // etar sequence
        cin >> c;

        set<int> st(ind.begin(), ind.end()); 
        // for ( auto stt : st ) {
        //     cout << stt << " ";
        // }
        // cout << endl;

        vector<int> vec(st.begin(), st.end());
        // for ( auto v : vec ) {
        //     cout << v << " ";
        // }
        // cout << endl;

        sort(c.begin(), c.end());
        sort(vec.begin(), vec.end());


        map<int, char> mp; // new line er track etai
        for (int i = 0; i < vec.size(); ++i) {
            mp[vec[i]] = c[i];
        }

        for ( auto &it : mp) {
            s[it.first - 1] = it.second;
        }

        cout << s << endl;
    }
    return 0;
}
