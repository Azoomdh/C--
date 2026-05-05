#include<bits/stdc++.h>

using namespace std;

string transform1 (string s){
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    std::transform(s.begin(), s.begin()+1, s.begin(), ::toupper);

    return s;
}

string transform2 (string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    return s;
}

vector<string> transform3(vector<string> mangTu) {
    vector<string> mangTu2;
    for(int i=0; i<mangTu.size(); i++){
        string tu1 = mangTu.at(i);
        string tu2;
        if(i== mangTu.size()-1){
            tu2 = transform2(tu1);
        }
        else{
            tu2 = transform1(tu1);
        }
        mangTu2.push_back(tu2);
    }

    return mangTu2;
}

int main(){
    string s;
    getline(cin, s);

    stringstream strStream1 (s);
    char kyTuPhanCach_char = ' ';
    string kyTuRong_str = "";

    vector<string> mangTu;

    string tempStr = "";
    while( getline(strStream1, tempStr, kyTuPhanCach_char) ){
        if(tempStr != kyTuRong_str ){
            mangTu.push_back(tempStr);
        }
    }

    mangTu = transform3(mangTu);

    for(int i=0; i<mangTu.size(); i++){
        if(i==mangTu.size()-2){
            cout << mangTu.at(i) << ", ";
        }
        else if(i==mangTu.size()-1){
            cout << mangTu.at(i) << endl;
        }
        else {
            cout << mangTu.at(i) << " ";
        }
    }
}
