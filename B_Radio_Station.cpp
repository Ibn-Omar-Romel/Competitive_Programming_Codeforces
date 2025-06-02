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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m;
    cin >> n >> m;

    pair < string , string > p1[n];
    pair < string , string > p2[m];

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> p1[i].first >> p1[i].second;

        p1[i].second += ";";
    }

    for ( int i = 0 ; i < m ; i++ ) {

        cin >> p2[i].first >> p2[i].second;
    }

    for ( int i = 0 ; i < m ; i++ ) {

        string ans = "";

        for ( int j = 0 ; j < n ; j++ ) {

            if ( p2[i].second == p1[j].second ) {

                ans = p2[i].first + " " + p2[i].second + " #" + p1[j].first ;
                break;
            }
        }

        cout << ans << '\n';
    }

    
    return 0;
}
