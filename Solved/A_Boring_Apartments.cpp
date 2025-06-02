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

        int number;
        cin >> number;
        int ans = 0 ;

        int digit = floor(log10(number) + 1);

        switch (digit)
        {
            case 1:
                ans = 1;
                break;
            case 2:
                ans = 3;
                break;
            case 3:
                ans = 6;
                break;
            case 4:
                ans = 10;
                break;
            
            default:
                break;
        }

        switch (number % 10)
        {
            case 2:
                ans = ans + 10;
                break;
            case 3:
                ans = ans + 20;
                break;
            case 4:
                ans = ans + 30;
                break;
            case 5:
                ans = ans + 40;
                break;
            case 6:
                ans = ans + 50;
                break;
            case 7:
                ans = ans + 60;
                break;
            case 8:
                ans = ans + 70;
                break;
            case 9:
                ans = ans + 80;
                break;
            default:
                break;
        }

        cout<<ans<<'\n';

    }

    return 0;
}

