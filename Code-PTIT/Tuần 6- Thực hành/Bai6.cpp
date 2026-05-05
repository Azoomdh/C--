#include<bits/stdc++.h>

using namespace std;

bool isSnt(long int n){
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    long int sqrt_n = sqrt(n);
    for(long int i=3; i<=sqrt_n; i=i+2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void xuLy(){
    long int n;
    cin >> n;
    for(long int i=2; i*i<=n; i++){
        if(isSnt(i)==true){
            cout << i*i << " ";
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
/*
2
50
200
*/
