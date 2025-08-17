#include<bits/stdc++.h>

using namespace std;

int tinhTong(string s){
    int sum = 0;

    for(char c : s){
        if(c >= '0'&& c<='9'){
            sum = sum+ c-'0';
        }
    }

    return sum;
}

int tinhTong(int n){
    int sum=0;
    while(n>0){
        int d = n%10;
        sum = sum +d;
        n= n/10;
    }
    return sum;
}

void xuLy(){
    string s;
    cin>>s;

    int sum= tinhTong(s);
    while(sum >=10 ){
        sum = tinhTong(sum);
    }
    cout << sum << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest--){
        xuLy();
    }
}
