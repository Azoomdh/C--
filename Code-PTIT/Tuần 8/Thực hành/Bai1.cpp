#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }

    int max = vectorA.front();
    for(int a : vectorA){
        if(a>max){
            max = a;
        }
    }

    cout << max << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;
   
    while(sobotest-- >0){
        xuLy();
    }
}
/*
2
6
7  10  4  3  20  15
6
9  7  12  8  6  5
*/