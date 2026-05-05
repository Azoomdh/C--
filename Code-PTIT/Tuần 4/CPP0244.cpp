#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> set1;
    while(n-- >0){
        int a;
        cin >> a;
        set1.insert(a);
    }
    vector<int> vector1;

    for(int s :set1){
        vector1.push_back(s);
    }

    std::sort(vector1.begin(), vector1.end());

    for(int i=0; i<vector1.size(); i++){
        cout << vector1[i] << " ";
    }
    cout << endl;
}
