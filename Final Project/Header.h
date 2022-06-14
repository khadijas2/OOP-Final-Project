#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class person {
protected:
	string name;
	string id;
	string password;
public:
	void writeonfile();
	void Displayfile();

	void setname(string a) {
		name = a;
	}
	void setid(string a) {
		id = a;
	}
	void setpassword(string a) {
		password = a;
	}
	string getname() {
		return name;
	}
	string getid() {
		return id;
	}
	string getpass() {
		return password;
	}
};

class teacher :public person {
	char tsection;
	string tcourse;
	friend class admin;
public:
	char getsection() {
		return tsection;
	}
	void settsection(char a) {
		tsection = a;
	}
	string gettcourse() {
		return tcourse;
	}
	void settcourse(string a) {
		tcourse = a;
	}
};
class student :public person {
	int semester = 0;
	float cgpa = 0.0;
	char ssection;
	string asssolution = "";
	string quizsolution = "";
	char assgrade = '\0';
	char quizgrade = '\0';
public:
	friend class admin;
	void setsemester(int a) {
		semester = a;
	}
	void setcgpa(float a) {
		cgpa = a;
	}
	void setsection(char a) {
		ssection = a;
	}
	int getsemester() {
		return semester;
	}
	float getcgpa() {
		return cgpa;
	}

	char getsection() {
		return ssection;
	}
	void setasssoltion(string a) {
		asssolution = a;
	}
	string getasssolution() {
		return asssolution;
	}
	void setquizsolution(string a) {
		quizsolution = a;
	}
	string getquiozsolution() {
		return quizsolution;
	}
	void setassgrade(char a) {
		assgrade = a;
	}
	char getassgrade() {
		return assgrade;
	}
	void setquizgrade(char a) {
		quizgrade = a;
	}
	char getquizgrade() {
		return quizgrade;
	}

};
class assignment {
	char asssection;
	string assname;
	string asscourse;
	string asscontent;
	string quizname;
	string quizcontent;
	string quizcourse;
	char quizsection;
public:
	void setquizname(string a) {
		quizname = a;
	}
	string getquizname() {
		return quizname;
	}
	void setquizcontent(string a) {
		quizcontent = a;
	}
	string getquizcontent() {
		return quizcontent;
	}
	void setquizcourse(string a) {
		quizcourse = a;
	}
	string getquizcourse() {
		return quizcourse;
	}

	void setasssection(char a) {
		asssection = a;
	}
	char getasssection() {
		return asssection;
	}
	void setquizsection(char a) {
		quizsection = a;
	}
	char getquizsection() {
		return quizsection;
	}
	void setassname(string a) {
		assname = a;
	}
	string getassname() {
		return assname;
	}
	void setasscourse(string a) {
		asscourse = a;
	}
	string getasscourse() {
		return asscourse;
	}
	void setasscontent(string a) {
		asscontent = a;
	}
	string getasscontent() {
		return asscontent;
	}
};

class course {
	string cname;
	int credithour;
	int semester;
	char csection;
	friend class admin;
public:

	void setcname(string a) {
		cname = a;
	}
	void setcredithour(int a) {
		credithour = a;
	}
	void setcsemester(int a) {
		semester = a;
	}
	void setcsection(char a) {
		csection = a;
	}

	char getcsection() {
		return csection;
	}
	string getcname() {
		return cname;
	}
	int getsemester() {
		return semester;
	}
	int getcredithour() {
		return credithour;
	}
};
student stds[100];
course courses[100];
teacher teachers[100];
assignment assignments[100];

fstream sfile;
fstream tfile;
fstream afile;

class admin :public person {
public:

	void setstdgpa(student& obj, float  a) {
		obj.cgpa = a;
	}
	void setstdsemester(student& obj, int  a) {
		obj.semester = a;
	}
	void setstdssection(student& obj, char  a) {
		obj.ssection = a;
	}
	void setstdid(student& obj, string  a) {
		obj.id = a;
	}
	void setstdname(student& obj, string  a) {
		obj.name = a;
	}
	void setstdpassword(student& obj, string  a) {
		obj.password = a;
	}
	int getstdsemester(student& obj) {
		return obj.semester;
	}
	float getstdcgpa(student& obj) {
		return obj.cgpa;
	}
	char getstdsection(student& obj) {
		return obj.ssection;
	}
	void settecid(teacher& obj, string  a) {
		obj.id = a;
	}
	void settecname(teacher& obj, string  a) {
		obj.name = a;
	}
	string gettecname(teacher& obj) {
		return obj.name;
	}
	string gettecid(teacher& obj) {
		return obj.id;
	}
	string gettecpass(teacher& obj) {
		return obj.password;
	}
	string getteccourse(teacher& obj) {
		return obj.tcourse;
	}
	char gettecsectrion(teacher& obj) {
		return obj.tsection;
	}
	void settecsection(teacher& obj, char  a) {
		obj.tsection = a;
	}
	void settecpass(teacher& obj, string  a) {
		obj.password = a;
	}
	void setteccourse(teacher& obj, string  a) {
		obj.tcourse = a;
	}
	string getcorname(course& obj) {
		return obj.cname;
	}
	int getcorsemester(course& obj) {
		return obj.semester;
	}
	int getcorcredithour(course& obj) {
		return obj.credithour;
	}
	void setcorname(course& obj, string a) {
		obj.cname = a;
	}
	void setcorcredithour(course& obj, int a) {
		obj.credithour = a;
	}
	void setcorsemester(course& obj, int a) {
		obj.semester = a;
	}
	void displayst(int totalst, int code) {
		cout << "We have total  " << totalst << "  students and their details are: " << endl;
		cout << "NAME\t\tID\t\tSEMESTER\t\tCGPA\t\tPASSWORD\t\tSECTION " << endl;
		for (int i = 0; i < totalst; i++) {
			cout << stds[i].getname() << "\t\t" << stds[i].getid() << "\t\t" << stds[i].getsemester() << "\t\t" << stds[i].getcgpa() << "\t\t" << stds[i].getpass() << "\t\t" << stds[i].getsection() << endl;
			cout << "\n";
		}
	}
	void displaytc(int totaltc, int code) {
		cout << "We have total  " << totaltc << "  teachers and their details are: " << endl;
		cout << "Name\t\tid\t\tpassword\t\tSECTION" << endl;
		for (int i = 0; i < totaltc; i++) {
			cout << teachers[i].getname() << "\t\t" << teachers[i].getid() << "\t\t" << teachers[i].getpass() << "\t\t" << teachers[i].getsection() << endl;
			cout << "\n";
		}
	}
	void displaycc(int totalcc, int code) {
		cout << "We have total  " << totalcc << "  courses and their details are: " << endl;
		cout << "Name\t\tCredithour\t\tSemester" << endl;
		for (int i = 0; i < totalcc; i++) {
			cout << courses[i].getcname() << "\t\t" << courses[i].getcredithour() << "\t\t" << courses[i].getsemester() << endl;
			cout << "\n";
		}
	}
	void findcourse(int totalcc, int code, int& g, bool& df) {
		cout << "Enter name of the course to deete " << endl;
		string n;
		cin >> n;
		for (int k = 0; k < totalcc; k++) {
			if (courses[k].getcname() == n) {
				g = k;
				df = true;
				break;
			}
		}
	}
};
void writeonstdfile(string a) {

	sfile.open("STUDENTS.txt", ios::out | ios::app);
	sfile << a << "\n";
	sfile.close();
}
int checkonstdfile(string a) {
	sfile.open("STUDENTS.txt", ios::out | ios::app);
	string c;
	int d = 0;
	string arr[100];
	int arr1 = 0;
	while (getline(sfile, c)) {
		arr[arr1] = c;
		arr1 += 1;

	}
	for (int i = 0; i < 101; i++) {
		if (arr[i] == a) {
			d = 1;
		}
	}

	return d;
}


admin admins[100];



string menu() {
	system("cls");
	cout << "\t\t\t\t----------------------------------------------\n";
	cout << "\t\t\t\t\t Learning Management System \n";
	cout << "\t\t\t\t\tWelcome to \"LMS\" PLEASE LOG IN  : " << endl;
	cout << "\t\t\t\t----------------------------------------------\n";
	string a;
	cout << "\t\t\t\tID:  ";
	cin >> a;
	return a;
}

