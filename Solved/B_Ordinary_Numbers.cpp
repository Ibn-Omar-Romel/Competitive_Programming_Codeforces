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

        int number;
        cin >> number;

        if(number < 10){
            cout << number << "\n";
        }
        else{

            int digits = log10(number) + 1;
        
            int ans = (digits - 1) * 9;

            char ch = '1';
            string s(digits,ch);
            int ones;
            istringstream(s) >> ones;

            ans = ans + (number / ones);

            cout << ans << '\n';
        }
    }

    return 0;
}
