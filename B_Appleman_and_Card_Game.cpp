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

    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char,ll>mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    
    vector<ll>vec;
    for (auto it : mp) {
        // cout << it.first << " " << it.second << endl;
        vec.push_back(it.second);
    }
    sort(vec.rbegin(), vec.rend());
    ll ans = 0;
    int i = 0;

    while(k > 0) {

        ll value ;
        if (vec[i] <= k) {
            value = vec[i] * vec[i];
            k -= vec[i];
            ans += value;
        } else {
            value = k * k;
            ans += value;
            k = 0;
        }
        i++;
    }

    cout << ans << endl;


    return 0;
}
