#include<bits/stdc++.h>

using namespace std;

void inMotHang(vector<int> motHang, bool isLeftToRight){
    int n = motHang.size();
    if(isLeftToRight==true){
        for(int i=0; i<n; i++){
            cout << motHang.at(i) << " ";
        }
    }
    else{
        for(int i=n-1; i>-1; i--){
            cout << motHang.at(i) << " ";
        }
    }
}

void xuLy(){
    int n;
    cin >> n;

    vector< vector<int> > maTran;
    for(int i=0; i<n; i++){
        vector<int> motHangTemp;

        for(int j=0; j<n; j++){
            int temp;
            cin >> temp;

            motHangTemp.push_back(temp);
        }

        maTran.push_back(motHangTemp);
    }

    bool isLeftToRight =true;
    for(vector<int> motHang : maTran){
        inMotHang(motHang, isLeftToRight);
        isLeftToRight = !isLeftToRight;
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
45 48 54 21 89 87 70 78 15
2
25 27 23 21
*/
