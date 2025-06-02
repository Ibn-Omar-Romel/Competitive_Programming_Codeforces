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
    
    long long int n , m ;
    cin >> n >> m;

    vector < long long int > vec(m,0);
    for ( int i = 0 ; i < m ; i++ ){

        cin >> vec[i];
    }

    long long int time = 0, current_house = 1;

    for( int i = 0 ; i < m ; i++ ) {

        if( vec[i] >= current_house ){
            
            time = vec[i] - current_house + time;
            current_house = vec[i];
        }
        else if( vec[i] < current_house ){

            time = ( n - current_house ) + vec[i] + time ;
            current_house = vec[i];
        }
    }

    cout <<time << '\n';

    return 0;
}

