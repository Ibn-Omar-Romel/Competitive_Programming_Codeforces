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

int main()
{
    
    int t;
    cin >> t;

    while(t--) {

        ll n;
        cin >> n;

        ll a[n];

        for(int i = 0 ; i < n ; i++ ) {

            cin>>a[i];
        }

        int flag = 0;

        for( int i = 1 ; i < n ; i++ ) {

            if( a[i] >= a[i-1] ) {

                flag = 1;
                break;
            }
        }
        if ( flag == 1 ) {

            cout << "YES" << '\n';
        }
        else{
            
            cout << "NO" << '\n';
        }
    }

    return 0;
}