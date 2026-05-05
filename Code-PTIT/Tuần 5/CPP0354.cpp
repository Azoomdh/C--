#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    string s ;
    cin >> s;

    for(int i=0; i<s.length(); i=i+0){
        int k=1;
        while(s[i]==s[i+k] && (i+k)<s.length() ) {
            k++;
        }
        cout << s[i] << k ;
        i= i+k;
    }
    cout << endl;
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
AAAAAAAA
AAECCCCGGGD
*/
