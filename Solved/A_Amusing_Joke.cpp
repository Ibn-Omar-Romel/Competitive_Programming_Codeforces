#include<iostream>
#include<string>



using namespace std;

int main() {

    string s1,s2,s3,s4;
    int check = 0;
    cin>>s1;
    cin>>s2;
    cin>>s3;

    s4 = s1 + s2 ;

    sort(s4.begin() , s4.end());
    sort(s3.begin() , s3.end());

    if( s3.size() != s4.size())
        cout<<"NO\n";
    else {

        for(int i = 0 ; i < s4.size() ; i++) {

            if(s3[i] != s4[i]){
                cout<<"NO\n";
                check++;
                break;
            }
        }

        if(check == 0)
            cout<<"YES\n";
    }
}