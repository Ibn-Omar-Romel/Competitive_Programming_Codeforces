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

    int s, n, check = 0 ;
    cin >> s >> n;

    pair < int, int > level[n];

    for(int i = 0 ; i < n ; i++){

        cin >> level[i].first;
        cin >> level[i].second;
    }

    sort(level, level + n);

    for(int i = 0 ; i < n ; i++) {

        if(level[i].first < s){
            s = s + level[i].second;
        }
        else{
            check++;
            break;
        }
    }

    if(check == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}

