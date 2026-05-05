#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
    string hoten;
    string ngaysinh;
    double diem1;
    double diem2;
    double diem3;

    string toString(){
        string s1= this->hoten + " " + this->ngaysinh + " " ;

        double tongDiem = this->diem1 + this->diem2 + this->diem3;

        char buffer[16];
        snprintf(buffer, sizeof(buffer), "%.1f",  tongDiem);
        string s2(buffer);

        return s1+s2;
    };
};

void nhap(ThiSinh &a){
    getline(cin, a.hoten),
    cin >> a.ngaysinh >> a.diem1 >> a.diem2 >> a.diem3;
}

void in(ThiSinh a){
    double tongDiem = a.diem1 + a.diem2 + a.diem3;

    char buffer[16];
    snprintf(buffer, sizeof(buffer), "%.1f", tongDiem);
    string tongDiemStr(buffer);

    cout << a.hoten << " " << a.ngaysinh << " " << tongDiemStr << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

/*
Nguyen Hoang Ha
11/10/2001
4.5
10.0
5.5
*/
