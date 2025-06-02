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
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {


    
    int t;
    cin>>t;
    
    while( t-- ) {

        int n, m;
        cin >> n >> m ;

        if( (n == 1 || m == 1) || ( n == 2 and m == 2 )  ) cout << "1 1\n";
        
        else if( (n == 3 and m == 2) || (n == 2 and m == 3) || (n == 3 and m == 3)) cout << "2 2\n";

        else cout << n << " " << m << '\n';

        
    }
}

