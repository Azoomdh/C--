#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    double aX, aY;
    double bX, bY;

    cin >> aX >> aY >> bX >> bY ;
    
    double khoangCach = sqrt(
        pow(aX-bX, 2)+ pow(aY-bY, 2)
    );

    cout << setprecision(4) << fixed << khoangCach << endl;
}

int main(){
    int sobotest=0;
    cin>> sobotest;

    for(int i=0; i<sobotest; i++){
        xuLy();
    }
}