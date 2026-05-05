#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    vector<int> a;

    cin >> n;

    int temp;
    int max_num;

    cin >> temp;
    max_num = temp;

    for(int i=1; i<n; i++){
        cin >> temp;
        a.push_back(temp);

        max_num = max(temp, max_num);
    }
    cout << max_num << endl;
}

int main(){
    int sobotest;
    cin>> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
