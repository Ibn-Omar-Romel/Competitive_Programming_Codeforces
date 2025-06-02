#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string s;
    cin>>s;
    char ch;

    for(int i = 0 ; i < s.size() ; i++) {

         ch = tolower(s[i]);
         if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y') {

            continue;
         }
         else
            cout<<"."<<ch;
        
    }
    cout<<'\n';
    
}