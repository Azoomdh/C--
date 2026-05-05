#include<bits/stdc++.h>

using namespace std;

bool isOk(char c){
    if(c=='a' || c=='e' || c=='i' || c=='i' || c=='o' || c=='u' || c=='y' ){
        return false;
    }
    else {
        return true;
    }
}

vector<char> thucHien1(string s) {
    vector<char> vectorChar;

    for(int i=0; i<s.length(); i++){
        char c = tolower(s[i]);

        if(isOk(c)==true){
            vectorChar.push_back(c);
        }
    }
    return vectorChar;
}

void inRa(vector<char> vectorChar){
    for(int i=0; i<vectorChar.size(); i++){
        cout << "." << vectorChar.at(i) ;
    }
    cout << endl;
}

int main(){
    string s;
    cin >> s;
    vector<char> vectorChar = thucHien1(s);
    inRa(vectorChar);
}

/*
HocVienCNBCVT
*/
