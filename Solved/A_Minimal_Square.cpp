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

        int a, b;
        cin >> a >> b;

        int ans1, ans2;

        

        ans1 = (a+a) * (a+a);
        ans2 = (b+b) * (b+b);
        
        if( ans1 <= ans2 ){

            if( ans1 >= ((a*b)*2) ){
                cout << ans1 <<'\n';
            }
            else{
                cout << b*b << '\n';
            }
        }
        else{
            if( ans2 >= ((a*b)*2) ){
                cout << ans2 <<'\n';
            }
            else{
                cout << a*a << '\n';
            }
        }
    }

    return 0;
}