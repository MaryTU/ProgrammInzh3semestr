#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>

using namespace std;

class people {
public:
	string name;
	string gender;
	void getName(string x) {
		name = x;
	}
	void getGender(string y) {
		gender = y;
	}
};

class student:public people{
public:
	string score;
	student (string names,string scors,string genders) {
		getName(names);
		score = scors;
		getGender(genders);
	}
	string molodec_li() {
		if (score == "Отлично" || score == "Хорошо") {
			return "Молодец!";
		}else {
			return "Не отличник и не хорошист";
		}
	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<student> stud;

	stud.push_back(student("Олег", "Отлично", "Мужчина"));
	stud.push_back(student("Сергей", "Хорошо", "Мужчина"));
	stud.push_back(student("Ира", "На три", "Женщина"));
	stud.push_back(student("Соня", "На три", "Женщина"));

	for (int _i = 0; _i < stud.size(); _i++) {
		if (stud.at(_i).molodec_li() == "Молодец!") {
			cout << stud[_i].gender<<" "<< stud[_i].name <<" - " << stud.at(_i).molodec_li()<<" учится на "<<stud[_i].score<<"\n";
		}
	}
}