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
    int n,m,l,r;
    string s,c1,c2;
    cin>>n>>m;
    cin>>s;
    while(m--)
    {
        cin>>l>>r>>c1>>c2;
        for(int i=l-1; i<r; i++){
            if(s[i]==c1[0]){
                s[i]=c2[0];
            }
        }
    }
    cout<<s<<endl;

    return 0;
}