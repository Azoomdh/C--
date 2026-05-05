#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    int n;
    cin >> n;

    vector<int> a;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    std::sort(a.begin(), a.end());

    for(int i=0; i<a.size()/2; i++){
        cout << a.at(a.size()-i-1) << " " << a.at(i) << " "  ;
    }
    int giua = (int)a.size()/2;
    if(giua*2==a.size() ){
        // a.size()/2= 4
        // a.at(giua)= 3
        // 0 1 2 3 | 4 5 6 7
        // không làm gì cả vì 3 đã chạy
        cout << endl;
    }
    else{
        // a.size()/2 = 4
        // a.at(giua)= 4
        // 0 1 2 3 | 4 | 5 6 7 8
        // chưa duyệt số 4
        cout << a.at(giua) << endl;
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
2
7
7 1 2 3 4 5 6
8
1 6 9 4 3 7 8 2
*/
