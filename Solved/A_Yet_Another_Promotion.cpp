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

        long long int a , b , n , m;
        cin >> a >> b >> n >> m;

        if( n >= m ){

            long long int Akg = n / ( m + 1) ;

            
            long long int remain = n - ( Akg * (m+1));
            long long ans;

            if( a <= b)
                ans = (a * (m) * Akg) + ( a * remain);
            else
                ans = (a * (m) * Akg) + ( b * remain);

            long long int ans2 = n * b ;

            if( ans < ans2 )
                cout << ans << '\n';
            else
                cout << ans2 << '\n';
            
        }
        else if(a <= b){

            cout << a * n  << '\n';
        }
        else{
            cout << b * n << '\n';
        }
    }

    return 0;
}