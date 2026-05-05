#include<bits/stdc++.h>

using namespace std;

bool checkSNT(int n){
    if(n==2){
        return true;
    }
    if(n<=1) {
        return false;
    }
    if(n%2==0){
        return false;
    }

    int sqrt_n = sqrt(n);
    for(int i=3; i<=sqrt_n; i= i+2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void xuLy(){
    int n;
    cin >> n;

    if(checkSNT(2)== true && checkSNT(n-2)==true){
        cout << 2 << " " << n-2 << endl;
        return;
    }
    int nChia2 = n/2;
    for(int i=3; i<=nChia2; i=i+2){
        if(checkSNT(i)==true && checkSNT(n-i)==true){
            cout << i << " " << n-i << endl;
            return;
        }
    }
    cout << "";
    return;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
