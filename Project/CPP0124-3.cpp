#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    cin >> n;

    long int i =2L;
    long int cbhN = sqrt(n);
    for(i=2L; i<=cbhN; i++){
        long int somu = 0L;
        if(n%i==0L){
            while(n%i==0L){
                somu++;
                n=n/i;
            }
            cout << i <<" "<< somu << " " << endl;
        }
    }
    if(n>1L){
        cout << i << " 1 " << endl;
    }
}
