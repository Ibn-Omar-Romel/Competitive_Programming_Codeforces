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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {

        ll a, b, n;
        cin >> a >> b >> n;



            ll sum = a+b, count = 1;

            if( a > b ) b = a + b;
            else a = a + b;

            while( a <= n and b <= n ){


                sum = a + b;
                count++;

                if( a <= b ){
                    a = sum;
                }
                else{
                    b = sum ;
                }

            }
            cout << count << '\n';
        
    }
    return 0;
}
