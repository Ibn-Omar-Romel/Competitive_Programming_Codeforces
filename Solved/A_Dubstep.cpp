#include<iostream>
#include<string>

using namespace std;

int main() {

    string s;
    int count = 0;
    cin>>s;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){

            if(count > 0)
                cout<<" ";
            i+=2;
            count = 0;
        }
            
        else{
            cout<<s[i];
            count++;
        }
    }
    
}