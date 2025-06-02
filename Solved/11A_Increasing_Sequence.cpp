#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n, d, in, count = 1;
    
    cin>>n>>d;

    if( 2 <= n && n <= 2000 && 1 <= d && d <= 1000000) {

        vector <int> v(n);

        for(int i = 0 ; i < n ; i++) {
            cin>>in;
        v.push_back(in);
        }

        for(int i = 0 ; i < n ; i++) {

            if(v[i] < v[i+1] )
                count++;
            else if(v[i] >= v[i+1] ) {

                v[i+1] = v[i+1] + d;
                if(v[i] < v[i+1]){
                    count++;
                }
                else
                    break;
            }
            else
                break;
        }

        cout<<count<<"\n";
    }
}