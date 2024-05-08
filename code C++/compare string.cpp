
#include<iostream>
#include<string.h>
using namespace std;
int str_com (const char*xau1 ,const char*xau2)
{
    if ( strlen(xau1) < strlen(xau2)) return 1;
    else if ( strlen(xau1 )> strlen(xau2) )return -1;
    else  return 0;
}
 
int main()
{
    char *xau1= new char[100];
     char *xau2= new char [100];
    cout<< " nhap xau thu 1 :" ;
    cin.ignore();
    gets(xau1);
    cout<<" nhap xau thu 2 : ";
    cin.ignore();
    gets(xau2);
    cout << " so sanh 2 xau la :" << str_com(xau1,xau2) << endl;
   // system ("pause");
    return 0;
}
