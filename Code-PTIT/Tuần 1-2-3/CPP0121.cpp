#include<bits/stdc++.h>

using namespace std;

long int ucln(long int a, long int b){
    return __gcd(a, b);
}

void xuLy(){
    long int a, b;
    cin >> a >> b;

    long int ucln1 = ucln(a, b);
    long int bcnn1 = a/ucln1 *b;

    cout << bcnn1 << " " << ucln1 << endl;

}

int main(){
    int soBoTest;
    cin >> soBoTest;

    while(soBoTest--){
        xuLy();
    }
}
