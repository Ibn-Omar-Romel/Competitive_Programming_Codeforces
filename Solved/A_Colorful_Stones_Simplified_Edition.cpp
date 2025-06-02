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

int main( ) {

    string s,t;
    cin >> s >> t;

    int count = 1;
    for ( int i = 0, j = 0 ; i < t.length() ; i++ ) {

        if(t[i] == s[j]){
            count++;
            j++;
        }
    }

    cout << count << '\n';
    return 0;
}