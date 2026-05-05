#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
    long long int tuso;
    long long int mauso;
};

void nhap(PhanSo &p){
    cin >> p.tuso >> p.mauso;
}

void rutgon(PhanSo &p){
    long long int uclnTuMau = std::__gcd(p.tuso, p.mauso);

    p.tuso = p.tuso/uclnTuMau;
    p.mauso = p.mauso/uclnTuMau;
}

void in(PhanSo p){
    cout << p.tuso << "/" << p.mauso << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}