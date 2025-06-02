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

    while(t--) {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if((a == c) && (b == d)) {
            cout << "0\n";
        }
        else if(b > d) {
            cout << "-1\n";
        }
        else {
            int moves = d - b ;
            a = a + moves;

            if(a < c){
                cout << "-1\n";
            }
            else{
                moves = moves + (a-c);
                cout << moves << '\n';
            }
            
        }
    }

    return 0;
}
