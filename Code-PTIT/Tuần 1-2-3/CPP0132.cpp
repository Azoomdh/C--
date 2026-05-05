#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    long long int n;
    cin>>n;

    long long int uocSNTmax =2;
    long long int cbhN = sqrt(n);

    for(long long int i=2; i<cbhN; i++){
        while(n%i==0){
            uocSNTmax =i;
            n=n/i;
        }
    }
    if(n>1){
        uocSNTmax = n;
    }
    cout << uocSNTmax << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
