#include<bits/stdc++.h>

using namespace std;

bool isSnt(long int n){
    if(n<2){
        return false;
    }

    if(n==2){
        return true;
    }

    if(n%2==0){
        return false;
    }

    int sqrt_n = sqrt(n);
    for(int i=3; i<=sqrt_n; i=i+2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}



int main(){
    long int a, b;
    cin >> a >> b;
    long int max_ab = max(a, b);
    long int min_ab = min(a, b);
    for(long int i=min_ab; i<=max_ab; i++){
        if(isSnt(i)==true ){
            cout << i << " ";
        }
    }
    cout << endl;
}
/*
10 50
*/
