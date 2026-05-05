#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int a, m;
    cin >> a >> m;

    // (a*x) % m ==1

    for(int i=0; i<m; i++){
        if((a*i)%m ==1){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }

}
