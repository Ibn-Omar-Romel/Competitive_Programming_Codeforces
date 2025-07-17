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


struct tree {
    ll l, r, x;
};

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<tree> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].l >> vec[i].r >> vec[i].x;
    }

    sort(vec.begin(), vec.end(), 
    [](const tree &value1, const tree &value2) {
        return value1.l < value2.l;
    });


    ll current_value = k;
    ll index = 0;
    priority_queue<ll> pq;

    while (true) {
        
        while (index < n) {

            int value = vec[index].l;
            if (value > current_value) {
                break;
            }
            if (vec[index].r >= current_value) {
                pq.push(vec[index].x);
            }
            index++;
        }

        while (!pq.empty()) {

            int value = pq.top();
            if (value <= current_value)
                pq.pop();
            else 
                break;
        }

        if (pq.empty()) 
            break;

        current_value = pq.top();
        pq.pop();
    }

    cout << current_value << endl;;
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
