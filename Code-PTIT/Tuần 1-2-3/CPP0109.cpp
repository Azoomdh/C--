#include<bits/stdc++.h>

using namespace std;

bool checkChanLe(long long int n){
    int soSoChan =0;
    int soSoLe = 0;

    while(n>0){
        int d = n%10;
        n= n/10;

        if(d%2 == 0){
            soSoChan++;
        }
        else if(d%2 ==1){
            soSoLe++;
        }
    }

    if(soSoChan == soSoLe){
        return true;
    }
    else{
        return false;
    }
}

void inSoChanLe(int sochuso){
    long int start = pow(10, sochuso-1);
    long int end = pow(10, sochuso)-1;

    long int pointer = 0;

    for(long int i=start; i<= end; i++){
        if(checkChanLe(i)== true){
            cout << i <<" ";
            pointer++;
            if(pointer== 10){
                cout << endl;
                pointer = 0;
            }
        }
    }
}

int main(){
    int sochuso=0;
    cin >> sochuso;

    inSoChanLe(sochuso);
}
