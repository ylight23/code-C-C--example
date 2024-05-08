#include<iostream>
using namespace std;
class Date{
	private:
		static int day, month, year;
	public:
//		Date():day(1),month(1),year(1)
//		{}
		Date(int d, int m, int y){
		//kiem tra tinh hop le cua ngay thang, neu vi pham
		//gan ve gia tri mac dinh
		d=day,m= month,y= year;
		static int nm[]={31,28,31,30,31,30,31,31,30,31,30,31};
		if(year<0) year=1;
		if(IsLeapYear(year)) nm[1]=29;
		if(month>12 || month<=0) month=1;
		if(day<=0 || day>nm[month-1]) day=1;
	}

	static bool IsLeapYear(int year) { 
		return (year%4 ||year%100 ||year%400);
	}
//	static int get_year(){
////		return year;
//	}
	static int DateOfMonth(const Date &dateval){
		int month=dateval.month;
		if(month>=1 && month<=12){
			if(month!=2){
				bool isEven=!(month%2);
				//neu vao thang 1, 3, 5, 7
				if(month<8 && !isEven)
					return 31;
				//neu vao thang 4, 6
				else if(month<8)
					return 30;
				//neu vao thang 8, 10, 12
				else if(month>=8 && isEven)
					return 31;
				//neu vao thang 9, 11
				else
					return 30;
			} else
				return (IsLeapYear(dateval.year)) ? 29 : 28;
		} else
			//thang bat hop le
			return 0;
	}
	static void nhap(){
//		cout<<"Nhap ngay: ";
//		cin>>day;
//		cout<<"Nhap thang: ";
//		cin>>month;
		cout<<"Nhap nam: ";
		cin>>year;
	}
	static void set_year(int year){
		year=year;
	}
	static void check( ){
	///	set_year(year);
		if (!IsLeapYear(year)){
			cout<<"Khong ton tai nam nhuan";
		}
		else cout<<"Ton tai";
//		else if(IsLeapYear){
//		
//			cout<<"Ton tai";
//		}
	}
};
int main(){
	int year;
	Date::set_year(2013);
	
	Date::check();
}

