#include<iostream>
#include<string>

using namespace std;

int main() {

    int n,a, count = 0;

    cin>>n>>a;
    string s;
    cin>>s;

    for(int j = 0 ; j < a ; j++) {

        for(int i = 0 ; i < s.size() -1 ; i++) {

            if(s[i] == 'B' and s[i+1] == 'G') {

            swap(s[i],s[i+1]);
            i++;

            }        
        }
    }
    cout<<s<<'\n';
}