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

        long long int number, check = 0;
        int sum = 0, rem = 0;
        cin >> number;

        while(number > 0) {

            rem = number % 10;
            sum = sum + rem ;

            number = number / 10;
        }

        if(check == 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }

    return 0;
}
