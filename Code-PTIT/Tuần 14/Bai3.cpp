#include<bits/stdc++.h>

using namespace std;

struct NhanVien {
    string manv;
    string hoten;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHopDong;
};


void nhap(NhanVien &a){
    a.manv = "00001";

    getline(cin, a.hoten);
    getline(cin, a.gioiTinh);
    getline(cin, a.ngaySinh);
    getline(cin, a.diaChi);
    getline(cin, a.maSoThue);
    getline(cin, a.ngayKyHopDong);
}

void in(NhanVien a){
    cout << a.manv << " " << a.hoten << " " << a.gioiTinh << " " << a.ngaySinh << " " << a.diaChi << " " << a.maSoThue << " " << a.ngayKyHopDong << endl;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

/*
Nguyen Van Hoa
Nam
22/11/1982
Mo Lao-Ha Dong-Ha Noi
8333123456
31/12/2013
*/
