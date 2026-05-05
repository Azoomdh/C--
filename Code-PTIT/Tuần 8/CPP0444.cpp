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

    int viTriX = -1;
    for(int i=0; i<vectorA.size(); i++){
        if(vectorA.at(i)==x){
            viTriX = i+1;
            break;
        }
    }

    cout << viTriX << endl;
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
10 3
5 6 7 8 9 10 1 2 3 4
10 3
1 2 3 4 5 6 7 8 9 10
*/
