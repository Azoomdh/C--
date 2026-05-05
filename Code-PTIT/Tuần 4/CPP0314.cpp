#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    set<string> set1;

    while(n-- >0){
        string s;
        getline(cin, s);
        set1.insert(s);
    }
    cout << set1.size() << endl;
}

/*
4
CHUC MUNG NAM MOI
HAPPY NEW YEAR
CHUC MUNG TUOI MOI
CHUC MUNG NAM MOI
*/
