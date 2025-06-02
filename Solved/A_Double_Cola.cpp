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

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while( n > 5 ) {

        n = n / 2;
        n = n - 2;
    }

    if(n==1)
        cout<<"Sheldon\n";
    else if(n==2)
        cout<<"Leonard\n";
    else if(n==3)
        cout<<"Penny\n";
    else if(n==4)
        cout<<"Rajesh\n";
    else if(n==5)
        cout<<"Howard\n";


    return 0;
}
