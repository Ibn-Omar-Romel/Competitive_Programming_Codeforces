#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl
#define all(x) x.begin(), x.end()

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);

        for ( int i = 0 ; i < n ; i++ ) cin >> a[i];
        for ( int i = 0 ; i < n ; i++ ) cin >> b[i];

        int m;
        cin >> m;

        vector<int>d(m);
        unordered_map<ll,ll>mp;
        unordered_map<ll,bool>checker;
        for ( int i = 0 ; i < m ; i++ ) {
            cin >> d[i];
            mp[d[i]]++;
            checker[d[i]] = false;
        }

        unordered_set<ll>st;

        int flag = 0;
        for ( int i = 0 ; i < n  ; i++ ) {

            if ( a[i] == b[i] ) {
                st.insert(a[i]);
                continue;
            }
            else {
                if ( mp.find(b[i]) != mp.end()) {

                    checker[b[i]] = true;
                    mp[b[i]]--;

                    if ( mp[b[i]] == 0 )
                        mp.erase(b[i]);
                    
                }
                else{
                    no;
                    return;
                }
            }
        }

        if ( st.find(d[m-1]) != st.end()) {
            yes;
            return;
        }

        if ( checker[d[m-1]] == false ) {
            no;
            return;
        }   
    }
    return 0;
}

