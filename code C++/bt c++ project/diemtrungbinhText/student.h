#include<iostream>

using namespace std;

class Student{
	private: // meu su dung public thi ko can truy cap thuoc tinh cua doi tuong ay va cac ham setDiemtoan,DiemLy,.... khoong can thiet nua
		float Toan,Ly,Hoa,Average;
		string name,dateOfBirth,sex;
	public:
		void displayStudentData();
	
		void setDiemToan(float);
		void setDiemLy(float);
		void setDiemHoa(float);
		void setDiemAverage(float);
		void setName(string);
		void setDateOfBirth(string);
		void setSex(string);	
	//	void operator[](size_t t);
		void fillInfo();
};
