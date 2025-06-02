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

    while( t-- ) {

        int size;
        cin >> size;

        vector < int > a(size);
        vector < int > b(size);

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> a[i];
        }
        for ( int i = 0 ; i < size ; i++ ) {

            cin >> b[i];
        }

        for ( int i = 0 ; i < size ; i++ ) {

            if ( b[i] < a[i] ) {

                swap( b[i], a[i] );
            }
        }

        int amax = INT_MIN;
        for ( int i = 0 ; i < size ; i++ ) {

            if ( a[i] > amax ) amax = a[i];
        }

        int bmax = INT_MIN;
        for ( int i = 0 ; i < size ; i++ ) {

            if ( b[i] > bmax ) bmax = b[i];
        }

        cout << amax * bmax << '\n';
    }
    return 0;
}
