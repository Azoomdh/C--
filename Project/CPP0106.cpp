#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkThuanNghich(string s){
    string s2 = s;
    reverse(s2.begin(), s2.end());

    if(s2 != s){
        return false;
    }
    else {
        return true;
    }
}

int main(){
    int sobotest=0;
    cin >> sobotest;

    for(int i=0; i<sobotest; i++){
        string s="";
        cin >> s;

        if(checkThuanNghich(s)== true){
            cout<< "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
