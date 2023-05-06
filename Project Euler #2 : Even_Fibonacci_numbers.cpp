#include <iostream>

using namespace std;

void fibo(long n){
        long t=0,a=1,b=1;
        do{
                long c=a+b;
                if (c>n) break;
                a=b;
                b=c;
                if (c%2==0) t+=b;
        }while (1);
        cout<<t<<endl;
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        fibo(n);
    }
    return 0;
}
