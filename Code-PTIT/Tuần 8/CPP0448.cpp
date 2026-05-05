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

    int soLanXuatHien= count(vectorA.begin(), vectorA.end(), x);

    if(soLanXuatHien==0 ){
        cout << "-1" << endl;
    }
    else{
        cout << soLanXuatHien << endl;
    }
}

int main(){
    int sotest;
    cin >> sotest;

    while(sotest-- >0){
        xuLy();
    }
}

/*
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3
*/
