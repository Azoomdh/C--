#include<bits/stdc++.h>

using namespace std;

void xuLy(){
    long int n;
    vector<long int> a;

    cin >> n;

    long int temp ;
    cin>> temp;
    a.push_back(temp);

    long int max=temp;

    for(long int i=1; i<n; i++){
        cin>> temp;

        a.push_back(temp);

        if(max < temp){
            max = temp;
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
