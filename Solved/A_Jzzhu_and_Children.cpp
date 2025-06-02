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

    int n , m;

    int y , value = 0 , index = 0;

    cin>>n>>m;

    queue <int> q;
    queue <int> q_index;

    for (int i = 0; i < n; i++)
    {
        cin>>y;

        q.push(y);
        q_index.push(i+1);
    }

    while(q.size() != 1) {

        if(q.front() - m <= 0) {

            q.pop();
            q_index.pop();
        }
        else{
            value = q.front() - m;
            
            index = q_index.front();

            q.pop();
            q_index.pop();

            q.push(value);
            q_index.push(index);

        }

    }
    
    cout<<q_index.front()<<'\n';

    
    return 0;
}