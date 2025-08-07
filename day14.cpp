#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string w;
    cin >> w;
    w[0]=toupper(w[0]);
    cout << w << endl;
    return 0;
}