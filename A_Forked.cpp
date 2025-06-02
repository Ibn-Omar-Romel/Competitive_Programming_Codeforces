#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ain cin >> arra[i]
#define aout cout << arra[i]
#define vin cin >> vec[i]
#define vout cout << vec[i]
#define ccount cout << count << '\n'
#define cp count++
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size );
#define ok cout << "ok" << endl


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        int a, b, k1,k2,q1,q2;
        cin >> a >> b >> k1 >> k2 >> q1 >> q2;

        set < pair < ll, ll > > veck;
        set < pair < ll, ll > > vecq;


        // for king to get attacked
        //right
        veck.insert(make_pair(k1 + a, k2 + b));
        veck.insert(make_pair(k1 + a, k2 - b));

        //left
        veck.insert(make_pair(k1 - a, k2 + b));
        veck.insert(make_pair(k1 - a, k2 - b));

        //up
        veck.insert(make_pair(k1 + b, k2 + a));
        veck.insert(make_pair(k1 - b, k2 + a));

        //down
        veck.insert(make_pair(k1 + b, k2 - a));
        veck.insert(make_pair(k1 - b, k2 - a));

        // for queen to get attacked
        //right
        vecq.insert(make_pair(q1 + a, q2 + b));
        vecq.insert(make_pair(q1 + a, q2 - b));

        //left
        vecq.insert(make_pair(q1 - a, q2 + b));
        vecq.insert(make_pair(q1 - a, q2 - b));

        //up
        vecq.insert(make_pair(q1 + b, q2 + a));
        vecq.insert(make_pair(q1 - b, q2 + a));

        //down
        vecq.insert(make_pair(q1 + b, q2 - a));
        vecq.insert(make_pair(q1 - b, q2 - a));


        int ans = 0;

        for (auto &it : veck) {
            for (auto &pr : vecq) {
                if (it.first == pr.first && it.second == pr.second) {
                    ans++;
                }
            }
        }

        cout << ans << endl; 
    }
    return 0;
}
