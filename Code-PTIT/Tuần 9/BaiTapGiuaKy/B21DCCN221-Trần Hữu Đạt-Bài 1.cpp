#include<bits/stdc++.h>

using namespace std;

vector<string> convertStringToVectorString(string s){
    vector<string> vectorA;
    for(int i=0; i<s.length(); i=i+3){
        if(i+3<=s.length()){
            string sTemp = s.substr(i, 3);
            vectorA.push_back(sTemp);
        }
        else {
            int doDai = s.length()-i;
            string sTemp = s.substr(i, doDai);
            vectorA.push_back(sTemp);
        }
    }

    return vectorA;
}

vector<bool> convertStringToVectorBool(string s){
    vector<bool> vectorA;
    for(char c : s){
        bitset<8> charBinary(c);
        for(int i=7; i>=0; i--){
            vectorA.push_back(charBinary[i]);
        }
    }

    int n = vectorA.size();

    if(n<24){
        for(int i=n; i<24; i++){
            vectorA.push_back(0);
        }
    }

    return vectorA;
}

vector< vector<bool> > convertVectorStringToVectorVectorBool(vector<string> vectorA){
    vector< vector<bool> > vectorA2;

    for(string s : vectorA){
        vector<bool> vectorTemp = convertStringToVectorBool(s);
        vectorA2.push_back(vectorTemp);
    }

    return vectorA2;
}

vector< vector<bool> > convertVecVec24ToVecVec6(vector< vector<bool> > vectorA2){
    vector< vector<bool> > vectorA3;

    for(vector<bool> a2 : vectorA2){
        for(int i=0; i<=18; i=i+6){
            vector<bool> vectorTemp;
            for(int j=i; j<i+6; j++){
                vectorTemp.push_back(a2[j]);
            }
            vectorA3.push_back(vectorTemp);
        }
    }

    return vectorA3;
}

int convertVecBoolToInt(vector<bool> vectorTemp){
    int n =0;
    for(bool b : vectorTemp){
        n = n<<1;
        n = n | b;
    }
    return n;
}

vector<int> convertVecVecBoolToVecInt(vector< vector<bool> > vectorA3){
    vector<int> vectorA4;

    for(vector<bool> vectorTemp : vectorA3){
        int temp = convertVecBoolToInt(vectorTemp);
        vectorA4.push_back(temp);
    }

    return vectorA4;
}

void inra(vector<string> vectorA){
    for(string a : vectorA){
        cout << a << endl ;
    }
    cout << endl;
}

void inra(vector< vector<bool> > vectorA2){
    for(vector<bool> vectorTemp : vectorA2){
        for(bool b : vectorTemp){
            cout << b ;
        }
        cout << " ";
    }
    cout << endl;
}

void inra(vector<int> vectorA4){
    for(int a4 : vectorA4){
        cout << a4 << " ";
    }
    cout << endl;
}

int main(){
    cout << "nhập chuỗi cần phân tách : " << endl;
    string s;
    std::getline(cin, s);

    vector<string> vectorA = convertStringToVectorString(s);

    cout << endl << "tách thành các chuỗi 3 ký tự : " << endl;
    inra(vectorA);
    cout << endl;

    vector< vector<bool> > vectorA2 = convertVectorStringToVectorVectorBool(vectorA);

    cout << endl << "chuyển các chuỗi 3 ký tự thành khối 24 bit : " << endl;
    inra(vectorA2);
    cout << endl;

    vector< vector<bool> > vectorA3 = convertVecVec24ToVecVec6(vectorA2);

    cout << endl << "chuyển các khối 24 bit thành khối 6 bit : " << endl;
    inra(vectorA3);
    cout << endl;

    vector<int> vectorA4 = convertVecVecBoolToVecInt(vectorA3);

    cout << endl << "chuyển các khối 6 bit thành int : " << endl;
    inra(vectorA4);
    cout << endl;
}
/*
 GkD NC pKFsZ NwJe6f Ldp5I AycJU AdQS Mw
*/
