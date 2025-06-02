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

    int n;
    cin >> n;

    if( n > 0 ){
        cout << n << '\n';
    }
    else{
        
        int temp = n , rem1 , rem2;

        rem1 = (temp % 10) * (-1);
        temp = temp / 10;
        rem2 = (temp % 10) * (-1);

        if(rem1 == rem2 || rem1 > rem2 ){
            cout << n / 10 << '\n';
        }
        else {
            n = (-1) * n;
            temp = (n/100);
            temp = (temp*10) + rem1;
            temp = (-1)*temp;

            cout << temp << '\n';
        }

    }

    return 0;
}
