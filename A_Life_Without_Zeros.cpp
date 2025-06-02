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

    int a, b;
    cin >> a >> b;
    
    ll ans1 = a + b;

    string tempa = to_string(a);
    string tempb = to_string(b);
    string tempans = to_string(ans1);

    string sa = "";
    string sb = "";
    string sans = "";

    for ( int i = 0 ; i < tempa.size() ; i++ ) {

        if ( tempa[i] != '0' ) {

            sa = sa + tempa[i];
        }
    }

    for ( int i = 0 ; i < tempb.size() ; i++ ) {

        if ( tempb[i] != '0' ) {

            sb = sb + tempb[i];
        }
    }


    for ( int i = 0 ; i < tempans.size() ; i++ ) {

        if ( tempans[i] != '0' ) {

            sans = sans + tempans[i];
        }
    }

    ll ans2 = stoi(sa) + stoi(sb);
    ll finalAns = stoi(sans);

    if ( ans2 == finalAns ) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
