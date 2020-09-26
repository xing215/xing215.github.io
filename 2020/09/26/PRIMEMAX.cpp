#include <iostream>
#include <fstream>
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
unsigned long maxPrime(unsigned long n){
    for (unsigned long i=n; i>0; i--){
        if (isPrime(i)){
            return i;
        }
    }
    return 0;
}
int main(){
    freopen("PRIMEMAX.INP","r",stdin);
    freopen("PRIMEMAX.OUT","w",stdout);
    unsigned long n;
    cin>>n;
    unsigned long temp = maxPrime(n);
    if (temp == 0){
        cout<<-1;
    }else{
        cout<<temp;
    }
}

