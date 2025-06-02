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

    int k;
    cin >> k;

    vector <int> vec;
    int max = INT_MIN;
    for( int i = 0 ; i < 26 ; i++ ){

        int a;
        cin >> a;
        vec.push_back(a);

        if( max < a )
            max = a;
    }

    int sum = 0;
    for( int i = 0 ; i < s.size() ; i++ ) {

        sum = ((i+1) * vec[(s[i] - 97)]) + sum;

        if( max < vec[(s[i] - 97)])
            max = vec[(s[i] - 97)];
    }

    int n = k + s.size();
    sum = sum + ( max * (((n*(n+1))/2)-((s.size()*(s.size()+1))/2)));

    cout << sum << '\n';
    
    return 0;
}