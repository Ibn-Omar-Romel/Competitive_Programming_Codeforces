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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vec < int > v1(n);
    vec < int > v2(n);

    ll sum1 = 0, sum2;

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> v1[i];
        sum1 = sum1 + v1[i];
    }
    for ( int i = 0 ; i < n ; i++ ) {

        cin >> v2[i];
        sum2 = sum2 + v2[i];
    }
    
    if ( v1 == v2 || sum1 == 0 ) {
        
        cout << "-1\n";
        return 0;
        
    }

    else if ( sum2 == 0  ) {
        
        cout << "1\n";
        return 0;

    }

    else {

        int count1 = 0 , count2 = 0;
        for ( int i = 0 ; i < n ; i++ ) {


            if ( v1[i] == v2[i] ) continue;
            else if ( v1[i] == 1  ) count1++;
            else if ( v2[i] == 1) count2++;
        }

        if ( count1 == 0  ) cout << "-1\n";

        else if ( count2 == 0  ) cout << "1\n";

        else cout << ( count2 / count1 ) + 1 << '\n';

    }

    return 0;
}
