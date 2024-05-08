#include"student.h"
int main(){
	Student a;
	cout<<"dia chi a="<<&a<<endl;
	a.displayStudentData();
	a.setIdNum(2);
	a.setLastName("Nguyen");
	a.setGradePointAverage(4.5);
	//thu tao 1 thuoc tinhs idNUm
	//a.idNum =2 ;
	//=> chuong trinh ko chay dc vi thuoc tinh trong dinh truy cap private=> thay doi hay chuyen private => public 
	//+> day la cach khong khuyen khich vi ko lam sau sac den huong doi tuong cua c++
	a.displayStudentData();
//	system("pause");

	Student *p; // su dung con tro
	p = &a;
	p->displayStudentData();
	//
	Student b(3, "Tran", 6.5);//su dung constructor goi day du cac thuoc tinh trong constructor da goi, cac  thuoo tinh lay tu class
	b.displayStudentData();
	//
	Student *q= new Student(9, "vu", 7.7);// tuong tu vooi su dung con tro constructor
	q->displayStudentData();
	//
	int n=5;
	Student *arr = new Student[n]; //su dung vong lap for xuat mang
	for(int i=0;i<n;i++){
		arr[i].displayStudentData();
	}
	//
	Student(5,"Dinh", 8.9).displayStudentData();// khoi tao khong co bien
	//
	int nPoints=3;
	double *points= new double[nPoints];
	points[0]=5.5; points[1]=6.5; points[2] =7.5;
	Student d(6, "Ly", 3.3, nPoints, points);
	d.displayStudentData();
	Student e(d); // su dung copy constructor
	e.displayStudentData();
	e.setPoint(1,9.0);
	e.displayStudentData();
	e.displayStudentData();
	//
	f1 c;
	c.print(a);

	return 0;
}
