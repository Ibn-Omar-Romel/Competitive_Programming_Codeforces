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

        int n;
        cin >> n;

        int ans = (n / 3) - 1;

        
        int ans1 = ans + 1;
        int ans2 = ans + 2;

        if( (n - ans - ans1 - ans2 ) == 1 ){
            ans2++;
        }
        else if( (n - ans - ans1 - ans2 ) == 2 ){
            
            ans2++;
            ans1++;
        }
        cout << ans1 << " " << ans2 << " " << ans << '\n';
    }
    return 0;
}
