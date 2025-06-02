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

        int n, b, d;
        cin >> n >> b >> d;

            int times = 0, sum = 0;

            for ( int i = 0 ; i < n ; i++ ){
                
                int a;
                cin >> a;

                if( a <= b ){
                    sum = sum + a;
                }

                if( sum > d ){
                    times++;
                    sum = 0;
                }
            }

            cout << times << '\n';

    return 0;
}

