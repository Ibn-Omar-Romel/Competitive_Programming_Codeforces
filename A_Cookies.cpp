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
    int n, a, odd(0), even(0);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }

    cout << (odd % 2 == 1 ? odd : even) << endl;
    return 0;
}