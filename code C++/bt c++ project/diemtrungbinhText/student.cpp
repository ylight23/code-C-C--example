#include<iostream>
#include"student.h"

using namespace std;
void Student::fillInfo(){
	cout<<"Nhap ten: ";
	getline(cin, name);
	cout<<"Nhap gioi tinh: ";
	cin>>sex;
	cout<<"Nhap ngay sinh: ";
	cin>>dateOfBirth;
	cout<<"Nhap diem toan: ";
	cin>>Toan;
	cout<<"Nhap diem ly: ";
	cin>>Ly;
	cout<<"Nhap diem hoa: ";
	cin>>Hoa;
	cout<<"===========************=========="<<endl;
}
void Student::displayStudentData(){
	cout<<"-------Thong tin Sinh vien-------"<<endl;
	cout<<"Ho va ten:  "<< name<<endl;
	cout<<"Gioi tinh:  "<<sex<<endl;
	cout<<"Ngay sinh: "<<dateOfBirth<<endl;
	cout<<"Diem toan: "<<Toan<<endl;
	cout<<"Diem ly: "<<Ly<<endl;
	cout<<"Diem hoa: "<<Hoa<<endl;
	cout<<"Diem trung binh 3 mon: "<< (Toan + Ly + Hoa)/3;
	
}
//void Student::setDiemToan(float Toan){
//	this->Toan=Toan;
//}
//void Student::setName(string name1){
//	this->name =name1;
//}
//void Student::setSex(string sex){
//	this->sex =sex;
//}
//void Student::setDateOfBirth(string dateOfBirth){
//	this->dateOfBirth =dateOfBirth;
//}
//void Student::setDiemLy(float Ly){
//	this->Ly=Ly;
//}	
//void Student::setDiemHoa(float Hoa){
//	this->Hoa=Hoa;
//}
//void Student::setDiemAverage(float Average){
//	this->Average=Average;
//}

