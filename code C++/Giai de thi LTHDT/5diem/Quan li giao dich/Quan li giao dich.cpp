#include"QuanLi.h"
#include"Giaodich.h"
#include"Tiente.h"
#include"Vang.h"
#include<vector>
#include<string.h>

#include <iostream>
using namespace std;
int main()
{
    QuanLi a;
    int ch;
    do {
        system("cls");
        cout << "1.Them" << endl;
        cout << "2.Xuat" << endl;
        cout << "3.Sua" << endl;
        cout << "4.Xoa" << endl;
        cout << "5.Tinh tong tri gia" << endl;
        cout << "6.Tim" << endl;
        cout << "7.Thoat" << endl;
        cout << "Hay chon: ";
        cin >> ch;
        switch (ch) 
        {
            case 1: {
                a.Them();
                break;
            }
            case 2: {
                a.Xuat();
                system("pause");
                break;
            }
            case 3: {
                a.Sua();
                //system("pause");
                break;
            }
            case 4: {
                a.Xoa();
                system("pause");
                break;
            }
            case 5: {
                a.TrungBinh();
                system("pause");
                break;
            }
            case 6: {
                a.Tim();
                //system("pause");
                break;
            }       
             default:
                break;
        }
    }
    while(ch != 7);
    system("pause");
}

