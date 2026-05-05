#include<bits/stdc++.h>

using namespace std;

class PhanTu{
    public :
        long int thuaSo;
        long int soMu;

        PhanTu(long int thuaSo, long int soMu){
            this->thuaSo = thuaSo;
            this->soMu = soMu;
        }

        string toString(){
            return ""+ std::to_string(thuaSo)+ " "+ std::to_string(soMu);
        }
};

class Number{
    public :
        long int giaTri;
        vector<PhanTu> dsPhanTu;

        Number(long int giaTri){
            this->giaTri= giaTri;
            this->dsPhanTu= vector<PhanTu>();
            this->khoiTaoPhanTu();
        }

        void khoiTaoPhanTu(){
            long int giaTriCopy = this->giaTri;
            long int i=2;
            while(giaTriCopy>1){
                int somu =0;
                if(giaTriCopy%i ==0){
                    while(giaTriCopy%i==0){
                        somu++;
                        giaTriCopy = giaTriCopy/i;
                    }

                    if(somu!=0){
                        PhanTu pt1 = PhanTu(i, somu);
                        dsPhanTu.push_back(pt1);
                    }
                }
                i++;
            }
        }
};

int main(){
    long int n;
    cin >> n;

    Number num1 = Number(n);
    for(PhanTu pt1 : num1.dsPhanTu){
        cout << pt1.toString() << endl;
    }
}