#include<iostream>
#include<math.h>
using namespace std;
 
void gen(int A[], int n) {
    ++A[n - 1];
    for (int i = n - 1; i > 0; --i) {
        if (A[i] > 1) {
            ++A[i - 1];
            A[i] -= 2;
        }
    }
}
 
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout << A[i];
    cout << endl;
}
 
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    //Kh?i t?o m?ng
    int *A = new int[n];
    //X�y d?ng c?u h�nh d?u ti�n
    for (int i = 0; i < n; i++) A[i] = 0;
    //In c?u h�nh hi?n t?i v� x�y d?ng c?u h�nh k? ti?p
    for (int i = 0; i < pow(2, n); i++) {
        xuat(A, n);
        gen(A, n);
    }
}
