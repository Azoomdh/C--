#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int soTu=0;
    string s1, s2;
    getline(cin, s1);
    stringstream stringStream1(s1);
    while(stringStream1 >> s2){
        soTu++;
    }
    cout << soTu << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;
    cin.ignore();

    while(sobotest-- >0){
        xuLy();
    }
}
/*
2
Print the number of words
Print the number of words present in the string
*/
