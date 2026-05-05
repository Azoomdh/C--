#include<bits/stdc++.h>

using namespace std;

bool checkSNT(long int n){
    if(n <=1 ){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(long int i= 3; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long int n;
    cin >> n;
    
    if(checkSNT(n)==true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}