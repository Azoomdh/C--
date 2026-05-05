#include<bits/stdc++.h>

using namespace std;

int tinhTong(vector<int> a, int l, int r){
    int left_number = l-1;
    int right_number = r-1;

    int sum=0;
    for(int i=left_number; i<=right_number; i++){
        sum= sum+ a.at(i);
    }
    return sum;
}

void xuLy(){
    int n, q;
    cin >> n >> q;

    vector<int> a;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        a.push_back(temp);
    }

    while(q-- >0){
        int l, r;
        cin >> l >> r;
        cout << tinhTong(a, l, r) << endl;
    }
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
