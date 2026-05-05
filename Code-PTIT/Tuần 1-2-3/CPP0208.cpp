#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n, k;
    cin >> n >> k;

    set<int> b;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        b.insert(temp);
    }

    vector<int> a;

    for(int b_item : b){
        a.push_back(b_item);
    }

    std::sort(a.begin(), a.end());

    cout << a[k-1] << endl;
}

int main(){
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
