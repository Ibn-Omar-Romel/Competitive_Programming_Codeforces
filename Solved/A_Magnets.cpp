#include<iostream>
#include<string>

using namespace std;

int main() {

    int n, count = 0;
    cin>>n;

    char s[n][2];
    for(int i = 0 ; i < n ; i++) {

        for(int j = 0 ; j < 2 ; j++ ) {

            cin>>s[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++) {

            if(s[i][0] != s[i+1][0])
                count++;
            else
                continue;

    }
    cout<<count<<'\n';
}