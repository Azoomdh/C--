#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int soluong1=0;
    for(int i=0; i<n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a+b+c;
        if(sum>=2){
            soluong1++;
        }
    }
    cout << soluong1 << endl;
}

/*
3
1 1 0
1 1 1
1 0 0
*/