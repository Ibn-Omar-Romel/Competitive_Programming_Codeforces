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

    int size;
    cin >> size;

    long long int arra[size];

    for(int i = 0 ; i < size ; i++){

        cin >> arra[i];

        int count  = 2;

        for (int j = 2 ; j < 10 && j < arra[i] ; j++) {

            if(arra[i] % j == 0){
                count++;
            }
        }
        if(count == 3){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }

    return 0;
}
