//
//  main.cpp
//  BookManagement
//
//  Created by K on 05/05/2024.
//  Copyright © 2024 K. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 Student类
 学生类，用于描述学生的各种信息
 */
class Student {
public:
    Student(const string& name, const int& age) : name(name), age(age) {}
    
    void print() const {
        cout << "Name: " << name << "\nage: " << age << endl;
    }
    
private:
    string name; //学生姓名
    int age; //学生年龄
};
/*
 StudentManagement类
    对学生列表进行添加查询的管理
 123456789

 */
class StudentManagement{
public:
    void addStudent(const string& name, const int& age) {
        Students.push_back(Student(name, age));
    }
    
    void displayStundent() const {
        for (const auto& student : Students) {
            student.print();
            cout << "-----" << endl;
        }
    }
    
private:
    std::vector<Student> Students; //存放一个一个学生的容器
};

int main() {
    StudentManagement studentManagement;
    string name;
    int age;
    
    while (true) {
        cout << "输入'add'添加学生, 'show'显示学生信息, 或者'exit'退出: ";
        string command;
        cin >> command;
        
        if (command == "add") {
            cout << "Enter book title: ";
            cin >> name;
            cout << "Enter book author: ";
            cin >> age;
            studentManagement.addStudent(name, age);
        } else if (command == "show") {
            studentManagement.displayStundent();
        } else if (command == "exit") {
            break;
        } else {
            cout << "非法输入，请重新输入!" << endl;
        }
    }
    
    return 0;
}

