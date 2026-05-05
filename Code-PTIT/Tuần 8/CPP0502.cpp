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

ThiSinh readThiSinh(){
    ThiSinh t;
    getline(cin, t.hoten);
    cin >> t.ngaysinh;
    cin >> t.diem1;
    cin >> t.diem2;
    cin >> t.diem3;

    return t;
}

int main(){
    ThiSinh t1 = readThiSinh();

    cout << t1.toString() << endl;
}

/*
Nguyen Hoang Ha
11/10/2001
4.5
10.0
5.5
*/
