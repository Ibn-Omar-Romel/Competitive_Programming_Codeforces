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

        vector <int> vec1(n);
        vector <int> vec2(n);

        fr(0, n) cin >> vec1[i];
        fr(0, n) cin >> vec2[i];

        if ( n == 1 ) {
            
            if ( vec1[0] == vec2[0] )
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else {

            int ans = 0;

            map<int,int>mp1;
            map<int,int>mp2;

            int count = 1;
            for ( int i = 0 ; i < n-1; i++ ) {

                if ( vec1[i] == vec1[i+1] ) {
                    count++;
                }
                else {

                    mp1[vec1[i]] = max(count,mp1[vec1[i]]);
                    count = 1;
                }
                ans = max(count,ans);
            }
            
            mp1[vec1[n-1]] = max(count,mp1[vec1[n-1]]);
            ans = max(count,ans);
            
            count = 1;

            for ( int i = 0 ; i < n-1; i++ ) {

                if ( vec2[i] == vec2[i+1] ) {
                    count++;
                }
                else {
                    mp2[vec2[i]] = max(count,mp2[vec2[i]]);
                    count = 1;
                }
                ans = max(count,ans);
            }
            mp2[vec2[n-1]] = max(count,mp2[vec2[n-1]]);
            ans = max(count,ans);


            for ( auto &x : mp1 ) {

                if (mp2.find(x.first) != mp2.end()) {
                    ans = max(ans, x.second + mp2[x.first]);
                }
            }

            cout << ans << endl;
        }     
    }
    return 0;
}


