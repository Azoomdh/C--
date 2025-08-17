#include<bits/stdc++.h>

using namespace std;

const string dapan101 = "ABBADCCABDCCABD";
const string dapan102 = "ACCABCDDBBCDDBB";

double tinhDiem(){
    int n;
    cin >> n;

    string dapan;

    if(n== 101){
        dapan = dapan101;
    }
    else if (n == 102){
        dapan = dapan102;
    }

    double diem = 0.0;

    for(int i=0; i< 15; i++){
        // cin voi char thi chi can khoang trang, khong can toi xuong dong \n de phan biet
        // cin voi string thi can xuong dong(\n) de phan biet
        char c;
        cin >> c;
        if(c == dapan[i]){
            diem = diem+ 10.0/15.0 ;
        }
    }
    cout << setprecision(2) << fixed << diem << endl;
}

int main(){
    int sobotest = 0;
    cin >> sobotest;

    for(int i=0; i< sobotest; i++){
        tinhDiem();
    }
}
