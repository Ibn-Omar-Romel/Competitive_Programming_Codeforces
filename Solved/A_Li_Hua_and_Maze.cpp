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

    while(t--){

        int n , m;
        cin >> n >> m;

        int x1 , y1, x2 , y2 ;
        cin >> x1 >> y1 >> x2 >> y2 ;

        if((x1 == 1 && y1 == 1) || (x1 == n && y1 == 1) || (x1 == 1 && y1 == m) || (x1 == n && y1 == m) ||
           (x2 == 1 && y2 == 1) || (x2 == n && y2 == 1) || (x2 == 1 && y2 == m) || (x2 == n && y2 == m)){

            cout << "2\n";
        }
        else if ((x1 != 1 && y1 == 1) || (x1 == 1 && y1 != 1) || (x1 != n && y1 == m) || (x1 == n && y1 != m) ||
                 (x2 != 1 && y2 == 1) || (x2 == 1 && y2 != 1) || (x2 != n && y2 == m) || (x2 == n && y2 != m)){
            cout << "3\n";
        }
        else{
            cout << "4\n";
        }
    }

    return 0;
}
