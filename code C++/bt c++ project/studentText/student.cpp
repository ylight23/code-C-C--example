#include<iostream>
#include "student.h"
using namespace std;


void Student::displayStudentData(){
	
	cout <<"this= "<<this<<endl;
    cout << "idNum = " <<this->idNum << endl;
    cout << "lastName = " <<this->lastName << endl;
    cout << "gradePointAverage = " << this-> gradePointAverage << endl;
    for(int i=0;i<this ->nPoints;i++){
    	cout<<"Diem ["<<i<< "]""=" <<this->points[i]<<" , ";
	}
	cout<<endl;
	cout<<endl;
}

void Student::setIdNum(int idNum){
    this->idNum = idNum;
}

void Student::setLastName(string lastName){
    this->lastName = lastName;
}
void Student::setGradePointAverage(double gradePointAverage){

    this->gradePointAverage = gradePointAverage;
}
Student::Student(int idNum, string lastName, double gpa){ // tao constructor
	this->idNum = idNum;
	this->lastName= lastName;
	this->gradePointAverage = gpa;
	this->nPoints=0;
}
void Student::setPoint(int i, double point){
	
	this->points[i] =point;
}
//Student::Student(int idNum, string lastName, double gpa, int nPoints){
//	this->idNum = idNum;
//	this->lastName= lastName;
//	this->gradePointAverage = gpa;
//	this->nPoints=nPoints;
//	points= new double[nPoints];
//}
Student::Student(int idNum1, string lastName1, double gpa1, int nPoints,double *points){
	this->idNum = idNum1;
	this->lastName= lastName1;
	this->gradePointAverage = gpa1;
	this->nPoints=nPoints;
	this->points= new double[nPoints];
	for(int i=0;i<nPoints;i++){
		this->points[i]=points[i];
	}
}
Student::Student(const Student &st){
	this->idNum= st.idNum;
	this->lastName= st.lastName;
	this->gradePointAverage= st.gradePointAverage;
	this->nPoints =st.nPoints;
	this->points= new double[nPoints];
	for(int i=0; i<this->nPoints;i++){
		this->points[i]=st.points[i];
	}
	
}
Student::Student(){
	idNum=-1;
	lastName="abc";
	gradePointAverage = 6;
	nPoints=0;
	
}
void f1::print(Student std){
	 		cout<<std.idNum<<endl;
	 		cout<<std.lastName<<endl;
	 		cout<<std.gradePointAverage<<endl;
}
	
