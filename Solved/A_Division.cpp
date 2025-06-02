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
    cin >> t;

    while(t--){

        int rating;
        cin>>rating;

        if(rating >= 1900) {
            cout<<"Division 1\n";
        }
        else if(1899 >= rating and rating >= 1600) {
            cout<<"Division 2\n";
        }
        else if(1599 >= rating and rating >= 1400) {
            cout<<"Division 3\n";
        }
        else{
            cout<<"Division 4\n";
        }
    }

    

    return 0;
}

