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
    cin >> t ; 

    while( t-- ) {

        int size;
        cin >> size;
        string s;
        cin >> s;

        string temp = s, ans = s;

        for(int i = 0 ; i < size-1 ; i++){

            char ch = s[i+1];

            temp.erase(i+1,1);
            temp = ch + temp;

            int check = ans.compare(temp);

            if(check > 0 ){
                ans = temp;
            }
            temp = s;
        }

        cout << ans << '\n';
    }

    

    return 0;
}
