#include<iostream>

using namespace std;

long int tinhTong(long int n){
    long int s= n*(n+1)/2;
    return s;
}

int main(){
    int sobotest=0;
    cin >> sobotest;

    for(int i=0; i<sobotest; i++){
        long int n=0;
        cin >> n;
        cout << tinhTong(n) << endl;
    }
} 