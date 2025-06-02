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

    int t;
    cin >> t;

    while( t-- ) {

        int n;
        cin >> n;

        int arra1[n];
        int arra2[n];

        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra1[i];
        }
        for ( int i = 0 ; i < n ; i++ ) {

            cin >> arra2[i];
        }

        sort ( arra1 , arra1 + n );
        sort ( arra2 , arra2 + n );

        int flag = 0;


        for ( int i = 0 ; i < n ; i++ ) {

            if ( arra2[i] - arra1[i] > 1 or arra1[i] > arra2[i]) {

                flag = 1;
                break;
            }
        }

        if ( flag == 0 ) {yes;}
        else no;

    }
    return 0;
}
