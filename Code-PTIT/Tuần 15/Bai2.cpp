#include<bits/stdc++.h>

using namespace std;

vector<string> convertToVectorTu(string input){

    vector<string> vector1;

    stringstream ss(input);
    char kyTuPhanTach = ' ';
    string xauRong = "";

    string token;
    while(getline(ss, token, kyTuPhanTach)){
        if(token != xauRong){
            vector1.push_back(token);
        }
    }

    return vector1;

}

string convertMotTuToCamelCase(string input){
    string output = "";

    output = output + (char)toupper(input[0]);

    for(int i=1; i<input.length(); i++){
        output = output + (char)tolower(input[i]);
    }

    return output;
}

string convertVectorTuToCamelCase(vector<string> vectorInput){
    string output= "";

    for(string s : vectorInput){
        string sTemp = convertMotTuToCamelCase(s);
        output = output + sTemp + " ";
    }

    output = output.substr(0, output.length()-1);

    return output;
}

int main(){
    string s = "hello abc       d     def ghi";

    vector<string> vector1 = convertToVectorTu(s);

    cout << convertVectorTuToCamelCase(vector1) << endl;
}
