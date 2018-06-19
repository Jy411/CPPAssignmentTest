#include <iostream>

#include "Subject.h"

using namespace std;

int main() {
    int loginChoice;
    bool menu = true;

    while (menu)
    {
        cout << "1. School Admin Login\n"
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

                int adminChoice;

                cin >> adminChoice;

                switch(adminChoice){
                    case 1:
                        cout << "==========SUBJECTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit\n"
                                "Enter your choice: ";

                        int subjectsChoice;
                        int i = 0;

                        cin >> subjectsChoice;

                        switch(subjectsChoice){
                            case 1:
                                Subject newSubjects[100];

                                int subjectID;
                                string subjectName;
                                char subjectType;

                                cout << "Enter Subject ID: ";
                                cin >> subjectID;
                                cout << "Enter Subject Name: ";
                                cin >> subjectName;
                                cout << "Enter Subject Type(Core/Selective): ";
                                cin >> subjectType;

                                newSubjects[i].setSubjectID(subjectID);
                                newSubjects[i].setSubjectName(subjectName);
                                newSubjects[i].setSubjectType(subjectType);



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
                    case 2:
                        cout << "==========CLASSES==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit\n"
                                "Enter your choice: ";

                        int classesChoice;

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

                        int studentsChoice;

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

                int teachersChoice;

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