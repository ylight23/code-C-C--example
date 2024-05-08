#include <bits/stdc++.h>
using namespace std;
 
//Hàm tìm u?c chung l?n nh?t
int UCLN(int A, int B) {
    for(int i = min(A, B); i > 0; --i) {
        if (A % i == 0 && B % i ==0)
            return i;
    }
    //Không ch?y t?i dây vì A, B luôn chia h?t cho 1
}
int main() {
    int A,B;
    A = 20;
    B = 12;
    cout << UCLN(A, B);
}
