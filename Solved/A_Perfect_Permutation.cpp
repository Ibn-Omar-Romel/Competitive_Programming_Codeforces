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

    int n ;
    cin >> n;

    if(n % 2 != 0 ) cout << "-1\n";

    else{

        int even = 2;
        int odd = 1;
        int count = 0;

        for ( int i = 0 ; i < n ; i++ ) {

            if( count % 2 == 0 ){

                cout << even << " ";
                even += 2;
                count++;
            }
            else{

                cout << odd << " ";
                odd += 2;
                count++;
            }
        }
        cout << '\n';
    }
    return 0;
}
