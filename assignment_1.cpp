#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student;
class Classroom;
class School;

// class Student
// {
// private:
//     string _studentname;
//     float _diemTB;

// public:
//     float getStudentname()
//     {
//         return _studentname;
//     }
//     float getDiemTB()
//     {
//         return _diemTB;
//     }

//     void setStudentname(string Value)
//     {
//         _studentname = Value;
//     }
//     void setDiemTB(float Value)
//     {
//         _DiemTB = Value;
//     }
// };

class Classroom
{
private:
    string _classname;
    int _number;
    // vector<Student> _membersList;

public:
    string getClassname()
    {
        return _classname;
    }
    int getNumber()
    {
        return _number;
    }
    // Student getMembersList()
    // {
    //     return _membersList;
    // }

    void setClassname(string value)
    {
        _classname = value;
    }
    void setNumber(int value)
    {
        _number = value;
    }
    // void setMembersList(Student value)
    // {
    //     _membersList = value;
    // }
};

// create class school
class School
{
private:
    int _classnumber;
    vector<Classroom> _classList;

public:
    int getClassnumber()
    {
        return _classnumber;
    }
    // vector<Classroom> getClasslist()
    // {
    //     return _classList;
    // }
    void setClassnumber(int value)
    {
        _classnumber = value; //=5
    }
    void addClasslist(Classroom value)
    {
        _classList.push_back(value);
    }
};

int main()
{
    int classnumber;
    School school;
    string className;

    cout << "Please enter class number: ";
    cin >> classnumber; //=5
    school.setClassnumber(classnumber);
    cout << school.getClassnumber();

    cout << "\nPlease enter class name: ";
    cin >> className;

    return 0;
}
