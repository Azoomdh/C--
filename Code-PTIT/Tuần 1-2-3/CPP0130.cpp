#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    long long int n;
    cin >> n;

    long long int i=0;
    long long int cbhN= sqrt(n);
    for(int i=2; i<=cbhN; i++){
        while(n%i ==0){
            cout << i << " ";
            n=n/i;
        }
    }
    if(n>1){
        cout << n << " ";
    }
    cout << endl;
}

int main(){
    int sobotest;
    cin>> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
