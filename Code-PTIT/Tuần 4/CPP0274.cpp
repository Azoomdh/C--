#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    map<int, int> map1;

    while(n-- >0){
        int temp1 ;
        cin >> temp1;
        map1[temp1]++;
    }
    int sophantulap = 0;
    for(auto t : map1){
        if(t.second >1){
            sophantulap = sophantulap + t.second;
        }
    }
    cout << sophantulap << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
