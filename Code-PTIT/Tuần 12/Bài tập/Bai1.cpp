#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

string readMatKhau(){
    string matKhau="";
    while(true){
        char c = _getch();
        if(c=='\r'){
            break;
        }
        else if(std::isprint(c) != 0 ){
            // cout << endl << endl << c << endl;
            matKhau = matKhau + c;
            cout << "*" ;
        }
    }
    cout << endl;
    return matKhau;
}

int main(){
    // cout << isprint('a') << endl;

    cout << "nhập mật khẩu : ";
    string matKhau = readMatKhau();

    int soLanNhap1 = 0;
    while(true) {
        cout << "nhập lại mật khẩu : ";
        string matKhau2 = readMatKhau();

        if(matKhau != matKhau2){
            soLanNhap1++;
            cout << "mật khẩu không khớp lần thứ " << soLanNhap1 << endl;
            if(soLanNhap1>=3){
                cout << "sai mật khẩu quá 3 lần, kết thúc" << endl;
                return 0;
            }
        }
        else{
            cout << "mật khẩu trùng khớp" << endl;
        }
    }

    int soLanNhap = 0;
    while(true ){
        cout << "nhập mật khẩu để đăng nhập : " ;
        string matKhau1 = readMatKhau();

        if(matKhau1 != matKhau ){
            soLanNhap++;
            cout << "sai mật khẩu lần thứ " << soLanNhap <<  endl;

            if(soLanNhap>=3){
                cout << "nhập sai quá 3 lần, kết thúc" << endl;
                return 0;
            }
        }
        else{
            cout << "đúng mật khẩu" << endl;
            break;
        }
    }

    cout << matKhau << endl;
}
