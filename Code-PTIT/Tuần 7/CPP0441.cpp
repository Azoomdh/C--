#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n, x;
    cin >> n >> x;

    vector<int> vectorA;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        vectorA.push_back(temp);
    }

    for(int i=0; i<vectorA.size(); i++){
        if(vectorA[i]==x){
            cout << (i+1) << endl;
            return;
        }
    }
    cout << "-1" << endl;
    return;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0) {
        xuLy();
    }
}

/*
2
5  16
9  7  2  16  4
7  98
1  22  57  47  34  18  66
*/
