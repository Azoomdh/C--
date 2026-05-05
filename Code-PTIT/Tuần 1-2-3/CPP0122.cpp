#include<bits/stdc++.h>

using namespace std;

long long int ucln(long long int a, long long int b){
    return __gcd(a, b);
}

long long int bcnn(long long int a, long long int b){
    return a/ucln(a,b) *b;
}

void xuLy(){
    long long int n;
    cin>>n;

    long long int kq = 1;

    // duyệt từ i=n là 0.03s, duyệt từ i=2 là 0.08s
    for(long long int i=n; i>0; i--){
        if(kq%i !=0){
            kq = bcnn(kq, i);
        }
    }
    cout << kq << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest -- ){
        xuLy();
    }
}