#include <iostream>
#include <fstream>
using namespace std;
unsigned int charSum(unsigned long n){
    unsigned int Sum = 0;
    while (n != 0){
        Sum += (n%10);
        n /= 10;
    }
    return Sum;
}
unsigned short charCount(unsigned long n){
    unsigned short Count = 0;
    while (n != 0){
        Count++;
        n /= 10;
    }
    return Count;
}
unsigned long sodep(unsigned long n){
    unsigned long long i=1;
    unsigned short counting = 0;
    while (0 == 0){ //Lap vo han den khi thoa lenh return
        if (charSum(i) % charCount(i) == 0){
            counting++;
            if (counting == n){
                return i;
            }
        }
        i++;
    }
}
int main(){
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    unsigned long n;
    cin>>n;
    cout<<sodep(n);
}
