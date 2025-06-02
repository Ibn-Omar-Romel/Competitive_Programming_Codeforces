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

    int n ;
    cin >> n;


        if( n % 2 == 0 ) {

            cout << (n*n) / 2 << '\n';
        }
        else{
            cout << ((n*n)/2) + 1 << '\n';
        }

        for ( int i = 0 ; i < n ; i++ ) {

            for ( int j = 0 ; j < n ; j++ ) {

                if( i % 2 == 0 ) {

                    if( j % 2 == 0 ) cout << 'C';
                    else cout << '.';
                }

                else{
                    if( j % 2 == 0 ) cout << '.';
                    else cout << 'C';
                }
            }
            cout << '\n';
        }
        cout << '\n';
    
    return 0;
}
