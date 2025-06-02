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

    int n , m, check = 0, value;
    cin >> n >> m;

    n++;

    while(n <= m) {

        for(int i = 2 ; i <= m/2 ; i++){

            if(n % i == 0){
                check++;
                break;
            }
        }
        if(check == 0 and n == m){
            check = 5;
            cout << "YES\n";
            break;
        }
        else if ( check == 0 and n != m){
            check = 5;
            cout << "NO\n";
            break;
        }
        else{
            check = 0;
            n++;
        }
    }

    if(check != 5)
        cout << "NO\n";

    return 0;
}
