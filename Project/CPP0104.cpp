#include<iostream>

using namespace std;

long int giaiThua(int n){
    long int g=1;
    for(long int i=1; i<=n; i++){
        g=g*i;
    }
    return g;
}

long int tinhTong(int n){
    long int s= 0;
    for(int i=1; i<=n; i++){
        s =s +giaiThua(i);
    }
    return s;
}

int main(){
    int n=1;
    cin>>n;
    cout << tinhTong(n) << endl;
}
