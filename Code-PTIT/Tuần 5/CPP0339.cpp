#include<bits/stdc++.h>

using namespace std;

bool isOk(string s){
    if(s[0] == s[s.length()-1]){
        return true;
    }
    return false;
}

void xuLy(){
    string s;
    cin >> s;

    int sum=0;

    for(int i=0; i<s.length(); i++){
        for(int j=i; j<s.length(); j++){

            if(isOk(s.substr(i, j-i+1))){
                sum++;
                //cout << "___ is Ok  " << "___" << s.substr(i, j-i+1) << endl;
            }
            else {
                //cout << "___ not Ok " << "___" << s.substr(i, j-i+1) << endl;
            }
        }
    }

    cout << sum << endl;
}

int main () {
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}

/*
2
abcab
aba
*/
