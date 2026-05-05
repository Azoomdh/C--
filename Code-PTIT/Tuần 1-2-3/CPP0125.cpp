#include<bits/stdc++.h>

using namespace std;

bool checkSNT(long int n){
    if(n<=1){
        return false;
    }

    if(n==2){
        return true;
    }

    if(n%2==0){
        return false;
    }

    long int cbhN = sqrt(n);
    for(long int i=3; i<=cbhN; i=i+2){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}

int main(){
    long int a,b;
    cin >> a >> b;
    if(a>b){
        swap(a, b);
    }

    for(long int i= a+1; i<b; i++){
        if(checkSNT(i)==true){
            cout << i << " ";
        }
    }
    cout << endl;
}
