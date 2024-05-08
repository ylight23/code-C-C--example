#include<iostream>
#include<string>
using namespace std;
class Student{
	private:// dinh dia chi co the la public ,private hoac protected
		int idNum;
		string lastName;
		double gradePointAverage;
		int nPoints;
		double *points;
	public:
		Student();// tap ham khoi tao
		Student(int idnum, string lastName, double gpa); // xay dung ham khoi tao constructor
	//	Student(int idnum, string lastName, double gpa, int nPoints);
		Student(int idnum, string lastName, double gpa, int nPoints, double *points);
		Student(const Student &st);
		void displayStudentData();
		void setIdNum(int);
		void setLastName(string);
		void setGradePointAverage(double);	
		void setPoint(int i, double point);
		friend class f1;
};

class f1{
	public:
	 	void print(Student std);
};
