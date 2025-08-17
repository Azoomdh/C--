#include<bits/stdc++.h>

using namespace std;

bool checkSNT(long long int n){
    if(n<=1){
        return false;
    }

    if(n==2){
        return true;
    }

    if(n%2==0){
        return false;
    }

    long long int cbhN = (long long int) sqrt(n);
    for(long long int i=3; i<=cbhN; i=i+2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool checkTangDan(long long int n){
    string s = std::to_string(n);

    if(s.length()==1){
        return true;
    }

    for(int i=0; i< s.length()-1; i++){
        if(s[i] >= s[i+1]){
            return false;
        }
    }
    return true;
}

bool checkGiamDan(long long int n){
    string s = std::to_string(n);

    if(s.length() == 1){
        return true;
    }

    for(int i=0; i< s.length()-1 ; i++){
        if(s[i] <= s[i+1]){
            return false;
        }
    }
    return true;
}

bool checkTangGiam(long long int n){
    if(checkTangDan(n)==true || checkGiamDan(n)== true){
        return true;
    }
    return false;
}

bool checkThoaMan(long long int n){
    if(checkTangGiam(n)== true){
        if(checkSNT(n)== true){
            // cout << n << ": true" << endl;
            return true;
        }
    }
    // cout << n << ": false" << endl;
    return false;
}

long long int soSoThoaManNChuSo(int sochuso){
    long long int start = pow(10, sochuso-1);
    long long int end = pow(10, sochuso)-1;

    long long int soSoThoaMan=0;

    for(long long int i=start; i<= end; i++){
        if(checkThoaMan(i)==true){
            soSoThoaMan++;
        }
    }

    return soSoThoaMan;
}

int main(){

    // cout << sqrt(5) << endl;

    // convert int to string, convert hết tốn O hơn convert 1 phần
    // int a= 5;
    // string s = to_string(a);
    // cout << s;

    int sobotest=0;
    cin >> sobotest;

    for(int i=0; i<sobotest; i++){
        int sochuso=0;
        cin >> sochuso;

        cout << soSoThoaManNChuSo(sochuso) << endl;
    }
}
