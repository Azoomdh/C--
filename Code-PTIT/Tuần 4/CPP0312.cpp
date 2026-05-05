#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<int> a;
    for(int i=0; i<26; i++ ){
        a.push_back(0);
    }

    for(char c :s){
        a.at(c-'a')++;
    }

    int soKyTuChuaXuatHien=0;
    for(int i=0; i<26; i++){
        if(a.at(i)==0){
            soKyTuChuaXuatHien++;
        }
    }
    if(s.length() >=26 && k>=soKyTuChuaXuatHien ){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}

/*
2
qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
4
qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
24
*/
