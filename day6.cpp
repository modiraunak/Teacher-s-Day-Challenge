#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        stack<char> st;

        for (char c : s) {
            if (map.count(c)) {
                if (st.empty() || st.top() != map[c]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
int main(){
    Solution sol;
    string input;
    cout << "Enter a string : ";
    getline(cin,input); 
    if(sol.isValid(input)){
        cout << "The given string there ";
    }
    else{
        cout << "The given string is not there";
    }
    return 0;
}
