#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Subject.h"
#include "Class.h"
#include "Student.h"
#include "FinalReport.h"

using namespace std;

// VECTOR FOR STORING SUBJECTS
vector <Subject> newSubjects;
vector <int> ::iterator i;
vector <int> ::reverse_iterator ir;
vector <Subject> lowerSecSubjects;
vector <Subject> upperSecArtSubjects;
vector <Subject> upperSecSciSubjects;

// VECTOR FOR STORING CLASSES
vector <Class> newClasses;

// VECTOR FOR STORING STUDENTS
vector <Student> newStudents;

// VECTOR FOR STORING SUBJECT/SCORE
vector <SubjectScore> studentSubScores;

// VECTOR FOR STORING EVERYTHING!
vector <FinalReport> newReports;


void printSubjectsTable() {
    cout << "============================================================\n";
    for (auto &newSubject : newSubjects) {
        cout << "Subject ID: " << newSubject.getSubjectID() << " | Subject Name: " << newSubject.getSubjectName()
             << " | Subject Type: " << newSubject.getSubjectType() << endl;
    }
    cout << "============================================================\n\n";
}
void printLowSecSubjectsTable() {
    cout << "============================================================\n";
    for (auto &lowerSecSubject : lowerSecSubjects) {
        cout << "Subject ID: " << lowerSecSubject.getSubjectID() << " | Subject Name: " << lowerSecSubject.getSubjectName()
             << " | Subject Type: " << lowerSecSubject.getSubjectType() << endl;
    }
    cout << "============================================================\n\n";
}

void printUpperSecArtSubjectsTable() {
    cout << "============================================================\n";
    for (auto &upperSecArtSubject : upperSecArtSubjects) {
        cout << "Subject ID: " << upperSecArtSubject.getSubjectID() << " | Subject Name: " << upperSecArtSubject.getSubjectName()
             << " | Subject Type: " << upperSecArtSubject.getSubjectType() << endl;
    }
    cout << "============================================================\n\n";
}
void printUpperSecSciSubjectsTable() {
    cout << "============================================================\n";
    for (auto &upperSecSciSubject : upperSecSciSubjects) {
        cout << "Subject ID: " << upperSecSciSubject.getSubjectID() << " | Subject Name: " << upperSecSciSubject.getSubjectName()
             << " | Subject Type: " << upperSecSciSubject.getSubjectType() << endl;
    }
    cout << "============================================================\n\n";
}

void printClassesTable() {
    cout << "============================================================\n";
    for (int x = 0; x < newClasses.size(); x++) {
        cout << "Class ID: " << newClasses[x].getClassID() << " | Class Name: " << newClasses[x].getClassName()
             << " | Year: " << newClasses[x].getYearForm() << " | Grade: " << newClasses[x].getYearGrade() << endl;
    }
    cout << "============================================================\n\n";
}
void printStudentsTable() {
    cout << "============================================================\n";
    for (int x = 0; x < newStudents.size(); x++) {
        cout << "Student ID: " << newStudents[x].getStudentNo() << " | Student Name: " << newStudents[x].getFirstName()
             << " | Student Last Name: " << newStudents[x].getLastName() << " | Gender: " << newStudents[x].getGender() << endl;
    }
    cout << "============================================================\n\n";
}
void printReportsTable() {
    for (int y = 0; y < newReports.size(); y++){
        cout << "===============================\n";
        cout << "Student ID: " << newReports[y].getStudentNo()
             << " || Class ID: " << newReports[y].getClassID() << endl;
        cout << "===============================\n";
    }
}
//void loadSubject() {
//    ifstream subject;
//    subject.open("subject.txt");
//    string line;
//
//    while (getline(subject, line)) // To get you all the lines.
//    {
//        istringstream ss(line);
//        int id;
//        string name;
//        char type;
//        ss >> id >> name >> type;
//        newSubjects.push_back(Subject(id, name, type));
//        cout << id << " " << name << " " << type << "\n";
//    }
//
//    subject.close();
//}
//void writeSubject() {
//    ofstream subject;
//    subject.open("subject.txt");
//
//    for (int x = 0; x< newSubjects.size(); x++) {
//        subject << newSubjects[x].getSubjectID() << " " << newSubjects[x].getSubjectName() << " " << newSubjects[x].getSubjectType() << "\n";
//        cout << newSubjects[x].getSubjectID() << " " << newSubjects[x].getSubjectName() << " " << newSubjects[x].getSubjectType() << "\n";
//    }
//    cout << "\n";
//    subject.close();
//}
//void loadStudent() {
//    ifstream student;
//    student.open("student.txt");
//    string line;
//
//    while (getline(student, line)) // To get you all the lines.
//    {
//        istringstream ss(line);
//        int id;
//        string fname;
//        string lname;
//        char gender;
//        ss >> id >> fname >> lname >> gender;
//        newStudents.push_back(Student(id, fname, lname, gender));
//        cout << id << " " << fname << " " << lname << " " << gender << "\n";
//    }
//
//    student.close();
//}
//void writeStudent() {
//    ofstream student;
//    student.open("student.txt");
//
//    for (int x = 0; x< newStudents.size(); x++) {
//        student << newStudents[x].getStudentNo() << " " << newStudents[x].getFirstName() << " " << newStudents[x].getLastName() << " " << newStudents[x].getGender() << "\n";
//        cout << newStudents[x].getStudentNo() << " " << newStudents[x].getFirstName() << " " << newStudents[x].getLastName() << " " << newStudents[x].getGender() << "\n";
//    }
//    cout << "\n";
//    student.close();
//}
//void loadClass() {
//    ifstream classs;
//    classs.open("class.txt");
//    string line;
//
//    while (getline(classs, line)) // To get you all the lines.
//    {
//        istringstream ss(line);
//        int id;
//        string name;
//        int year;
//        char grade;
//        ss >> id >> name >> year >> grade;
//        newClasses.push_back(Class(id, name, year, grade));
//        cout << id << " " << name << " " << year << " " << grade << "\n";
//    }
//
//    classs.close();
//}
//void writeClass() {
//    ofstream classs;
//    classs.open("class.txt");
//
//    for (int x = 0; x< newClasses.size(); x++) {
//        classs << newClasses[x].getClassID() << " " << newClasses[x].getClassName() << " " << newClasses[x].getYearForm() << " " << newClasses[x].getYearGrade() << "\n";
//        cout << newClasses[x].getClassID() << " " << newClasses[x].getClassName() << " " << newClasses[x].getYearForm() << " " << newClasses[x].getYearGrade() << "\n";
//    }
//    cout << "\n";
//    classs.close();
//}
//void loadReport() {
//    ifstream report;
//    report.open("report.txt");
//    string line;
//
//    while (getline(report, line)) // To get you all the lines.
//    {
//        istringstream ss(line);
//        int sid;
//        string sfname;
//        string slname;
//        char gender;
//        int cid;
//        string cname;
//        int cform;
//        char cgrade;
//        int subid;
//        string subname;
//        char subType;
//        double scr;
//        char ntg;
//        ss >> sid >> sfname >> slname >> gender >> cid>>cname >>cform>>cgrade >> subid >> subname >> subType>> scr ;
//        newReports.push_back(FinalReport(sid, sfname, slname, gender, cid, cname, cform, cgrade, subid, subname, subType, scr));
//        cout << sfname << " " << slname << " " << gender << " " << cid << " " << cname << " " << cform << " " << cgrade << " " << subid << " " << subname << " " << subType << " " << scr<<endl ;
//    }
//    cout << endl;
//    report.close();
//}
//void writeReport() {
//    ofstream report;
//    report.open("report.txt");
//
//    for (int x = 0; x< newReports.size(); x++) {
//        report << newReports[x].getStudentNo() << " " << newReports[x].getFirstName() << " " << newReports[x].getLastName() << " " << newReports[x].getGender() << " "
//               << newReports[x].getClassID() << " " << newReports[x].getClassName() << " " << newReports[x].getYearForm()<< " " << newReports[x].getYearGrade()
//               << " " << newReports[x].getSubjectID() << " " << newReports[x].getSubjectName() << " " << newReports[x].getSubjectType() << " " << newReports[x].getScore() << "\n";
//        cout << newReports[x].getStudentNo() << " " << newReports[x].getFirstName() << " " << newReports[x].getLastName() << " " << newReports[x].getGender() << " "
//             << newReports[x].getClassID() << " " << newReports[x].getClassName() << " " << newReports[x].getYearForm() << " " << newReports[x].getYearGrade()
//             << " " << newReports[x].getSubjectID() << " " << newReports[x].getSubjectName() << " " << newReports[x].getSubjectType() << " " << newReports[x].getScore() << "\n";
//    }
//    cout << "\n";
//    report.close();
//}

int main() {
    // FOR MENUS
    char loginChoice, adminChoice, subjectsChoice, classesChoice, studentsChoice, teachersChoice,functionChoice;
    bool menu = true;
    bool duplicate = true;

    // FOR SUBJECTS
    int subjectID;
    string subjectName;
    char subjectType;

    // FOR CLASSES
    int classID, yearForm, yearGradeChoice;
    string className;
    char yearGrade;

    // FOR STUDENTS
    int studentID;
    string studentfName;
    string studentlName;
    char studentGender;

    double score;

    bool found = false;

    int x;
//    loadSubject();
//    loadStudent();
//    loadClass();
//    loadReport();
    while (menu)
    {

        cout << "\n====================MAIN MENU====================\n"
                "1. School Admin Login\n"
                "2. School Teacher Login\n"
                "3. Exit\n"
                "Enter your choice: ";

        cin >> loginChoice;
        cout << endl;

        switch (loginChoice) {
            case '1':
                cout << "\n=========Admin Login==========\n"
                        "1. SUBJECTS\n"
                        "2. CLASSES\n"
                        "3. STUDENTS\n"
                        "4. Exit\n"
                        "Enter your choice: ";

                cin >> adminChoice;
                cout << endl;

                switch (adminChoice) {
                    //============ FOR SUBJECTS ===============//
                    case '1':
                        cout << "==========SUBJECTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit to menu\n"
                                "Enter your choice: ";


                        cin >> subjectsChoice;
                        cout << endl;

                        switch (subjectsChoice) {
                            case '1':
                                cout << "*ADDING NEW SUBJECT*" << endl;
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();


                                cout << "Enter Subject ID: ";
                                cin >> subjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> subjectID;
                                }

                                //== CHECKS VECTOR TO SEE IF SUBJECT ID EXISTS ALREADY ==//
                                for (x = 0; x < newSubjects.size(); x++) {
                                    bool unique = false;
                                    while (unique != true) {
                                        if (subjectID == newSubjects[x].getSubjectID()) {
                                            cout << "ERROR: ID already exists!\n";
                                            cout << "Please enter a unique ID: ";
                                            cin >> subjectID;
                                            //==== WHILE INPUT IS NOT AN INTEGER ====//
                                            while (cin.fail()) {
                                                cout << "ERROR: ID can only consist of numbers!\n";
                                                cin.clear();
                                                cin.ignore(256, '\n');
                                                cout << "Please enter a valid ID: ";
                                                cin >> subjectID;
                                            }

                                        }
                                        else {
                                            unique=true;
                                        }
                                    }

                                }
                                cout << "Enter Subject Name: ";
                                cin >> subjectName;
                                for (x = 0; x < newSubjects.size(); x++) {
                                    bool uni = false;
                                    while (uni != true) {
                                        if (subjectName == newSubjects[x].getSubjectName()) {
                                            cout << "ERROR: Subject Name already exists!\n";
                                            cout << "Please enter a unique Subject Name: ";
                                            cin >> subjectName;
                                            //==== WHILE INPUT IS NOT AN INTEGER ====//
                                            while (cin.fail()) {
                                                cin.clear();
                                                cin.ignore(256, '\n');
                                                cout << "Please enter a valid Subject Name: ";
                                                cin >> subjectName;
                                            }

                                        }
                                        else {
                                            uni = true;
                                        }
                                    }

                                }

                                cout << "Enter Subject Type(Core/Selective): ";
                                cin >> subjectType;
                                while (cin.fail()) {
                                    cout << "ERROR: Enter a single character\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Enter again: ";
                                    cin >> subjectType;
                                }
                                // CHECKS IF subjectType IS EITHER C or S
                                duplicate = true;
                                while (duplicate) {
                                    if (subjectType == 'C' || subjectType == 'S') {
                                        duplicate = false;
                                    }
                                    else {
                                        while (!(subjectType == 'C' || subjectType == 'S')) {
                                            cout << "Please enter either C or S: ";
                                            cin.clear();
                                            cin >> subjectType;
                                            if (subjectType == 'C' || subjectType == 'S') {
                                                duplicate = false;
                                            }
                                        }
                                    }
                                }

                                //==== ADDS SUBJECT OBJECT TO VECTOR ====//
                                newSubjects.push_back(Subject(subjectID, subjectName, subjectType));

                                if (subjectType == 'C'){
                                    lowerSecSubjects.push_back(Subject(subjectID, subjectName, subjectType));
                                }
                                else if (subjectType == 'S'){
                                    cout << "1. Art Stream Subject\n"
                                            "2. Science Stream Subject\n"
                                            "> ";
                                    cin >> adminChoice;
                                    if (adminChoice == '1'){
                                        upperSecArtSubjects.push_back(Subject(subjectID, subjectName, subjectType));
                                    }
                                    else if (adminChoice == '2'){
                                        upperSecSciSubjects.push_back(Subject(subjectID, subjectName, subjectType));
                                    }
                                }

                                cout << "Subject successfully added!" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                break;
                            case '2':
                                cout << "*MODIFYING SUBJECT RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                cout << "Enter Subject ID to modify: ";
                                cin >> subjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> subjectID;
                                }


                                for (x = 0; x < newSubjects.size(); x++) {
                                    // goes through vector of subjects and finds matching subject ID and its index
                                    // then updates the variables of the matching subject
                                    if (subjectID == newSubjects[x].getSubjectID()) {
                                        cout << "NEW Subject ID: ";
                                        cin >> subjectID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()) {
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256, '\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> subjectID;
                                        }
                                        newSubjects[x].setSubjectID(subjectID);
                                        cout << "NEW Subject Name: ";
                                        cin >> subjectName;
                                        newSubjects[x].setSubjectName(subjectName);
                                        cout << "NEW Subject Type(Core/Selective): ";
                                        cin >> subjectType;
                                        while (cin.fail()) {
                                            cout << "ERROR: Enter a single character\n";
                                            cin.clear();
                                            cin.ignore(256, '\n');
                                            cout << "Enter again: ";
                                            cin >> subjectType;
                                        }
                                        // CHECKS IF subjectType IS EITHER C or S
                                        duplicate = true;
                                        while (duplicate) {
                                            if (subjectType == 'C' || subjectType == 'S') {
                                                duplicate = false;
                                            }
                                            else {
                                                while (!(subjectType == 'C' || subjectType == 'S')) {
                                                    cout << "Please enter either C or S: ";
                                                    cin.clear();
                                                    cin >> subjectType;
                                                    if (subjectType == 'C' || subjectType == 'S') {
                                                        duplicate = false;
                                                    }
                                                }
                                            }
                                        }

                                        newSubjects[x].setSubjectType(subjectType);
                                        cout << "Subject modified successfully!\n";
                                    }
                                    else {
                                        //IF SUBJECT ID DOES NOT EXIST

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                break;
                            case '3':
                                cout << "*REMOVING SUBJECT RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                cout << "Enter subject ID to remove: ";
                                cin >> subjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> subjectID;
                                }

                                // goes through vector of subjects and finds matching subject ID and its index
                                for (x = 0; x < newSubjects.size(); x++) {
                                    if (subjectID == newSubjects[x].getSubjectID()) {
                                        // REMOVES ELEMENT FROM VECTOR
                                        newSubjects.erase(newSubjects.begin() + x);
                                        cout << "Subject successfully removed!\n";
                                    }
                                    else {
                                        //                                        cout << "Subject does not exist!\n";
                                        //                                        cout << "Enter a valid ID: ";
                                        //                                        cin.clear();
                                        //                                        cin >> removeSubjectID;

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                break;
                            case '4':
                                cout << "Exiting...";
                                break;
                            default:
                                break;
                        }

                        break;

                        //============ FOR CLASSES ===============//
                    case '2':
                        cout << "==========CLASSES==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit to menu\n"
                                "Enter your choice: ";

                        cin >> classesChoice;

                        switch (classesChoice) {
                            case '1':
                                cout << "*ADDING NEW CLASS*" << endl;
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();


                                cout << "Enter Class ID: ";
                                cin >> classID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> classID;
                                }


                                //== CHECKS VECTOR TO SEE IF CLASS ID EXISTS ALREADY ==//
                                for (x = 0; x < newClasses.size(); x++) {
                                    if (classID == newClasses[x].getClassID()) {
                                        cout << "Class ID already exists!\n";
                                        cout << "Please enter a unique ID: ";
                                        cin >> classID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()) {
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256, '\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> classID;
                                        }
                                        break;
                                    }
                                }

                                cout << "Enter Class Name: ";
                                cin >> className;
                                cout << "Enter Class Year(1 - 5): ";
                                cin >> yearForm;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: Select from 1 to 5!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid number: ";
                                    cin >> yearForm;
                                }
                                if (yearForm == 1 || yearForm == 2 || yearForm == 3) {
                                    yearGrade = '1';
                                }
                                else if (yearForm == 4 || yearForm == 5) {
                                    cout << "Please select grade: \n"
                                            "1. Upper Secondary Art\n"
                                            "2. Upper Secondary Science\n"
                                            "> ";

                                    cin >> yearGradeChoice;

                                    while (!(yearGradeChoice == 1 || yearGradeChoice == 2)) {
                                        cout << "Please enter 1 or 2 only!\n"
                                                "> ";

                                        cin >> yearGradeChoice;
                                    }

                                    if (yearGradeChoice == 1) {
                                        yearGrade = '2';
                                    }
                                    else if (yearGradeChoice == 2) {
                                        yearGrade = '3';
                                    }
                                }

                                //==== ADDS SUBJECT OBJECT TO VECTOR ====//
                                newClasses.push_back(Class(classID, className, yearForm, yearGrade));

                                cout << "Class successfully added!" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                break;
                            case '2':
                                cout << "*MODIFYING CLASS RECORDS*" << endl;
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                cout << "Enter Class ID to modify: ";
                                cin >> classID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> classID;
                                }


                                for (x = 0; x < newClasses.size(); x++) {
                                    // goes through vector of subjects and finds matching subject ID and its index
                                    // then updates the variables of the matching subject
                                    if (classID == newClasses[x].getClassID()) {
                                        cout << "NEW Class ID: ";
                                        cin >> classID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()) {
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256, '\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> classID;
                                        }
                                        newClasses[x].setClassID(classID);
                                        cout << "NEW Class Name: ";
                                        cin >> className;
                                        newClasses[x].setClassName(className);
                                        cout << "NEW Class Year(1-5): ";
                                        cin >> yearForm;
                                        newClasses[x].setYearForm(yearForm);
                                        cout << "NEW Class Grade: ";
                                        cin >> yearGrade;
                                        newClasses[x].setYearGrade(yearGrade);
                                        cout << "Class modified successfully!\n";
                                    }
                                    else {

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                break;
                            case '3':
                                cout << "*REMOVING CLASS RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                cout << "Enter Class ID to remove: ";
                                cin >> classID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> classID;
                                }

                                // goes through vector of classes and finds matching class ID and its index
                                for (x = 0; x < newClasses.size(); x++) {
                                    if (classID == newClasses[x].getClassID()) {
                                        // REMOVES ELEMENT FROM VECTOR
                                        newClasses.erase(newClasses.begin() + x);
                                        cout << "Class successfully removed!\n";
                                    }
                                    else {
                                        //                                        cout << "Subject does not exist!\n";
                                        //                                        cout << "Enter a valid ID: ";
                                        //                                        cin.clear();
                                        //                                        cin >> removeSubjectID;

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                break;
                            case '4':
                                cout << "Exiting...\n";
                                break;
                            default:
                                break;
                        }

                        break;

                        //============ FOR STUDENTS ===============//
                    case '3':
                        cout << "==========STUDENTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit\n"
                                "Enter your choice: ";

                        cin >> studentsChoice;

                        switch (studentsChoice) {
                            case '1':
                                cout << "*ADDING NEW STUDENTS*\n";
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                cout << "Enter Student ID: ";
                                cin >> studentID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> studentID;
                                }


                                //== CHECKS VECTOR TO SEE IF STUDENT ID EXISTS ALREADY ==//
                                for (x = 0; x < newStudents.size(); x++) {
                                    if (studentID == newStudents[x].getStudentNo()) {
                                        cout << "Student ID already exists!\n";
                                        cout << "Please enter a unique ID: ";
                                        cin >> studentID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()) {
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256, '\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> studentID;
                                        }
                                        break;
                                    }
                                }

                                cout << "Enter Student First Name: ";
                                cin >> studentfName;
                                cout << "Enter Student Last Name: ";
                                cin >> studentlName;
                                cout << "Enter Student Gender(M/F): ";
                                cin >> studentGender;
                                while (cin.fail()) {
                                    cout << "ERROR: Enter a single character\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Enter again: ";
                                    cin >> studentGender;
                                }

                                // CHECKS IF studentGender IS EITHER M or F
                                duplicate = true;
                                while (duplicate) {
                                    if (studentGender == 'M' || studentGender == 'F') {
                                        duplicate = false;
                                    }
                                    else {
                                        while (!(studentGender == 'M' || studentGender == 'F')) {
                                            cout << "Please enter either M or F: ";
                                            cin.clear();
                                            cin >> studentGender;
                                            if (studentGender == 'M' || studentGender == 'F') {
                                                duplicate = false;
                                            }
                                        }
                                    }
                                }

                                //==== ADDS STUDENTS OBJECT TO VECTOR ====//
                                newStudents.push_back(Student(studentID, studentfName,studentlName, studentGender));

                                cout << "Student successfully added!" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                break;
                            case '2':
                                cout << "*MODIFYING STUDENT RECORDS*\n";
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                cout << "Enter Student ID: ";
                                cin >> studentID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> studentID;
                                }


                                //== CHECKS VECTOR TO SEE IF STUDENT ID EXISTS ALREADY ==//
                                for (x = 0; x < newStudents.size(); x++) {
                                    // IF STUDENT ID EXISTS
                                    if (studentID == newStudents[x].getStudentNo()) {
                                        cout << "NEW Student ID: ";
                                        cin >> studentID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()) {
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256, '\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> classID;
                                        }
                                        newStudents[x].setStudentNo(studentID);
                                        cout << "NEW Student Name: ";
                                        cin >> studentfName;
                                        newStudents[x].setFirstName(studentfName);
                                        cout << "NEW Student Last Name: ";
                                        cin >> studentlName;
                                        newStudents[x].setLastName(studentlName);
                                        cout << "NEW Gender(M/F): ";
                                        cin >> studentGender;
                                        // IF INPUT FAILS
                                        while (cin.fail()) {
                                            cout << "ERROR: Enter a single character\n";
                                            cin.clear();
                                            cin.ignore(256, '\n');
                                            cout << "Enter again: ";
                                            cin >> studentGender;
                                        }
                                        // CHECKS IF studentGender IS EITHER M or F
                                        duplicate = true;
                                        while (duplicate) {
                                            if (studentGender == 'M' || studentGender == 'F') {
                                                duplicate = false;
                                            }
                                            else {
                                                while (!(studentGender == 'M' || studentGender == 'F')) {
                                                    cout << "Please enter either M or F: ";
                                                    cin.clear();
                                                    cin >> studentGender;
                                                    if (studentGender == 'M' || studentGender == 'F') {
                                                        duplicate = false;
                                                    }
                                                }
                                            }
                                        }
                                        newStudents[x].setGender(studentGender);
                                        cout << "Student modified successfully!\n";
                                    }
                                }


                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();
                                break;
                            case '3':
                                cout << "*REMOVING STUDENT RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                cout << "Enter Student ID to remove: ";
                                cin >> studentID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()) {
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256, '\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> studentID;
                                }

                                //== CHECKS VECTOR TO SEE IF STUDENT ID EXISTS ALREADY ==//
                                for (x = 0; x < newStudents.size(); x++) {
                                    // IF STUDENT ID EXISTS
                                    if (studentID == newStudents[x].getStudentNo()) {
                                        // REMOVES STUDENT FROM VECTOR
                                        newStudents.erase(newStudents.begin() + x);
                                        cout << "Student successfully removed!\n";
                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                break;
                            case '4':
                                cout << "Exiting...\n";
                                break;
                            default:
                                break;
                        }
                        break;

                    case '4':
                        cout << "Exiting...\n";
                        break;

                    default:
                        cout << "Invalid choice!\n";
                        break;

                }
                break;
            case '2':

                cout << "\n=========Teacher Login==========\n"
                        "1. Search student by name\n"
                        "2. Search student by ID\n"
                        "3. Show all results(Student name + Subject Scores)\n"
                        "4. Exit\n"
                        "Enter your choice: ";


                cin >> teachersChoice;

                switch (teachersChoice) {
                    case '1':
                        // SHOW STUDENT RECORDS
                        printStudentsTable();

                        cout << "\n===========STUDENT NAME==========\n"
                                "Enter student Last name: ";
                        cin >> studentlName;

                        for (x = 0; x < newStudents.size(); x++) {
                            if (studentlName == newStudents[x].getLastName()) {
                                cout << "||||||STUDENT FOUND||||||\n";
                                cout << "1. Register Student to class\n"
                                        "2. Enter subject score\n"
                                        "3. Modify subject score\n"
                                        "4. Display student details\n"
                                        "5. Exit\n";

                                break;
                            }
                            else {
                                // IF STUDENT IS NOT FOUND
                            }
                        }



                        break;
                    case '2':
                        // SHOW STUDENT RECORDS
                        printStudentsTable();

                        cout << "\n===========STUDENT ID==========\n"
                                "Enter student ID: ";

                        cin >> studentID;

                        for (x = 0; x < newStudents.size(); x++) {
                            if (x != newStudents.size()) {
                                if (studentID == newStudents[x].getStudentNo()) {
                                    cout << "||||||STUDENT FOUND||||||\n";
                                    cout << "1. Register Student to class\n"
                                            "2. Enter subject score\n"
                                            "3. Modify subject score\n"
                                            "4. Display student details\n"
                                            "5. Exit\n";
                                    cin >> functionChoice;
                                    switch(functionChoice) {
                                        case '1':
                                            printClassesTable();
                                            cout << "Enter Class ID\n";
                                            cin >> classID;

                                            // user inputs a class ID
                                            for (int a = 0; a < newClasses.size(); a++){
                                                // if class ID is found
                                                if (classID == newClasses[a].getClassID()){
                                                    cout << "Class found!\n";
                                                    // creates a finalreport object to store student and class info
                                                    // and stores in vector
                                                    newReports.push_back(FinalReport());
                                                    for (int b = 0; b < newReports.size(); b++){
                                                        if (!(classID == newReports[x].getClassID() && studentID == newReports[x].getStudentNo())){
                                                            newReports.pop_back();
                                                            // IF CLASS IS A LOWER SECONDARY CLASS
                                                            if (newClasses[a].getYearGrade() == '1'){
                                                                cout << "STUDENT ADDED TO CLASS!\n";
                                                                newReports.push_back(FinalReport(studentID, classID));
                                                            }
                                                            break;
                                                        }
                                                        else{
                                                            cout << "Student is already in class!\n";
                                                        }
                                                    }
                                                    printReportsTable();
                                                }
                                            }


                                            break;
                                        case '2':
                                            cout << "Enter Class ID\n";
                                            cin >> classID;

                                            for (int q = 0; q < newClasses.size(); q++){
                                                if (classID == newClasses[q].getClassID()){
                                                    if (newClasses[q].getYearGrade() == '1'){
                                                        cout << "This is a Lower Secondary Class\n";
                                                        printLowSecSubjectsTable();
                                                        cout << "Enter a subject ID: ";
                                                        cin >> subjectID;
                                                        for (int i = 0; i < lowerSecSubjects.size(); i++){
                                                            if (subjectID == lowerSecSubjects[x].getSubjectID()){
                                                                    cout << "Subject found!\n";
                                                                    cout << "Enter score: ";
                                                                    cin >> score;
                                                                    studentSubScores.push_back(SubjectScore(lowerSecSubjects[x], score));
                                                                    cout << "FOR STUDENT: " << studentID << endl;
                                                                    for (int c = 0; c < studentSubScores.size(); c++){
                                                                        cout << "Subject: " << studentSubScores[c].getSubject().getSubjectName()
                                                                             << " || Score: " << studentSubScores[c].getScore();
                                                                    }
                                                            }
                                                        }
                                                    }
                                                }
                                            }


//                                            cout << "Enter Subject ID\n";
//                                            cin >> subjectID;
//                                            cout << "Enter score\n";
//                                            cin >> score;
//
//                                            for (int k = 0; k < newClasses.size(); k++)
//                                            {
//                                                if (classID == newClasses[k].getClassID())
//                                                {
//                                                    for (int s = 0; s < newSubjects.size(); s++)
//                                                    {
//                                                        if (subjectID == newSubjects[s].getSubjectID())
//                                                        {
//                                                            newReports.push_back(FinalReport(newStudents[x].getStudentNo(), newStudents[x].getFirstName(), newStudents[x].getLastName(),
//                                                                                             newStudents[x].getGender(), newClasses[k].getClassID(), newClasses[k].getClassName(), newClasses[k].getYearForm(), newClasses[k].getYearGrade(),
//                                                                                             newSubjects[s].getSubjectID(), newSubjects[s].getSubjectName(), newSubjects[s].getSubjectType(), score));
//                                                            printReportsTable();
//                                                        }
//                                                    }
//                                                }
//                                            }

                                            break;
                                        case '3':
//                                            printReportsTable();
//                                            cout << "Enter Subject ID\n";
//                                            cin >> subjectID;
//                                            for (int k = 0; k < newReports.size(); k++) {
//                                                if (studentID == newReports[k].getStudentNo()) {
//                                                    if (subjectID == newReports[k].getSubjectID())
//                                                    {
//                                                        cout << "Enter score\n";
//                                                        cin >> score;
//                                                        newReports.push_back(FinalReport(newStudents[k].getStudentNo(), newStudents[k].getFirstName(), newStudents[k].getLastName(),
//                                                                                         newStudents[k].getGender(), newClasses[k].getClassID(), newClasses[k].getClassName(), newClasses[k].getYearForm(), newClasses[k].getYearGrade(),
//                                                                                         newSubjects[k].getSubjectID(), newSubjects[k].getSubjectName(), newSubjects[k].getSubjectType(), score));
//                                                    }
//                                                }
//                                            }
//                                            printReportsTable();
                                            break;
                                        case '4':
//                                            cout << "============================================================================================ \n";
//                                            for (int k = 0; k < newReports.size(); k++) {
//
//                                                if (studentID == newReports[k].getStudentNo()) {
//
//                                                    cout << "Student ID: " << newReports[k].getStudentNo()
//                                                         << " ||Student Name: " << newReports[k].getFirstName()
//                                                         << " " << newReports[k].getLastName()
//                                                         << " ||Subject Name: " << newReports[k].getSubjectName()
//                                                         << " ||Score: " << newReports[k].getScore() << endl;
//                                                }
//                                            }
//                                            cout << "============================================================================================ \n";
                                            break;
                                        case '5':
                                            break;

                                    }
                                }
                                else if (x == newStudents.size() - 1 && found != true) {
                                    cout << "No record found" << endl;
                                }
                            }
                        }

                        break;
                    case '3':
                        // SHOW ALL STUDENT DETAILS(NAME + SUBJECT + SUBJECT SCORES)
                        printReportsTable();

                        break;
                    case '4':
                        break;

                    default:
                        break;
                }

                break;
            case '3':
                cout << "Exiting program" << endl;


                menu = false;
                break;
            default:
                cout << "Not a valid choice!\n\n";
                break;
        }
    }
//    writeClass();
//    writeStudent();
//    writeSubject();
//    writeReport();
    return 0;
}
