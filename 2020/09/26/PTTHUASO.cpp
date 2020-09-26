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
void thuasoPrint(unsigned long n){
    unsigned int i = 2;
    bool first = true;
    while (n != 1){
        if (!isPrime(i)){
            i++;
            continue;
        }
        if (n%i == 0){
            if (!first){
                cout<<".";
            }
            cout<<i;
            n /= i;
            first = false;
        }else{
            i++;
        }
    }
}
int main(){
    freopen("PTTHUASO.INP","r",stdin);
    freopen("PTTHUASO.OUT","w",stdout);
    unsigned long n;
    cin>>n;
    thuasoPrint(n);
}
