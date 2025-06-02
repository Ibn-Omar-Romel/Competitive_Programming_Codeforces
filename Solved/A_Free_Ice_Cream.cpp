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
    
    long long int n, x;
    cin >> n >> x;
    long long int count = 0;

    while( n-- ){

        char sign;
        cin >> sign;
        long int value ;
        cin >> value;

        if( sign == '+' ){

            x += value;
        }
        else if( sign == '-' and x < value ){

            count++;
        }
        else{
            x -= value;
        }
    }

    cout << x << " " << count <<'\n';
    
    
    return 0;
}

