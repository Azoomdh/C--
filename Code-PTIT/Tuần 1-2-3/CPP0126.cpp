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

    int cbhN = sqrt(n);

    for(int i=3; i<=cbhN; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void xuLy(){
    int M, N;
    cin >> M >> N;

    for(int i=M; i<=N; i++){
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
