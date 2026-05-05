#include<bits/stdc++.h>

using namespace std;

void inHang(vector<int> motHang, bool &sangPhai) {
    if(sangPhai== true){
        for(int i=0; i<motHang.size(); i++){
            cout << motHang[i] << " ";
        }
        sangPhai = !sangPhai;
    }
    else {
        for(int i= motHang.size()-1; i>-1; i--){
            cout << motHang[i] << " ";
        }
        sangPhai = !sangPhai;
    }
    // cout << endl;
}

void xuLy(){
    int n;
    cin >> n;

    vector< vector<int> > a;

    for(int i=0; i<n; i++){
        vector<int> motHang;
        for(int j=0;j<n; j++){
            int temp;
            cin >> temp;

            motHang.push_back(temp);
        }
        a.push_back(motHang);
    }

    bool sangPhai = true;
    for(int i=0; i<a.size(); i++){
        inHang(a.at(i), sangPhai);
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
