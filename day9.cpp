#include<bits/stdc++.h>
using namespace std;
int main(){
    int team;
    cin >> team;
    int count = 0;
    while(team){
        int f1,f2,f3;
        cin >> f1 >> f2 >> f3;
        if(f1+f2==2 || f2+f3 == 2 || f1+f3 == 2){
            count+=1;
        }
        team--;
    }
    cout << count;
    return 0;
}