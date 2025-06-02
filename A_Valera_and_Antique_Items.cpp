#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iomanip> 
#include <algorithm>
#include <utility>
#include <unordered_map>

using namespace std;

#define ll long long int
#define vec vector
#define st string
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ain cin >> arra[i];
#define ai cin >> arra[i];
#define ao cout << arra[i];
#define aii arra[i+1]
#define iia arra[i-1]
#define ccount cout << count << '\n'
#define cp count++


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    ll v;
    cin >> v;

    vector < ll > vec;

    int count = 1 ;

    while( t-- ) {

        ll n;
        cin >> n;

        //ll iteams[n];
        int flag = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            ll a;
            cin >> a;

            if ( v > a ) flag = 1;
        }

        if ( flag == 1 ) vec.push_back(count);

        count++;
    }

    cout << vec.size() << '\n';
    for ( int i = 0 ; i < vec.size() ; i++) {

        cout << vec[i] << " ";
    }
    cout << '\n';

    return 0;
}
