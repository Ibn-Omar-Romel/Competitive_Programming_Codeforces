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
    
    string s;
    cin >> s;

    char current = 'a';

    int count = 0;
    for ( int i = 0 ; i < s.size() ; i++ ) {

        char newch = s[i];
        if( newch < current){
            swap(newch,current);
        }

        int distance1 = abs((newch - 96) - ( current - 96 ));
        int distance2 = (26 - (newch - 96)) + ( current - 96 );
        

        count += min( distance1, distance2);
        current = s[i];
        //cout << current << '\n';
    }
    cout << count << '\n';
    
    return 0;
}

