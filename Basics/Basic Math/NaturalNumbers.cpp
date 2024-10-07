#include <iostream>
using namespace std;

int main() {
    
    int n ;
    cin >> n;
    for(int m=2;m<=n;m++){ // m = 11
        int count = 0;
        for(int i=1;i<=m;i++){
            if(m%i==0){
                count++;
                }
            }
        if(count == 2){
             cout << m << endl;
        }
    }
    return 0;
}