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

        long long int a, b, c;
        cin >> a >> b >> c;

        // if( a == b and b == c ) {

        //     cout << "1 1 1\n"; 
        // }
        // else {

        //     long long int value = max(a, max(b,c));

        //     if( a == value ) cout << "0 ";
        //     else cout << value - a + 1 << " ";

        //     if( b == value ) cout << "0 ";
        //     else cout << value - b + 1 << " ";

        //     if( c == value ) cout << "0\n";
        //     else cout << value - c + 1 << '\n';
        // }

        if( a == b and b == c ) cout << "1 1 1\n";

        else if( a > b and a > c ) cout << "0 " << a - b + 1 << " " << a - c + 1 << '\n';

        else if( a > b and a == c ) cout << "1 " << a - b + 1 << " " << "1" << '\n';

        else if( a == b and a > c ) cout << "1 " << "1 " << " " << a - c + 1 << '\n';


        else if( b > a and b > c ) cout << b - a + 1 << " 0" << " " << b - c + 1 << '\n';

        else if( b > a and b == c ) cout << b - a + 1 << " 1" << " " << "1" << '\n';

        else if( a == b and a > c ) cout << "1 " << "1 " << " " << b - c + 1 << '\n';


        else if( c > a and c > b ) cout << c - a + 1 << " " << c - b + 1 << " 0" << '\n';

        else if( c > a and c == b ) cout << c - a + 1 << " 1" << " " << "1" << '\n';

        else if( a == c and c > b ) cout << "1 " << "1 " << " " << c - b + 1 << '\n';

    }

    
    return 0;
}

