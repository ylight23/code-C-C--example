#include <bits/stdc++.h>
using namespace std;
 
//H�m t�m u?c chung l?n nh?t
int UCLN(int A, int B) {
    for(int i = min(A, B); i > 0; --i) {
        if (A % i == 0 && B % i ==0)
            return i;
    }
    //Kh�ng ch?y t?i d�y v� A, B lu�n chia h?t cho 1
}
int main() {
    int A,B;
    A = 20;
    B = 12;
    cout << UCLN(A, B);
}
