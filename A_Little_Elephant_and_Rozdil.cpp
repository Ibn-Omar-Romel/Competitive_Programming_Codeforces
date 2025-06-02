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

    vec < int >  arra;

    int position = 0;
    int min = INT_MAX;

    for ( int i = 0 ; i < n ; i++ ) {

        int a;
        cin >> a;

        arra.push_back(a);

        if( arra[i] <= min ) {

            position = i + 1 ;
            min = arra[i];
        }
    }

    int duplicate = count (arra.begin(), arra.end(), min );

    if ( duplicate == 1 ) {
        
        cout << position << '\n';
    }
    else {
        
        cout << "Still Rozdil\n";
    }

    return 0;
}
