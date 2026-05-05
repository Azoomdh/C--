#include<bits/stdc++.h>

using namespace std;

long long int chuyenDoi(long int n, long int i){
    if(abs(i)>=n){
        i=i%n;
    }
    if(i==0){
        return i;
    }
    else if(i>0){
        return i;
    }
    else if(i<0){
        return n-i;
    }
}

void xuLy(){
    long int n, d;
    vector<int> a;

    cin >> n >> d;

    for(long int i=0; i<n; i++){
        int temp ;
        cin >> temp;
        a.push_back(temp);
    }

    vector<int> a2;

    for(long int i=d; i<a.size()+d; i++){
        long int index1 = chuyenDoi(n, i);
        // cout << "at i= "<< i << "- index1=" << index1 <<endl;
        a2.push_back(a.at(index1));
    }

    for(long int i=0; i<a2.size(); i++){
        cout << a2.at(i) << " ";
    }
    cout << endl;
}

int main(){
    // cout << -5%4 << endl;
    int sobotest;
    cin >> sobotest;

    while(sobotest-- >0){
        xuLy();
    }
}
