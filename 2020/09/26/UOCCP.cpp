#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
bool isSquare(unsigned long n){
    if (pow(trunc(sqrt(n)),2) == n){
        return true;
    }else{
        return false;
    }
}
void uoccpPrint(unsigned long n){
    for (unsigned long i=2; i<=(n/2); i++){
        if ((n%i == 0) && (isSquare(i))){
            cout<<i<<" ";
        }
    }
    if (isSquare(n)){
        cout<<n;
    }
}
int main(){
    freopen("UOCCP.INP","r",stdin);
    freopen("UOCCP.OUT","w",stdout);
    unsigned long n;
    cin>>n;
    uoccpPrint(n);
}
