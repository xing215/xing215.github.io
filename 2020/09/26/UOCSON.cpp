#include <iostream>
#include <fstream>
using namespace std;
void uocPrint(unsigned long n){
    for (unsigned long i=1; i<=(n/2); i++){
        if (n%i == 0){
            cout<<i<<" ";
        }
    }
    cout<<n;
}
int main(){
    freopen("UOCSON.INP","r",stdin);
    freopen("UOCSON.OUT","w",stdout);
    unsigned long n;
    cin>>n;
    uocPrint(n);
}
