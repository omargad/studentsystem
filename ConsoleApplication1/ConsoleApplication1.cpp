// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <stdio.h>
#include<string>
class student
{
public:
	student(int ,string ,double,string );
	student();
	int ID;
	string name;
	string surname;
	double degree;
};

student::student(int a, string b , double c, string d)
{
	this->name=d;
	this->surname=b;
	this->degree=c;
	this->ID = a;
}

student::student()
{
}

int main()
{
	student stu;
	cout << "please enter your ID" << endl;
	cin >> stu.ID;
	cout << "please enter your name" << endl;
	cin >> stu.name;
		cout << "please enter your surname" << endl;
		cin >> stu.surname;
		cout << "please enter your degree" << endl;
		cin >> stu.degree;
		system("pause");
    return 0;
}
