#include<bits/stdc++.h>

using namespace std;

bool checkSNT(int n){
    if(n<=1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    int cbhN= sqrt(n);
    for(int i=3; i<=cbhN; i=i+2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void xuLy(){
    int n;
    cin >> n;

    int nChia2 = n/2;
    for(int i=2; i<=nChia2; i++){
        if(checkSNT(i)==true && checkSNT(n-i)==true){
            cout << i << " " << n-i << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
