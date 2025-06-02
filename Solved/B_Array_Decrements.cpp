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

        int size;
        cin >> size;

        vec < int > v1;
        vec < int > v2;

        int max = 0;

        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;
            v1.push_back(a);
        }
        for ( int i = 0 ; i < size ; i++ ) {

            int a;
            cin >> a;
            v2.push_back(a);

            if( a == 0 and v1[i] > max ) max = v1[i];
        }

        if( max <= 0 ) max = v1[0] - v2[0];

        int flag = 0;

        if( max < 0 ) {

            cout << "NO\n";
        }
        else {
            
            for ( int i = 0 ; i < size ; i++ ) {

                if( v1[i] < v2[i] || ( v1[i] - v2[i] < max )) {

                    flag = 1;
                    break;
                }
            }

            if( flag == 1 ) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}
