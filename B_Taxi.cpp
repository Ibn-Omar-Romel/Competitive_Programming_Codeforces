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

    int n;
    cin >> n;

    ll ans = 0 ;

    int ones = 0 , twos = 0 , threes = 0 , fours = 0 ;

    for ( int i = 0 ; i < n ; i++ ) {

        int a;
        cin >> a;

        if ( a == 1 ) ones++;
        else if ( a == 2 ) twos++;
        else if ( a == 3 ) threes++;
        else fours++;
    }

    ans = ans + fours;
    ans = ans + threes;

    ones = ones - threes;
    if ( ones < 0 ) ones = 0;


    if ( twos % 2 == 0 ) {

        ans = ans + ( twos / 2 ) ;
    }
    else {

        ans = ans + ( (twos / 2 ) + 1 );

        ones = ones - 2;
        if ( ones < 0 ) ones = 0;
    }

    ones = ceil ( (double)ones / (double)4 );
    ans = ans + ones;

    cout << ans  << '\n';


    return 0;
}
