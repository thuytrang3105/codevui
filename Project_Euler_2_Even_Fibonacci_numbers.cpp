#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

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
