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

        int n;
        cin >> n;

        vector < int > vec(n);
        map<int,int>mp;
        bool visited[100] = {false};

        for ( int i = 0; i < n; i++) {
            cin >> vec[i];
            mp[vec[i]]++;
        }

        if ( n <= 3 and count(vec.begin(), vec.end(),vec[0]) == n )
            cout << -1 << endl;
        else {
            int match = 0;
            vector < int > ans;

            int c = 1;

            for ( int i = 0 ; i < n; i++) {

                if (mp[vec[i]] == 1 ){
                    ans.push_back(1);
                }
                else if ( mp[vec[i]] > 1 ) {

                    if (visited[vec[i]] == false) {

                        visited[vec[i]] = true;
                        ans.push_back(1);
                    }
                    else {
                        if ( c == 1 )
                    }

                }
            }
        }
    }
    return 0;
}
