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

    int t;
    cin >> t;

    while( t-- ) {

        int n , k;
        cin >> n >> k;

        ll min = INT_MAX;


        ll arra[n];

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra[i];

            if( arra[i] < min ) min = arra[i];

        }

        ll value = min + k;

        int flag = 0 ;

        for ( int i = 0 ; i < n ; i++ ) {

            if( abs( arra[i] - value ) > k ) {

                flag = 1;
                break;
            }
        }

        if ( flag == 1 ) cout << "-1\n";

        else cout << value << '\n';

    }   
    return 0;
}
