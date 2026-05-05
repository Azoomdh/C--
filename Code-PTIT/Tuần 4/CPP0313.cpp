#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    cin >> s2;

    stringstream stringStream1(s1);
    string motTu;
    vector<string> a;
    while( stringStream1 >> motTu ){
        if(motTu!=s2){
            a.push_back(motTu);
        }
    }

    for(int i=0; i<a.size(); i++){
        cout << a.at(i) << " ";
    }
    cout << endl;
}
/*
Toi Yeu PTIT
Toi
*/
