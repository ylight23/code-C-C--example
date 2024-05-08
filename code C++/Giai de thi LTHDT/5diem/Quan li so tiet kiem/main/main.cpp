#include <iostream>
#include"QuanLi.h"
#include"SoTietKiem.h"
#include"KhongHan.h"
#include"CoHan.h"
#include<vector>
using namespace std;
int main()
{
    QuanLi ql;
    int ch;
    do {
        system("cls");
        cout << "1.Them" << endl;
        cout << "2.Xuat" << endl;
        cout << "3.Tinh lai" << endl;
        cout << "4.Thoat" << endl;
        cout << "Moi chon: ";
        cin >> ch;
        switch(ch) {
            case 1: {
                ql.Them();
                break;
            }
            case 2: {
                ql.Xuat();
                system("pause");
                break;
            }
            case 3: {
                ql.TinhLai();
                system("pause");
                break;
            }
            default:
                break;
                system("pause");

        }
    } while (ch != 4);
}

