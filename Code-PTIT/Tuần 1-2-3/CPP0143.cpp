#include<bits/stdc++.h>

using namespace std;

// giới hạn thời gian là 1 s = nên tiết kiệm/ ko tiết kiệm ???

void chuanBi(vector<long long int> &dayFibo){
    dayFibo.push_back(0);
    dayFibo.push_back(1);
    for(long long int i=2; i<=92; i++){
        dayFibo.push_back(dayFibo[i-1]+ dayFibo[i-2]);
    }
    return;
}

int main(){
    int sobotest;
    cin >> sobotest;

    vector<long long int> dayFibo;
    chuanBi(dayFibo);

    while(sobotest-- >0){
        int n;
        cin >> n;

        cout << dayFibo[n] << endl;
    }
}
