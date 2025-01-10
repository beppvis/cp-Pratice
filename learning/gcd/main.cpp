#include <iostream>

using namespace std;

int gcd(int a, int b){
    if (a == 0) return b;
    return gcd(b%a, a);
}


int main(){
    int x = gcd(110, 0);
    cout <<"gcd is : "<< x << endl;
   
}
