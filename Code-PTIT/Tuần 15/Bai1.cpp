#include<bits/stdc++.h>

using namespace std;

class ThongTinDangNhap {
public:
    string email;
    string ngay;
    string gio;
    string isFail;

    ThongTinDangNhap(){
        // doesnt do
    }

    ThongTinDangNhap(string motDong){
        stringstream ss(motDong);
        char kyTuPhanTach = ',';
        string stringRong = "";

        string token;
        vector<string> listToken;
        while(std::getline(ss, token, kyTuPhanTach)){
            if(token!=stringRong){
                listToken.push_back(token);
            }
        }

        this->email = listToken[0];
        this->ngay = listToken[1];
        this->gio = listToken[2];
        this->isFail = listToken[3];
    }

};

class DanhSachDangNhap {
public:
    ThongTinDangNhap thongTinDangNhap;
    int soLuong;

    DanhSachDangNhap(){
        // doesnt do
    }

    DanhSachDangNhap(ThongTinDangNhap thongTinDangNhap, int soLuong){
        this->thongTinDangNhap = thongTinDangNhap;
        this->soLuong = soLuong;
    }
};


int main(){

    fstream ioFile1("log.csv");

    vector<ThongTinDangNhap> listThongTinDangNhap;

    string sTemp;
    while(getline(ioFile1, sTemp)){
        ThongTinDangNhap thongTinDangNhapTemp(sTemp);
        listThongTinDangNhap.push_back(thongTinDangNhapTemp);
    }

    unordered_map<string, DanhSachDangNhap> map1;

    for(ThongTinDangNhap t : listThongTinDangNhap){
        if(t.isFail=="FAIL"){
            if(map1.count(t.email)>0){
                int soLuong = map1[t.email].soLuong;
                soLuong++;
                map1[t.email].soLuong = soLuong;
            }
            else{
                DanhSachDangNhap danhSachDangNhap(t, 1);
                map1.insert({t.email, danhSachDangNhap});
            }
        }
    }

    fstream ioFile2("fail.csv");

    // duyệt map
    int i=0;
    for(auto phanTu1 : map1){
        if(phanTu1.second.soLuong>=3){
            ioFile2 << i << ", " << phanTu1.first << ", " << phanTu1.second.soLuong << "," << endl;
            i++;
        }
    }

}
