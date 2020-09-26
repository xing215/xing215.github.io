#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
bool isPrime(unsigned long n){
    if (n<2){
        return false;
    }
    for (int i=2; (i*i)<=n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
bool isSquare(unsigned long n){

}
int main(){
    freopen("UOCCP.INP","r",stdin);
    freopen("UOCCP.OUT","w",stdout);
    unsigned long n;
    cin>>n;
    unsigned long temp = maxPrime(n);
    if (temp == 0){
        cout<<-1;
    }else{
        cout<<temp;
    }
}

