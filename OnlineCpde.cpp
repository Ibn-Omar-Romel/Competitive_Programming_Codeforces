/*
Enter the total weight of the bag:
20
Enter the number of items:
3
Enter the 1th item's profit :
25
Enter the  1 integer for pair 
18
Enter the 2th item's profit :
24
Enter the  2 integer for pair 
15
Enter the 3th item's profit :
15
Enter the  3 integer for pair 
10
Sorted vector:
1.6, 1
1.5, 2
1.38889, 0
Solution vector:
15, 2
5, 3
0, 1
total profit:
31.5



*/

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> Item;
vector<pair<float, int>> value;
vector<pair<int, int>> solution;

bool compareFloat(const pair<float, int>& a, const pair<float, int>& b) {
    return a.first > b.first;
}

int main() {
    int n, totalWeight = 0;
    double sum = 0;
    

    cout << "Enter the total weight of the bag:" << endl;
    cin >> totalWeight;

    cout << "Enter the number of items:" << endl;
    cin >> n;
    
    solution.resize(n); 

    for (int i = 0; i < n; i++) {
        int profit, weight;
        cout << "Enter the " << i + 1 << "th item's profit :" << endl;
        cin >> profit;

        cout << "Enter the  " << i + 1 << " integer for pair " << endl;
        cin >> weight;

        value.push_back(make_pair((float)profit / weight, i));
        Item.push_back(make_pair(profit, weight));
    }

    sort(value.begin(), value.end(), compareFloat);

    cout << "Sorted vector:" << endl;
    for (const auto& pair : value) {
        cout << pair.first << ", " << pair.second << endl;
    }

    for (int i = 0; i < n; i++) 
    {
        if (Item[value[i].second].second < totalWeight) 
        {
            solution[i].first = Item[value[i].second].second;
            totalWeight -= Item[value[i].second].second;
        } 
        else if (Item[value[i].second].second > totalWeight) 
        {
            solution[i].first = totalWeight;
            totalWeight = 0;
        } 
        else if (totalWeight == 0) 
        {
            solution[i].first = 0;
        }
        
        solution[i].second = value[i].second;
    }
    cout << "Solution vector:" << endl;
    for (const auto& pair : solution) 
    {
        cout << pair.first << ", " << pair.second + 1 << endl; 
    }
    sum=0;
    for (int i = 0; i < n; i++) {
        sum+=((double)solution[i].first/Item[solution[i].second].second)*Item[solution[i].second].first;
    }
    cout<<"total profit:"<<endl;
    cout<<sum<<endl;
    

    return 0;
}