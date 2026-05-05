#include<bits/stdc++.h>

using namespace std;

bool checkOk1(string s){
    int n = s.length();
    for(int i=0; i<=(n-1)/2 ; i++ ){
        if(s[i]!=s[n-1-i]){
            return false;
        }
    }
    return true;
}

bool checkOk2(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
            return false;
        }
    }
    return true;
}

void xuLy(){
    string s;
    cin >> s;

    if(checkOk1(s)==true && checkOk2(s)==true ){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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
4
123456787654321
86442824468
8006000444422220000222244440006008
235365789787654324567856578654356786556
*/
