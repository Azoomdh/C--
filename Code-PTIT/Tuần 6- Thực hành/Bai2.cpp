#include<bits/stdc++.h>

using namespace std;


int main(){
    long int n;
    cin >> n;

    long int sum=n;
    for(long int i=n-1; i>0; i--){
        sum = (sum+1)*i;
    }
    cout << sum << endl;
}
/*
3
*/
