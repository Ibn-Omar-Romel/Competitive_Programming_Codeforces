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
    cin >> n ;

    int arra[n];

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> arra[i];
    }
    //sort ( arra , arra + n );

    for ( int i = 0; i < n ; i++ ) {

        if( i == 0 ) {

            cout << arra[1] - arra[0] << " " << arra[n-1] - arra[0] << '\n';
        }

        else if( i == n - 1 ) {

            cout << arra[i] - arra[i-1] << " " << arra[i] - arra[0] << '\n';
        }
        else{

            cout << min(arra[i] - arra[i-1], arra[i+1]-arra[i]) << " " << max(arra[n-1] - arra[i], arra[i]-arra[0]) << '\n';
        }
    }
    return 0;
}
