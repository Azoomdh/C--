#include<bits/stdc++.h>

using namespace std;

int tinhTong(vector<int> vectorA, int startIndex, int endIndex){
    startIndex = startIndex -1;
    endIndex = endIndex -1;

    int sum=0;

    for(int i=startIndex; i<=endIndex; i++){
        sum = sum + vectorA.at(i);
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
        int l, r;
        cin >> l >> r;

        cout << tinhTong(vectorA, l, r) << endl;
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
