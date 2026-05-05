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

    // if(n >=0 && n<=9){
    //     return true;
    // }

    // -------------->
    // 1    2   3   4   5   6   7   8   9   10
    //                         <----n   d2  d1

    int d1;
    int d2;

    d1= 10;
    d2= n%10;
    n=n/10;

    do {
        // nếu d2 lớn hơn hoặc bằng d1 -> return false
        if(d2 >= d1){
            return false;
        }

        // dịch d2-d1 sang phải
        d1=d2;
        d2= n%10;
        n= n/10;
        // cout << "["<< n << "," << d2<< ","<< d1 << "]"<< endl;

    }
    while(n>0 || d2>0);

    return true;
}

bool checkGiamDan(long long int n){

    // if(n >=0 && n<=9){
    //     return true;
    // }

    // --------------->
    // 9    8   7   6   5   4   3   2   1   0   -1
    //                            <-----n   d2  d1

    int d1=-1;
    int d2=n%10;
    n= n/10;

    do{
        // nếu d2 nhỏ hơn hoặc bằng d1 -> return false
        if(d2 <= d1){
            return false;
        }

        // dịch d2-d1 sang trái
        d1= d2;
        d2= n%10;
        n= n/10;
        // cout << "["<< n << "," << d2<< ","<< d1 << "]"<< endl;
    }
    while(n>0 || d2>0);

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
    // cout << n << ": x" << endl;
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

    // cout << checkTangDan(678) <<endl;
    // cout << checkTangDan(876) <<endl;
    // cout << checkTangDan(11) <<endl;

    // cout << checkGiamDan(678) <<endl;
    // cout << checkGiamDan(876) <<endl;
    // cout << checkGiamDan(777) <<endl;


    int sobotest=0;
    cin >> sobotest;

    for(int i=0; i<sobotest; i++){
        int sochuso=0;
        cin >> sochuso;

        cout << soSoThoaManNChuSo(sochuso) << endl;
    }
}
