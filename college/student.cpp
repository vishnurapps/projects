#include <iostream>
#include "student.h"
#include <string.h>
#include <fstream>

using namespace std;

Student :: Student(unsigned int id, char *name, char *address, department dept)
{
	m_id = id;
	m_name = new char[strlen(name) +1];
	strcpy(m_name, name);
	m_address = new char[strlen(address) +1];
	strcpy(m_address, address);
	m_dept = dept;
}

void Student::saveDetails()
{
	ofstream os("student.txt", ios::binary);
	os.write(reinterpret_cast<char*>(&(*this)), sizeof(*this));
	os.close();
}
void Student::loadDetails()
{
}

void Student::showDetails()
{
	cout << "Id\t\t:\t " << m_id << endl
	<< "Name\t\t:\t " << m_name << endl
	<< "Address\t\t:\t " << m_address << endl
	<< "Id\t\t:\t " << getDept(m_dept) << endl;
}
char *Student::getDept(department dept)
{
	switch(dept)
	{
		case 0:
			return "cs";
			break;
		case 1:
			return "ce";
			break;
		case 2:
			return "ee";
			break;
		case 3:
			return "ec";
			break;
		case 4:
			return "me";
			break;
		}
}

int main()
{
	Student s1(1, "Vishnu", "Sreevihar, Manakkara", ec);
	s1.showDetails();
	s1.saveDetails();
}
