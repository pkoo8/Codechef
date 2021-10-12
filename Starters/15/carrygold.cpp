#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        int max = (n+1)*y;
        if(x>max){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}