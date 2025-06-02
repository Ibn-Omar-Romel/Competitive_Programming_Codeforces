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

    int a, b , n;
    cin >> a >> b >> n;

    char ch = 's';

    while( true ) {

        if( ch == 's' ) {

            ch = 'a';

            int value = __gcd(a,n);

            if( n >= value ){

                n = n - value;
            }   
            else{
                cout << "1\n";
                break;
            }
        }
        else{

            ch = 's';

            int value = __gcd(b,n);

            if( n >= value ){

                n = n - value;
            }   
            else{
                cout << "0\n";
                break;
            }
        }
    }
    return 0;
}
