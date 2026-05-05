#include<bits/stdc++.h>

using namespace std;

bool kiemTra(string s){
    for(int i=0; i<s.length()-1; i++){
        if( abs(s[i]-s[i+1])!=1 ){
            return false;
        }
    }
    return true;
}

void xuLy(){
    string s;
    cin>> s;

    if(kiemTra(s)==true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int sobotest = 0;
    cin >> sobotest;

    for(int i=0; i<sobotest; i++){
        xuLy();
    }
}
