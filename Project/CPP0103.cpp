#include<iostream>
#include<iomanip>

using namespace std;

long double tinhTong(long int n){
    long double s =0;
    for(long double i=1; i<= n; i++){
        s= s+ 1.0/i ;
    }
    return s;
}

int main (){
    long int n = 1;
    cin>>n;

    cout << fixed << setprecision(4) << tinhTong(n);
}
