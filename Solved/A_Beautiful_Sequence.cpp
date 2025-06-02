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

    int t;
    cin >> t;

    while(t--) {

        int size, count = 0;
        cin >> size;

        vector <int> vec;

        for(int i = 0 ; i < size ; i++) {

            int value;
            cin >> value;

            vec.push_back(value);

            if(i >= vec[i] - 1) {
                count++;
            }
        }

        if(count == 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}
