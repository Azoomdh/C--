#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n, k;
    cin >> n >> k;

    vector<int> uocSNT;

    int sqrtN= sqrt(n);
    for(int i=2; i<=sqrtN; i++){
        while(n%i==0){
            uocSNT.push_back(i);
            n=n/i;
        }
        if(n==1){
            break;
        }
    }
    if(n>1){
        uocSNT.push_back(n);
    }

    // cout << uocSNT[3] << endl;

    if(k>0 && k<=uocSNT.size()){
        cout << uocSNT[k-1] << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
