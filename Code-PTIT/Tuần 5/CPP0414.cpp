#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    set<int> a;

    string s;

    cin.ignore();
    getline(cin, s);

    stringstream strStream1(s);

    string tempStr="";
    while(getline(strStream1, tempStr, ' ') ){
        if(tempStr != ""){
            for(int i=0; i<tempStr.length(); i++){
                string motSo_str = tempStr.substr(i, 1);
                int motSo = stoi(motSo_str);
                a.insert(motSo);
            }
        }
    }

    vector<int> vector1;

    for(int temp : a){
        vector1.push_back(temp);
    }

    std::sort(vector1.begin(), vector1.end());

    for(int i=0; i<vector1.size(); i++){
        cout << vector1.at(i) << " ";
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
3
131 11 48
4
111 222 333 446
*/
