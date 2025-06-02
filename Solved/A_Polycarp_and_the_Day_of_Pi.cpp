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

    string pi = "3141592653589793238462643383279";

    int t; 
    cin >> t;

    while( t-- ) {

        int count = 0;
        string value;
        cin >> value;

        for ( int i = 0; i < 30 ; i++ ) {

            if(pi[i] == value[i]){
                count++;
            }
            else{
                break;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
