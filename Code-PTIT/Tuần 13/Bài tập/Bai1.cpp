#include<bits/stdc++.h>

using namespace std;

class MaHoaMotChieu{
public:
    unsigned long long int h= 367784464;
    string input;
    unsigned int p;
    unsigned long long int hashOutput;

    MaHoaMotChieu(string input){
        this->input = input;

        this->p = generateRandomInt(100000, 999999);
        this->hashOutput = thucHienHash();
    }

    bool isSnt(int n){
        if(n<2){
            return false;
        }
        if(n==2){
            return true;
        }
        if(n%2==0){
            return false;
        }
        double sqrt_n = sqrt(n);
        for(int i=3; i<=sqrt_n; i=i+2){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int generateRandomInt(int canDuoi, int canTren){

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(canDuoi, canTren);

        int p;
        while(true){
            p = dist(gen);
            if(isSnt(p)==true ){
                break;
            }
        }

        return (unsigned int) p;
    }

    unsigned long long int thucHienHash(){
        unsigned long long int hDangXet = this->h;
        unsigned int pDangXet = this->p;

        for(char c : this->input) {
            hDangXet = hDangXet ^ c;
            hDangXet = hDangXet * pDangXet;
        }

        return hDangXet;
    }

    string hashStringToHex(){
        char buffer[50];
        snprintf(buffer, sizeof(buffer), "%x", this->hashOutput);
        string hashStringHex(buffer);

        return hashStringHex;
    }

    string hashStringToDec(){
        char buffer[50];
        snprintf(buffer, sizeof(buffer), "%d", this->hashOutput);
        string hashStringDec(buffer);

        return hashStringDec;
    }
};

int main(){
    string input;

    for(int i=0; i<100; i++){
        cout << "nhap input : " ;
        cin >> input;

        MaHoaMotChieu maHoaMotChieu1(input);

        cout << "so nguyen to p : " << maHoaMotChieu1.p << endl;

        cout << "Ma thap phan : " << maHoaMotChieu1.hashStringToDec() << endl;
        cout << "Ma hexa : " << maHoaMotChieu1.hashStringToHex() << endl;

        cout << endl << endl;
    }

}
