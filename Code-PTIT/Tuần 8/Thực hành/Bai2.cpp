#include<bits/stdc++.h>

using namespace std;

int tingTong(vector<int> a, int l, int r){
    int sum=0;
    for(int i=l-1; i<=r-1; i++){
        sum = sum + a.at(i);
    }
    return sum;
}

void xuLy(){
    int n, q;
    cin >> n >> q;

    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }

    for(int i=0; i<q; i++){
        int l , r;
        cin >> l >> r;

        int sum = tingTong(vectorA, l, r);
        cout << sum << endl;
    }
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
/*
1
9  3
1  1  2  1  3  4  5  2  8
1 5
2 4
3 5
*/
