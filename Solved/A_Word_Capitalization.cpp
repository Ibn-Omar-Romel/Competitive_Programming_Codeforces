#include<iostream>
#include<string.h>

using namespace std;

int main() {

    string s;
    cin>>s;


    for(int i = 0 ; i < s.size() ; i++){

        if(i==0 and s[i]>='a' and s[i]<='z'){

            char ch = toupper(s[i]);
            cout<<ch;
        }
            
        else
            cout<<s[i];
    }
    cout<<'\n';
}