#include <iostream>
#include <vector>

#include "Subject.h"
#include "Class.h"
#include "Student.h"

using namespace std;

// VECTOR FOR STORING SUBJECTS
vector <Subject> newSubjects;
vector <int> :: iterator i;
vector <int> :: reverse_iterator ir;

// VECTOR FOR STORING CLASSES
vector <Class> newClasses;

// VECTOR FOR STORING STUDENTS
vector <Student> newStudents;

void printSubjectsTable(){
    cout << "============================================================\n";
    for (auto &newSubject : newSubjects) {
        cout << "Subject ID: " << newSubject.getSubjectID() << " | Subject Name: " << newSubject.getSubjectName()
             << " | Subject Type: " << newSubject.getSubjectType() << endl;
    }
    cout << "============================================================\n\n";
}

void printClassesTable(){
    cout << "============================================================\n";
    for (int x = 0; x < newClasses.size(); x++){
        cout << "Class ID: " << newClasses[x].getClassID() << " | Class Name: " << newClasses[x].getClassName()
             << " | Year: " << newClasses[x].getYearForm() << " | Grade: " << newClasses[x].getYearGrade() << endl;
    }
    cout << "============================================================\n\n";
}

void printStudentsTable(){
    cout << "============================================================\n";
    for (int x = 0; x < newStudents.size(); x++){
        cout << "Student ID: " << newStudents[x].getStudentNo() << " | Student Name: " << newStudents[x].getFullName()
             << " | Gender: " << newStudents[x].getGender() << endl;
    }
    cout << "============================================================\n\n";
}

int main() {
    // FOR MENUS
    int loginChoice, adminChoice, subjectsChoice, classesChoice ,studentsChoice, teachersChoice;
    bool menu = true;
    bool duplicate = true;

    // FOR SUBJECTS
    int subjectID;
    string subjectName;
    char subjectType;

    // FOR CLASSES
    int classID, yearForm;
    string className;
    char yearGrade;

    // FOR STUDENTS
    int studentID;
    string studentName;
    char studentGender;

    int x;

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
            case 1:
                cout << "\n=========Admin Login==========\n"
                        "1. SUBJECTS\n"
                        "2. CLASSES\n"
                        "3. STUDENTS\n"
                        "4. Exit\n"
                        "Enter your choice: ";

                cin >> adminChoice;
                cout << endl;

                switch(adminChoice){
                    //============ FOR SUBJECTS ===============//
                    case 1:
                        cout << "==========SUBJECTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit to menu\n"
                                "Enter your choice: ";


                        cin >> subjectsChoice;
                        cout << endl;

                        switch(subjectsChoice){
                            case 1:
                                cout << "*ADDING NEW SUBJECT*" << endl;
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();


                                cout << "Enter Subject ID: ";
                                cin >> subjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> subjectID;
                                }

                                //== CHECKS VECTOR TO SEE IF SUBJECT ID EXISTS ALREADY ==//
                                for (x = 0; x < newSubjects.size(); x++) {
                                    if (subjectID == newSubjects[x].getSubjectID()){
                                        cout << "ERROR: ID already exists!\n";
                                        cout << "Please enter a unique ID: ";
                                        cin >> subjectID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()){
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256,'\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> subjectID;
                                        }
                                    }
                                }

                                cout << "Enter Subject Name: ";
                                cin >> subjectName;
                                cout << "Enter Subject Type(Core/Selective): ";
                                cin >> subjectType;
                                while (cin.fail()){
                                    cout << "ERROR: Enter a single character\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Enter again: ";
                                    cin >> subjectType;
                                }
                                // CHECKS IF subjectType IS EITHER C or S
                                duplicate = true;
                                while(duplicate){
                                    if (subjectType == 'C' || subjectType == 'S'){
                                        duplicate = false;
                                    }
                                    else{
                                        while (!(subjectType == 'C' || subjectType == 'S')){
                                            cout << "Please enter either C or S: ";
                                            cin.clear();
                                            cin >> subjectType;
                                            if (subjectType == 'C' || subjectType == 'S'){
                                                duplicate = false;
                                            }
                                        }
                                    }
                                }

                                //==== ADDS SUBJECT OBJECT TO VECTOR ====//
                                newSubjects.push_back(Subject(subjectID, subjectName, subjectType));

                                cout << "Subject successfully added!" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();


                                break;
                            case 2:
                                cout << "*MODIFYING SUBJECT RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                cout << "Enter Subject ID to modify: ";
                                cin >> subjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> subjectID;
                                }


                                for (x = 0; x < newSubjects.size(); x++){
                                    // goes through vector of subjects and finds matching subject ID and its index
                                    // then updates the variables of the matching subject
                                    if (subjectID == newSubjects[x].getSubjectID()){
                                        cout << "NEW Subject ID: ";
                                        cin >> subjectID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()){
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256,'\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> subjectID;
                                        }
                                        newSubjects[x].setSubjectID(subjectID);
                                        cout << "NEW Subject Name: ";
                                        cin >> subjectName;
                                        newSubjects[x].setSubjectName(subjectName);
                                        cout << "NEW Subject Type(Core/Selective): ";
                                        cin >> subjectType;
                                        while (cin.fail()){
                                            cout << "ERROR: Enter a single character\n";
                                            cin.clear();
                                            cin.ignore(256,'\n');
                                            cout << "Enter again: ";
                                            cin >> subjectType;
                                        }
                                        // CHECKS IF subjectType IS EITHER C or S
                                        duplicate = true;
                                        while(duplicate){
                                            if (subjectType == 'C' || subjectType == 'S'){
                                                duplicate = false;
                                            }
                                            else{
                                                while (!(subjectType == 'C' || subjectType == 'S')){
                                                    cout << "Please enter either C or S: ";
                                                    cin.clear();
                                                    cin >> subjectType;
                                                    if (subjectType == 'C' || subjectType == 'S'){
                                                        duplicate = false;
                                                    }
                                                }
                                            }
                                        }

                                        newSubjects[x].setSubjectType(subjectType);
                                        cout << "Subject modified successfully!\n";
                                    }
                                    else{
                                        //IF SUBJECT ID DOES NOT EXIST

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();


                                break;
                            case 3:
                                cout << "*REMOVING SUBJECT RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                cout << "Enter subject ID to remove: ";
                                cin >> subjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
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
                                    else{
//                                        cout << "Subject does not exist!\n";
//                                        cout << "Enter a valid ID: ";
//                                        cin.clear();
//                                        cin >> removeSubjectID;

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                printSubjectsTable();

                                break;
                            case 4:
                                cout << "Exiting...";
                                break;
                            default:
                                break;
                        }

                        break;
                    case 2:
                        cout << "==========CLASSES==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit to menu\n"
                                "Enter your choice: ";

                        cin >> classesChoice;

                        switch(classesChoice){
                            case 1:
                                cout << "*ADDING NEW CLASS*" << endl;
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();


                                cout << "Enter Class ID: ";
                                cin >> classID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> classID;
                                }


                                //== CHECKS VECTOR TO SEE IF CLASS ID EXISTS ALREADY ==//
                                for (x = 0; x < newClasses.size(); x++){
                                    if (classID == newClasses[x].getClassID()){
                                        cout << "Class ID already exists!\n";
                                        cout << "Please enter a unique ID: ";
                                        cin >> classID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()){
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256,'\n');
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
                                while (cin.fail()){
                                    cout << "ERROR: Select from 1 to 5!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid number: ";
                                    cin >> yearForm;
                                }

                                cout << "Please select grade: \n"
                                        "1. Lower Secondary\n"
                                        "2. Upper Secondary Art\n"
                                        "3. Upper Secondary Science\n";
                                cin >> yearGrade;
                                //==== CHECKS IF USER INPUT OF yearGrade(char) IS 1,2, OR 3 ====//
                                while (! (yearGrade == '1' || yearGrade == '2' || yearGrade == '3')){
                                    cout << "Please enter (1 - 3) only: ";
                                    cin >> yearGrade;
                                }


                                //==== ADDS SUBJECT OBJECT TO VECTOR ====//
                                newClasses.push_back(Class(classID, className, yearForm, yearGrade));

                                cout << "Class successfully added!" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                break;
                            case 2:
                                cout << "*MODIFYING CLASS RECORDS*" << endl;
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                cout << "Enter Class ID to modify: ";
                                cin >> classID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
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
                                    else{

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                break;
                            case 3:
                                cout << "*REMOVING CLASS RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                cout << "Enter Class ID to remove: ";
                                cin >> classID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
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
                                    else{
//                                        cout << "Subject does not exist!\n";
//                                        cout << "Enter a valid ID: ";
//                                        cin.clear();
//                                        cin >> removeSubjectID;

                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE CLASSES IN THE RECORD ===//
                                printClassesTable();

                                break;
                            case 4:
                                cout << "Exiting...\n";
                                break;
                            default:
                                break;
                        }

                        break;
                    case 3:
                        cout << "==========STUDENTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit\n"
                                "Enter your choice: ";

                        cin >> studentsChoice;

                        switch(studentsChoice){
                            case 1:
                                cout << "*ADDING NEW STUDENTS*\n";
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                cout << "Enter Student ID: ";
                                cin >> studentID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> studentID;
                                }


                                //== CHECKS VECTOR TO SEE IF STUDENT ID EXISTS ALREADY ==//
                                for (x = 0; x < newStudents.size(); x++){
                                    if (studentID == newStudents[x].getStudentNo()){
                                        cout << "Student ID already exists!\n";
                                        cout << "Please enter a unique ID: ";
                                        cin >> studentID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()){
                                            cout << "ERROR: ID can only consist of numbers!\n";
                                            cin.clear();
                                            cin.ignore(256,'\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> studentID;
                                        }
                                        break;
                                    }
                                }

                                cout << "Enter Student Name: ";
                                cin >> studentName;
                                cout << "Enter Student Gender(M/F): ";
                                cin >> studentGender;
                                while (cin.fail()){
                                    cout << "ERROR: Enter a single character\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Enter again: ";
                                    cin >> studentGender;
                                }

                                // CHECKS IF studentGender IS EITHER M or F
                                duplicate = true;
                                while(duplicate){
                                    if (studentGender == 'M' || studentGender == 'F'){
                                        duplicate = false;
                                    }
                                    else{
                                        while (!(studentGender == 'M' || studentGender == 'F')){
                                            cout << "Please enter either M or F: ";
                                            cin.clear();
                                            cin >> studentGender;
                                            if (studentGender == 'M' || studentGender == 'F'){
                                                duplicate = false;
                                            }
                                        }
                                    }
                                }

                                //==== ADDS STUDENTS OBJECT TO VECTOR ====//
                                newStudents.push_back(Student(studentID, studentName, studentGender));

                                cout << "Student successfully added!" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                break;
                            case 2:
                                cout << "*MODIFYING STUDENT RECORDS*\n";
                                cout << "===================\n";

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                cout << "Enter Student ID: ";
                                cin >> studentID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> studentID;
                                }


                                //== CHECKS VECTOR TO SEE IF STUDENT ID EXISTS ALREADY ==//
                                for (x = 0; x < newStudents.size(); x++){
                                    // IF STUDENT ID EXISTS
                                    if (studentID == newStudents[x].getStudentNo()){
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
                                        cin >> studentName;
                                        newStudents[x].setFullName(studentName);
                                        cout << "NEW Gender(M/F): ";
                                        cin >> studentGender;
                                        // IF INPUT FAILS
                                        while (cin.fail()){
                                            cout << "ERROR: Enter a single character\n";
                                            cin.clear();
                                            cin.ignore(256,'\n');
                                            cout << "Enter again: ";
                                            cin >> studentGender;
                                        }
                                        // CHECKS IF studentGender IS EITHER M or F
                                        duplicate = true;
                                        while(duplicate){
                                            if (studentGender == 'M' || studentGender == 'F'){
                                                duplicate = false;
                                            }
                                            else{
                                                while (!(studentGender == 'M' || studentGender == 'F')){
                                                    cout << "Please enter either M or F: ";
                                                    cin.clear();
                                                    cin >> studentGender;
                                                    if (studentGender == 'M' || studentGender == 'F'){
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
                            case 3:
                                cout << "*REMOVING STUDENT RECORDS*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE STUDENTS IN THE RECORD ===//
                                printStudentsTable();

                                cout << "Enter Student ID to remove: ";
                                cin >> studentID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "ERROR: ID can only consist of numbers!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
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
                            case 4:
                                cout << "Exiting...\n";
                                break;
                            default:
                                break;
                        }
                        break;

                    case 4:
                        cout << "Exiting...\n";
                        break;

                    default:
                        cout << "Invalid choice!\n";
                        break;

                }
                break;
            case 2:
                cout << "\nTeacher Login\n"
                        "1. Search student by name\n"
                        "2. Search student by ID\n"
                        "3. Show all results(Student name + Subject Score)\n"
                        "4. Exit\n"
                        "Enter your choice: ";


                cin >> teachersChoice;

                switch(teachersChoice){
                    case 1:
                        cout << "\n===========STUDENT NAME==========\n"
                                "Enter student name: ";

//                        cout << "1. Register student " << studentName  << " to class"
                        break;
                    case 2:
                        cout << "\n===========STUDENT ID==========\n"
                                "Enter student ID: ";


                        break;
                    case 3:
                        break;
                    case 4:
                        break;

                    default:
                        break;
                }

                break;
            case 3:
                cout << "Exiting program" << endl;
                menu = false;
                break;
            default:
                cout << "Not a valid choice!\n\n";
                break;
        }
    }

    return 0;
}
