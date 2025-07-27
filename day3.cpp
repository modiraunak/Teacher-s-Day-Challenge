#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0 , right = s.size()-1;
        while(left < right){
            if(!isalnum(s[left])){
                left ++;
            }
            else if(!isalnum(s[right])){
                right --;
            }
            else if(tolower(s[left])!=tolower(s[right])){
                return false;
            }else{
                left ++;
                right --;
            }
        }
        return true;
    }
};
int main(){
    Solution sol;
    string input;
    cout << "Enter a string : ";
    getline(cin,input); 
    if(sol.isPalindrome(input)){
        cout << "The given string is a palindrome ";
    }
    else{
        cout << "The given string is not a palindrome";
    }
    return 0;
}