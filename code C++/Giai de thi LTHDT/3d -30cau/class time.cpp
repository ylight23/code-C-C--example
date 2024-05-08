#include<iostream>
using namespace std;

class Date{
	private:
		int day, month, year;
	public:
		Date() :day(1), month(1), year(1){
		}	
		~Date(){
		}
		Date(int d ,int m, int y): day(d), month(m), year(y) {
			static int num[]={31,28,31,30,31,30,31,31,30,31,30,31};
			if(year<0) year =1;
			if(leapYear(year)) num[1]=29;
			if(month>12 || month<1) month =1;
			if(day<=0 || day> num[month-1]) day=1;	
		}
		static bool leapYear(int year){ //kiem tra nam nhuan 
			return !(year%4); 
		}
		static int DateOfMonth( const Date &dateval){ //tinh so ngay 1 thang
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
			} 
			else
				return (leapYear(dateval.year)) ? 29 : 28;
		} else
			return 0; 

	}
	static int TimeSpan(const Date &d1, const Date &d2)
	{	
		
		int n=0;//bo dem nam nhuan
		int c=1;//he so
		int y1=d1.year,y2=d2.year;
		if(y1<y2){
			swap(y1,y2);
			c=-1;
		}
		//kiem tra xem co bao nhieu nam nhuan da qua
		//khong xet nam nhuan cua y1 va y2
		for(int i=y2+1;i<y1;++i){
			if(!(i%4)) ++n;
		}
		//tinh so ngay da qua tu dau nam y2 (1/1) den truoc nam y1
		n+=(y1-y2)*365;
		static int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
		if(leapYear(y2)) m[1]=29;
		int i=0;
		//ma duoi day la bu tru so ngay trong nam
		while(i<d2.month-1)
			n-=m[i++]*c;
		n-=d2.day*c;
		i=0;
		if(leapYear(y1)) m[1]=29;
		else m[1]=28;
		while(i<d1.month-1)
			n+=m[i++]*c;
		n+=d1.day*c;
		return n*c;
	}

	
	friend istream& operator>>(istream & is, Date &a){
		cout<<"Nhap ngay:";
		is>>a.day;
		cout<<"Nhap thang: ";
		is>>a.month;
		cout<<"Nhap nam: ";
		is>>a.year;
		//a.DateOfMonth(day);
		return is;
	}
	friend ostream& operator<<(ostream & os, Date a){
		os<<a.day<<"/";
		os<<a.month<<"/"<<a.year;
	//	a.DateOfMonth(a.day);
		return os;
	}
	int getYear() {
		return year;
	}
	int getMonth() {
		
		return month;
	}
	int getDay() {
		return day;
	}
};
int main(){
	Date d1,d2;
	cin>>d1>>d2;
	cout<<d1<<endl<<d2<<endl;
//	cout<<d.DateOfMonth(d)<<endl;
//	cout<<Date::DateOfMonth(d)<<endl;//phuong thuc static k can phai thong qua doi tuong ma goi truc tiep class luon :))
//	if(d.leapYear(d.getYear())){
//		cout<<"\nNam nhuan!"<<endl;
//	}
//	else
//	 	cout<<"\nNam k nhuan"<<endl;
///////
//	
//	if(Date::leapYear(d.getYear())==true){
//		cout<<"Nam nhuan!"<<endl;
//	}
//	else 
//		cout<<"Nam khong nhuan!"<<endl;		
//	
	cout<<Date::TimeSpan(d2,d1);
}
