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

#define ll long long int
#define vec vector
#define st string

int main()
{
    int size;
    cin >> size;
    if (size <= 10 || size > 21)
    {
        cout << 0 << endl;
    }
    else if (size == 20)
    {
        cout << 15 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
    return 0;
}