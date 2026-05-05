#include<bits/stdc++.h>

using namespace std;

void xuLy(){

    string mangSo_str;
    getline(cin , mangSo_str);

    stringstream strStream1(mangSo_str);
    char kyTuPhanTach = ' ';
    string kyTuRong = "";

    int motSo;
    string motSo_str;
    vector<int> a;

    int soSoChan = 0;
    int soSoLe = 0;
    while(getline(strStream1, motSo_str, kyTuPhanTach)){
        if(motSo_str!=kyTuRong){
            motSo = stoi(motSo_str);
            a.push_back(motSo);

            if(motSo%2==0){
                soSoChan++;
            }
            else{
                soSoLe++;
            }
        }
    }
    if(a.size()%2==0 && soSoChan>soSoLe){
        cout << "YES" << endl;
    }
    else if(a.size()%2==1 && soSoLe>soSoChan ) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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
11 22 33 44 55 66 77
23 34 45 56 67 78 89 90 121 131 141 151 161 171
*/
