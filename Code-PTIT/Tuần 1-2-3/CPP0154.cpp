#include<bits/stdc++.h>

using namespace std;

int tinhTongLienTiep(int batDau, int ketThuc){
    return (batDau+ketThuc)*(ketThuc-batDau+1)/2;
}

long long int tinhTongPhanDu(int n, long long int k){
    long long int s=0;
    if(n==k){
        s= tinhTongLienTiep(1, n-1);
    }
    else if(n < k){
        s= tinhTongLienTiep(1, n);
    }
    else if(n > k){
        s = (n/k)*tinhTongLienTiep(1, k)+ tinhTongLienTiep(1, n%k);
    }

    return s;
}

void xuLy(){
    int n;
    long long int k;
    cin >> n >> k;

    if(k == tinhTongPhanDu(n, k)){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
