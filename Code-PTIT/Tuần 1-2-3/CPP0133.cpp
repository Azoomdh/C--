#include<bits/stdc++.h>

using namespace std;

// T<100, N <10^4 : không cần tiết kiệm độ phức tạp O

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

    for(int i=2; i<=n; i++){
        if(checkSNT(i)==true){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
