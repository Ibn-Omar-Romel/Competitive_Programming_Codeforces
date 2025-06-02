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

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int high1 , high2 , low1, low2;

        if( a > b){
            high1 = a;
            low1 = b;
        }
        else{
            high1 = b;
            low1 = a;
        }

        if( c > d){
            high2 = c;
            low2 = d;
        }
        else{
            high2 = d;
            low2 = c;
        }
        //cout << high1 << " " << high2 << " " << low1 << " " << low2 << '\n';
        if(high1 > low2 && high2 > low1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
