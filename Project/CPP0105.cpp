#include<iostream>

using namespace std;

bool locPhatCheck(string s){
    for( char c : s){
        if(c != '0' && c != '6' && c != '8'){
            return false;
        }
    }
    return true;
}

int main(){
    int sobotest =0;
    cin >> sobotest;

    for(int i=0; i<sobotest; i++){
        string s= "";
        cin >> s;
        if(locPhatCheck(s)== true){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
