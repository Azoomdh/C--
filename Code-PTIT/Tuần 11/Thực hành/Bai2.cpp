#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int soDongIsOk = 0;

    for(int i=0; i<n; i++){
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        int sum = a1+a2+a3;
        if(sum>=2){
            soDongIsOk++;
        }
    }

    cout << soDongIsOk << endl;
}
/*
3
1 1 0
1 1 1
1 0 0
*/
