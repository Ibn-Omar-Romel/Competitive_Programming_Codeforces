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

    int n ;
    cin >> n ;


    if(ceil(log2(n)) == floor(log2(n))){
        cout << "1\n";
    }
    else if (ceil(log2(n-1)) == floor(log2(n-1))){
        cout << "2\n";
    }
    else{

        int count = 0;

        while(true)
        {
            int value = 1;

            while(true){

                value = value * 2;
                if(value * 2 > n){

                    count++;
                    break;
                }
            }
            n = n - value;
            if(n == 1)
            break;
        }

        count++;

        cout << count << '\n';
    }

    return 0;
}
