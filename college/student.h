#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

typedef enum m_deptartment
{
	ce,
	cs,
	ee,
	ec,
	me,
}department;

class Student
{
	private:
	unsigned int m_id;
	char *m_name;
	char *m_address;
	department m_dept;
	public:
	Student(unsigned int id, char *name, char *address, department dept);
	void saveDetails();
	void loadDetails();
	void showDetails();
	char *getDept(department dept);
};

		
#endif 
