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

    int n ;
    cin >> n;

    vector < int > vec;
    
    vec.push_back(0);

    int p;
    cin >> p;

    for ( int i = 0 ; i < p ; i++ ) {

        int a;
        cin >> a;

        vec.push_back( a );
    }

    int q;
    cin >> q;

    for( int i = 0 ; i < q ; i++ ) {

        int a;
        cin >> a;

        vec.push_back ( a );
    }

    sort ( vec.begin(), vec.end() );


    int flag = 0;

    for ( int i = 1 ; i < vec.size() ; i++ ) {

        if ( vec[i - 1] == vec[i] or vec[i-1] + 1 == vec[i] ) {

            continue;
        }
        else {

            flag = 1;
            break;
        }
    }

    if ( flag == 1 or vec[p+q] != n ) {

        cout << "Oh, my keyboard!\n";
    }
    else {

        cout << "I become the guy.\n";
    }


    return 0;
}
