#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    string s;
    cin>> s;

    int n= s.length();
    if(s[n-2]=='8' && s[n-1]=='6'){
        cout << "1" << endl;
        return;
    }
    else {
        cout << "0" << endl;
        return;
    }
}

int main(){
    int sobotest=0;
    cin>> sobotest;

    while(sobotest-- ){
        xuLy();
    }
}