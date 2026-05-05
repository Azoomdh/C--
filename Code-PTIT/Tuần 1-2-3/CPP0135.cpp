#include<bits/stdc++.h>

using namespace std;

bool checkSNT(long int n){
    if(n==2){
        return true;
    }
    if(n<=1 || n%2==0){
        return false;
    }

    long int sqrtN = sqrt(n);
    for(long int i=3; i<=sqrtN; i=i+2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void xuLy(){
    long int n;
    cin >> n;

    for(long int i=2; pow(i,2)<=n; i++){
        if(checkSNT(i)==true){
            cout << pow(i, 2) << " ";
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
