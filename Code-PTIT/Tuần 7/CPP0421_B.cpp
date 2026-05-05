#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    vector<bool> vectorA(n, 0);

    for(int i=0; i<n; i++){
        long long int x;
        cin >> x;

        if(x>=vectorA.size() || x<0){
            continue;
        }
        else {
            vectorA.at(x) = 1;
        }
    }

    for(int i=0; i<vectorA.size(); i++){
        if(vectorA.at(i)==false){
            cout << -1 << " ";
        }
        else {
            cout << i << " ";
        }
    }
    cout << endl;
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
10
-1 -1 6 1 9 3 2 -1 4 -1
6
0  -3  1  -2  3 - 4
*/
