/*************************************************************************
* Problem: 유클리드알고리즘                                                *
*************************************************************************/
/*************************************************************************
* 국민대학교 소프트웨어융합대학 소프트웨어학부 3학년       20171687 임용빈    *
*************************************************************************/

#include <iostream>
using namespace std;

int gcd(int a, int b);

int main(void){
    int numTestCases;
    int m, n;
    cin >> numTestCases;

    for(int i=0; i<numTestCases; i++){
        cin >> m >> n;
        cout << gcd(m, n) << endl;
    }    
    return 0;
}

int gcd(int a, int b){
    if (b==0)
        return a;
    else
        return gcd(b, a%b);
}