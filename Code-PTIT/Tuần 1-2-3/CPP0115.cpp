#include<bits/stdc++.h>

using namespace std;

class PhanTu {
    public:
        int uocSo;
        int soMu;

        string toString(){
            return ""+ std::to_string(uocSo) + " " + std::to_string(soMu) + " ";
        }

        PhanTu(int uocSo, int soMu){
            this->uocSo = uocSo;
            this->soMu = soMu;
        }
};



void xuLy(){
    int n;
    cin>> n;

    int i=2;
    while(n>1){
        int soMu=0;
        if(n%i == 0){
            while(n%i ==0){
                n=n/i;
                soMu++;
            }
            PhanTu phantu1 = PhanTu(i, soMu);
            cout << phantu1.toString() ;
        }
        i++;
    }
    cout << endl;
}

int main(){
    // int uocSo=5;
    // int luyThua=6;
    // string s =  ""+ to_string(uocSo) + " " + to_string(luyThua) + " ";
    // cout << s;

    int soBoTest = 0;
    cin >> soBoTest;

    while(soBoTest--){
        xuLy();
    }
}
