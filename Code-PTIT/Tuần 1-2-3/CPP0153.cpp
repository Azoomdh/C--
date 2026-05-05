#include<bits/stdc++.h>

using namespace std;

int tinhTong(int batDau, int ketThuc){
    return (ketThuc+batDau)*(ketThuc-batDau+1)/2;
}

void xuLy(){
    int n;
    long long int k;

    cin >> n >> k;

    int s =0;

    if(n==k){
        s = tinhTong(1, k-1);
    }
    else if(n<k){
        s = tinhTong(1, n);
    }
    else if(n>k){
        s = tinhTong(1, k-1)*(n/k)+ tinhTong(1, n%k);
    }

    cout << s << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
