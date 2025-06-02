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

    int n, k;
    cin >> n >> k;

    vector<pair<int,int> > vec(n);
    for (int i = 0 ; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });
    
    map<pair<int,int>, int> mp;
    for (auto p : vec) {
        mp[p]++;
    }
    
    set<pair<int,int> > st;
    int value = 0;

    for (auto it : vec) {
        if (st.count(it) > 0) {
            continue;
        }

        if (mp[it] >= k) {
            value = mp[it];
            break;
        }
        else {
            k -= mp[it];
            st.insert(it);
        }
    }
    
    cout << value << endl;

    return 0;
}


