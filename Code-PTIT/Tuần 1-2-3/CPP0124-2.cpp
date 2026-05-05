#include<bits/stdc++.h>

using namespace std;

class PhanTu{
    public :
        long int thuaSo;
        long int soMu;

        PhanTu(long int thuaSo, long int soMu){
            this->thuaSo = thuaSo;
            this->soMu = soMu;
        }

        string toString(){
            return ""+ std::to_string(thuaSo)+ " "+ std::to_string(soMu);
        }
};

bool checkSNT(long int n){
    if(n <=1){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(long int i=3; i<)
}

void xuLy(){
    long int nMain;
    cin >> nMain;

    long int n= nMain;
    long int i=2;
    while(n>1){
        long int somu =0;
        if(n%i==0){
            while(n%i==0){
                somu++;
                n=n/i;
            }

            if(somu > 0){
                cout << i << " " << somu << endl;
            }
        }
        i++;
    }
}

int main(){
    xuLy();
}