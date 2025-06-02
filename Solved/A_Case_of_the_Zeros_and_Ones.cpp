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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    string s;
    cin >> s;


    for ( int i = 0 ; i < size ; ) {

        if( ( s[i] == '1' and s[i+1] == '0' ) || ( s[i] == '0' and s[i+1] == '1' )) {

            s.erase(i,2);
            i--;
        }
        else{
            i++;
        }
    }

    cout << s.size() << '\n';

    return 0;
}
