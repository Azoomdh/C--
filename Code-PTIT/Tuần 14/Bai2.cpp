#include<bits/stdc++.h>

using namespace std;

struct SinhVien {
    string masv;
    string hoten;
    string tenlop;
    string ngaysinh;
    double gpa;
};

int soSinhVien=0;

void nhap(SinhVien &a){
    a.masv = "B20DCCN001";

    getline(cin, a.hoten);
    getline(cin, a.tenlop);

    int ngay;
    char c1;
    int thang;
    char c2;
    int nam;

    cin >> ngay >> c1 >> thang >> c2 >> nam;
    char buffer[50];
    snprintf(buffer, sizeof(buffer), "%02d/%02d/%04d", ngay, thang, nam);
    string ngaySinh(buffer);
    a.ngaysinh = ngaySinh;
    
    cin >> a.gpa;
}

void in(SinhVien a){
    char buffer[50];
    snprintf(buffer, sizeof(buffer), "%.2f", a.gpa );
    string gpaString(buffer);

    cout << a.masv << " " << a.hoten << " " << a.tenlop << " " << a.ngaysinh << " " << gpaString << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

/*
Nguyen Hoa Binh
D20CQCN04-B
2/2/2002
2
*/