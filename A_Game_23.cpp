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

    ll n , m;
    cin >> n >> m;
    ll count = -1;

    if ( n == m )  {

        cout << 0 << '\n';
        return 0;
    }

    else if ( m % n == 0 ){

        count = 0;
        m = m / n;

        while ( m % 2 == 0 )  {

            m /= 2;
            count++ ;
        }
        while ( m % 3 == 0 )  {

            m /= 3;
            count++ ;
        }

        if ( m != 1 ) count = -1;
    }

    ccount;

    return 0;
}
