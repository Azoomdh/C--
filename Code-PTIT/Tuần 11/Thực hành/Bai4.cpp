#include<bits/stdc++.h>

using namespace std;

int countMaSinhVien = 0;

class SinhVien {
private :
    string ma;
    string hoten;
    string lop;
    string ngaySinh;
    double gpa;

public:
    SinhVien(){
    }

    SinhVien(string hoten, string lop, string ngaySinh, double gpa){
        countMaSinhVien++;

        char bufferMaSv[20];
        snprintf(bufferMaSv, sizeof(bufferMaSv), "B20DCCN%03d", countMaSinhVien);
        string maSvTemp(bufferMaSv);

        this->ma = maSvTemp;
        this->hoten = hoten;
        this->lop = lop;
        this->ngaySinh = bienDoiNgaySinh(ngaySinh);
        this->gpa = gpa;
    }

    string bienDoiNgaySinh(string ngaySinhChuaChuanHoa){
        int day, month, year;
        char sep1, sep2;

        std::istringstream iStringStream1(ngaySinhChuaChuanHoa);
        iStringStream1 >> day >> sep1 >> month >> sep2 >> year;

        char bufferNgaySinh[30];
        snprintf(bufferNgaySinh, sizeof(bufferNgaySinh), "%02d/%02d/%04d", day, month, year);

        string ngaySinhDaChuanHoa(bufferNgaySinh);

        return ngaySinhDaChuanHoa;
    }

    string toString(){
        char buffer[15];
        snprintf(buffer, sizeof(buffer), "%.2f", gpa);
        string gpaString(buffer);

        return ma + " " + hoten + " " + lop + " " + ngaySinh + " " + gpaString;

    }

    void nhap(){
        string hoten, lop, ngaysinh;
        double gpa;

        countMaSinhVien++;

        char bufferMaSv[20];
        snprintf(bufferMaSv, sizeof(bufferMaSv), "B20DCCN%03d", countMaSinhVien);
        string maSvTemp(bufferMaSv);

        getline(cin, hoten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
        cin.ignore();

        this->ma = maSvTemp;
        this->hoten = hoten;
        this->lop = lop;
        this->ngaySinh = bienDoiNgaySinh(ngaysinh);
        this->gpa = gpa;
    }

    void xuat(){
        cout << this->toString() << endl;
    }
};

SinhVien readSinhVien(){
    string hoten, lop, ngaysinh;
    double gpa;

    getline(cin, hoten);
    getline(cin, lop);
    getline(cin, ngaysinh);
    cin >> gpa;
    cin.ignore();

    SinhVien sv1(hoten, lop, ngaysinh, gpa);

    return sv1;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
/*
Nguyen Van A
D20CQCN04-B
2/2/2002
2
*/
