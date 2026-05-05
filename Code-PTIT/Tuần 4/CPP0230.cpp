#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n; 

    int soDongNhieuMotHon = 0;

    while(n-- >0){
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        if(a1+a2+a3 >=2){
            soDongNhieuMotHon++;
        }
    }
    cout << soDongNhieuMotHon << endl;
}

