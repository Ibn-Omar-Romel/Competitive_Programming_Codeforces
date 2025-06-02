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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {

        int left, right , a;
        cin>>left>>right>>a;

        int max1 = 0;
        int max2 = 0;

        max1 = floor((double)right/(double)a) + (right % a);

        int number = right - ((right % a) + 1);

        if(number >= left)
            max2 = floor((double)number/(double)a) + (number % a);


        if(max1 >= max2 )
            cout << max1 <<'\n';
        else
            cout << max2 << '\n';
    }

    return 0;
}

