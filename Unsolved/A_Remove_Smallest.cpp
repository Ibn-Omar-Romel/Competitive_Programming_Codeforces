#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {

    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++) {

        int n,y, count = 0, value = 0, previous = 0;
        cin>>n;

        queue <int> q;

        for(int j = 0 ; j < n ; j++) {

            cin>>y;

            q.push(y);

            count++;

            if(count > 1){

                value = abs(y - previous);

                if(previous <= 1){

                    q.pop();
                }
                else{
                    count++;
                }
            }

            previous = y;
        }

        if(count > 0)
            cout<<"NO\n";
        else
            cout<<"YES\n";

        previous = 0;
        count = 0;

    }
}
