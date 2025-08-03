#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n , k;
    int l[100];
    int count = 0;
    cin >> n >> k;
    for(int i = 0; i<=n; i++){
        
        cin >> l[i];
    }
    k--;
    for(int j = 0; j < n; j++){
        
        if(l[j]> 0 && l[j] >= l[k]){
            
            count++;
        }
    }
    cout << count << endl;
}