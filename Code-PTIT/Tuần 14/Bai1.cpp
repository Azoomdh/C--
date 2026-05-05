#include<bits/stdc++.h>

using namespace std;

struct ThiSinh {
    string hoten;
    string ngaysinh;
    double diem1;
    double diem2;
    double diem3;
};

void nhap(ThiSinh &A){
    getline(cin, A.hoten);
    getline(cin, A.ngaysinh);
    cin >> A.diem1;
    cin >> A.diem2;
    cin >> A.diem3;
}

void in(ThiSinh A){
    char buffer[50];
    double diemTong = A.diem1 + A.diem2 + A.diem3;
    snprintf(buffer, sizeof(buffer), "%.1f", diemTong);

    string diemTongStr(buffer);

    cout << A.hoten << " " << A.ngaysinh << " " << diemTongStr;
    // cout << A.diem1 << " " << A.diem2 << " " << A.diem3 << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
