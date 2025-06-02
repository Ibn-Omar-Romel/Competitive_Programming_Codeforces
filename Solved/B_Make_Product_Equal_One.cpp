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

    int n;
    cin >> n;
    
    ll sum = 0;

    int count = 0, zero = 0;

    for ( int i = 0 ; i < n ; i++ ) {

        int a;
        cin >> a;

        if( a == 0 ) {

            zero++;
            sum = sum + 1;
            //cout << sum << " ";
        }
        
        else if( a >= 1 ) {

            sum = sum + ( a - 1 );
            //cout << sum << " ";
        }

        else if( a < 0 ){

            count++;
            
            sum = sum + ( 1 - a );
            //cout << sum << " ";

        }
    }

    
    
    if( count % 2 == 0 ){

        sum = sum - (count * 2);
    }
    else if( count % 2 != 0 ) {

        if( count > 0 and zero > 0 ){

            sum = sum - ( count * 2 );
        }else{

            sum = sum - ((count - 1) * 2);
        }
    }

    cout << sum << '\n';
    return 0;
}
