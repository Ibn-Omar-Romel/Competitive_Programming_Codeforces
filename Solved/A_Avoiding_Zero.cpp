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

        int arra[size];

        int sum = 0 ;

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> arra[i];

            sum += arra[i];
        }

        if( sum == 0 ) cout << "NO\n";

        else {

            cout << "YES\n";

            sort( arra, arra + size );

            if( sum > 0 ) {

                for ( int i = size - 1 ; i >= 0 ; i-- ) {

                    cout << arra[i] << " ";
                }
                cout << '\n';
            }
            else {

                for ( int i = 0 ; i < size ; i++ ) {

                    cout << arra[i] << " ";
                }
                cout << '\n';
            }
        }

    }
    return 0;
}
