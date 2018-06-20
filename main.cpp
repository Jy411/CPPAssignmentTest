#include <iostream>
#include <vector>

#include "Subject.h"

using namespace std;

int main() {
    int loginChoice, adminChoice, subjectsChoice, classesChoice ,studentsChoice, teachersChoice;
    int a = 0, x;
    int subjectID, modifySubject, newSubjectID;
    string subjectName, newSubjectName;
    char subjectType, newSubjectType;
    vector <Subject> newSubjects;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

    void addSubject();

    bool menu = true;

    while (menu)
    {
        cout << "\n====================MAIN MENU====================\n"
                "1. School Admin Login\n"
                "2. School Teacher Login\n"
                "3. Exit\n"
                "Enter your choice: ";

        cin >> loginChoice;
        switch (loginChoice) {
            case 1:

                cout << "\n=========Admin Login==========\n"
                        "1. SUBJECTS\n"
                        "2. CLASSES\n"
                        "3. STUDENTS\n"
                        "Enter your choice: ";


                cin >> adminChoice;

                switch(adminChoice){
                    case 1:
                        cout << "==========SUBJECTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit\n"
                                "Enter your choice: ";


                        cin >> subjectsChoice;

                        switch(subjectsChoice){
                            case 1:
                                cout << "*ADDING NEW SUBJECT*" << endl;
                                cout << "===================\n";

                                cout << "Enter Subject ID: ";
                                cin >> subjectID;
                                cout << "Enter Subject Name: ";
                                cin >> subjectName;
                                cout << "Enter Subject Type(Core/Selective): ";
                                cin >> subjectType;

                                newSubjects.push_back(Subject(subjectID, subjectName, subjectType));

                                cout << "Subject ID: " << newSubjects[a].getSubjectID() << endl;
                                cout << "Subject Name: " << newSubjects[a].getSubjectName() << endl;
                                cout << "Subject Type: " << newSubjects[a].getSubjectType() << endl;
                                cout << "Subject succesfully added!" << endl;


                                a++;
                                break;
                            case 2:
                                cout << "*MODIFYING SUBJECT*" << endl;
                                cout << "===================\n";
                                for (x = 0; x < newSubjects.size(); x++){
                                    cout << "Subject ID: " << newSubjects[x].getSubjectID() << " | Subject Name: " << newSubjects[x].getSubjectName() << endl;
                                }

                                cout << "Enter Subject ID to modify: ";
                                cin >> modifySubject;

                                for (x = 0; x < newSubjects.size(); x++){
                                    // goes through array of subjects and finds matching subject ID
                                    if (modifySubject == newSubjects[x].getSubjectID()){
                                        cout << "NEW Subject ID: ";
                                        cin >> newSubjectID;
                                        newSubjects[x].setSubjectID(newSubjectID);
                                        cout << "NEW Subject Name ";
                                        cin >> newSubjectName;
                                        newSubjects[x].setSubjectName(newSubjectName);
                                        cout << "New Subject Type(Core/Selective): ";
                                        cin >> newSubjectType;
                                        newSubjects[x].setSubjectType(newSubjectType);
                                        cout << "Subject modified successfully!\n";
                                        cout << "Subject ID: " << newSubjects[x].getSubjectID() << " | Subject Name: " << newSubjects[x].getSubjectName() << endl;

                                    }
                                }

                                break;
                            case 3:
                                cout << "*REMOVING SUBJECT*" << endl;
                                cout << "===================\n";

                                break;
                            case 4:
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
                                "4. Exit\n"
                                "Enter your choice: ";


                        cin >> classesChoice;

                        switch(classesChoice){
                            case 1:
                                break;
                            case 2:
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
                        cout << "==========STUDENTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit\n"
                                "Enter your choice: ";

                        cin >> studentsChoice;

                        switch(studentsChoice){
                            case 1:
                                break;
                            case 2:
                                break;
                            case 3:
                                break;
                            case 4:
                                break;
                            default:
                                break;
                        }
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

void addSubject(){

    cout << "FUk";
}