#include<bits/stdc++.h>

using namespace std;



int main(){
    string s;
    getline(cin, s);


    vector<string> vectorString1;

    string motTu;
    stringstream stringStream1(s);
    while(getline(stringStream1, motTu, ' ')){
        std::transform(motTu.begin(), motTu.end(), motTu.begin(), ::tolower );
        vectorString1.push_back(motTu);
        // cout << motTu << endl;
    }

    string s2 = "";
    s2.append(vectorString1.at(vectorString1.size()-1));

    for(int i=0; i<vectorString1.size()-1; i++){
        s2 += vectorString1.at(i)[0];
    }

    s2 = s2+ "@ptit.edu.vn";

    cout << s2 << endl;
}
