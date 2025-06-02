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

    int size, k, number = 0;

    cin >> size >> k;

    int arra[size];

    for(int i = 0 ; i < size ; i++){

        cin >> arra[i];

        if(arra[i] + k <= 5)
            number++;
    }

    if(number == 0)
        cout << "0\n";
    else{
        cout << number / 3 << '\n';
    }

    return 0;
}

