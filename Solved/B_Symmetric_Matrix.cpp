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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while( t-- ) {

        int n, m;
        cin >> n >> m;

        vector < int > vec[n];

        int flag = 0;


        for ( int i = 0 ; i < n ; i++ ) {

            int a, b, c, d;
            cin >> a >> b >> c >> d;

            vec[i].push_back(a);
            vec[i].push_back(b);
            vec[i].push_back(c);
            vec[i].push_back(d);

            if(  vec[i][1] == vec[i][2]  )
                flag ++;
        }
        if( m % 2 != 0 ){
            cout << "NO\n";
        }
        else{
            if( flag > 0 ){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}

