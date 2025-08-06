#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string digits;
    for(char c : s){
        if(c != '+') digits.push_back(c);
    }
    sort(digits.begin(),digits.end());
    for(int i = 0; i < digits.size(); i
    ++){
        cout << digits[i];
        if(i != digits.size()-1) cout << "+";
    }
    return 0;
}