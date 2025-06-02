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
#define ull unsigned long long int
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

    int count = 0 ;

    while( t-- ) {

        count ++;

        int size;
        cin >> size;

        ull value = ( size * ( size - 1 ) ) / 2;

        ull check = 1;

        vector < ull > vec(size);

        for ( int i = 0 ; i < size ; i++ ) {

            cin >> vec[i];

            if ( i > 0 and vec[i] == vec[i-1] ) {

                check++;
            }
            else if ( i > 0 and vec[i] != vec[i-1] ) {

                ull minus = ( check * ( check - 1 ) ) / 2;

                value -= minus;
                check = 1;
            }
        }

        if ( check > 1 ) {

            ull minus = ( check * ( check - 1 ) ) / 2;

            value -= minus;
            check = 1;
        }

        cout << "Case " << count << ": ";
        if ( size > 1 ) cout << value << '\n';
        else cout << value << '\n' ;
    }
    return 0;
}
