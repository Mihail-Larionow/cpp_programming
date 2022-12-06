#include <iostream>
#include <map>

//Структура StudentGrade
struct StudentGrade {
    std::string name;
    int grade;

    StudentGrade(std::string studName, int studGrade) {
        name = studName;
        grade = studGrade;
    }
    
};


int main()
{
    system("chcp 1251"); //Устанавливаем кодировку

    std::map <std::string, int> group;
    int n;

    std::cout << "Введите количество студентов, оценки которых Вы хотите добавить:\n";
    std::cin >> n;
    
    std::cout << "\nВводите данные в виде: имя_студента оценка\n";
    for (int i = 0; i < n; i++) {
        std::string name;
        int grade;
        std::cin >> name >> grade;
        StudentGrade stud = StudentGrade(name, grade);
        group[stud.name] = stud.grade;
    }

    std::cout << "\nИтоговый список:\n";
    for (const auto& stud : group) {
        std::cout << stud.first << " " << stud.second << "\n";
    }
}
