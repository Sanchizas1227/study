#include <bits/stdc++.h>
using namespace std;

long long powerOfTwo(int n){
    if(n == 0){
        return 1;
    } else {
        return 2 * powerOfTwo(n - 1);
    }
}
int main(){
    int n;
    cin >> n;
    cout << powerOfTwo(n) << endl;
    return 0;
}
