#include<iostream>
#include<vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,value;
    cin >> n;

    vector <int> vec;
    for(int i = 0 ; i < n ; i++){

        
        cin >> value;

        vec.push_back(value);
    }

    int score1 = 0 , score2 = 0, move = 1;
    while(vec.size() != 0){

        if(vec[0] > vec[vec.size()-1]){
            value = vec[0];
            vec.erase(vec.begin()+0);
        }
        else{
            value = vec[vec.size()-1];
            vec.erase(vec.begin()+(vec.size()-1));
        }

        if(move % 2 != 0){
            
            score1 = value + score1;
        }
        else{
            score2 = value + score2;
        }
        move++;
    }

    cout << score1 << " " << score2 << '\n';
}