#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    double aX, aY, bX, bY;
    cin >> aX >> aY >> bX >> bY;

    double deltaX = abs(aX-bX);
    double deltaY = abs(aY-bY);

    double khoangCach = sqrt(
                                pow(deltaX, 2)
                                + pow(deltaY, 2)
                             );
    printf("%.4f\n", khoangCach);
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
0 0 0 5
0 199 5 6
*/
