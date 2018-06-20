#include <iostream>
#include <vector>

#include "Subject.h"

using namespace std;

int main() {
    int loginChoice, adminChoice, subjectsChoice, classesChoice ,studentsChoice, teachersChoice;
    int a = 0, x;
    int subjectID, modifySubject, newSubjectID, removeSubjectID;
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
                    case 1:
                        cout << "==========SUBJECTS==========\n";
                        cout << "1. Add\n"
                                "2. Modify\n"
                                "3. Remove\n"
                                "4. Exit\n"
                                "Enter your choice: ";


                        cin >> subjectsChoice;
                        cout << endl;

                        switch(subjectsChoice){
                            case 1:
                                cout << "*ADDING NEW SUBJECT*" << endl;
                                cout << "===================\n";

                                cout << "Enter Subject ID: ";
                                cin >> subjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "Enter a valid ID!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> subjectID;
                                }
                                //== CHECKS VECTOR TO SEE IF SUBJECT ID EXISTS ==//
                                for (x = 0; x < newSubjects.size(); x++){
                                    if (subjectID == newSubjects[x].getSubjectID()){
                                        cout << "Subject ID already exists!\n";
                                        cout << "Please enter ID again: ";
                                        cin >> subjectID;
                                        break;
                                    }
                                    else{
                                        break;
                                    }
                                }

                                cout << "Enter Subject Name: ";
                                cin >> subjectName;
                                cout << "Enter Subject Type(Core/Selective): ";
                                cin >> subjectType;

                                //==== ADDS SUBJECT OBJECT TO VECTOR ====//
                                newSubjects.push_back(Subject(subjectID, subjectName, subjectType));

                                cout << "Subject successfully added!" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                cout << "============================================================\n";
                                for (x = 0; x < newSubjects.size(); x++){
                                    cout << "Subject ID: " << newSubjects[x].getSubjectID() << " | Subject Name: " << newSubjects[x].getSubjectName()
                                         << " | Subject Type: " << newSubjects[x].getSubjectType() << endl;
                                }
                                cout << "============================================================\n\n";


                                a++;
                                break;
                            case 2:
                                cout << "*MODIFYING SUBJECT*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                cout << "============================================================\n";
                                for (x = 0; x < newSubjects.size(); x++){
                                    cout << "Subject ID: " << newSubjects[x].getSubjectID() << " | Subject Name: " << newSubjects[x].getSubjectName()
                                         << " | Subject Type: " << newSubjects[x].getSubjectType() << endl;
                                }
                                cout << "============================================================\n\n";

                                cout << "Enter Subject ID to modify: ";
                                cin >> modifySubject;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "Enter a valid ID!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> modifySubject;
                                }


                                for (x = 0; x < newSubjects.size(); x++){
                                    // goes through vector of subjects and finds matching subject ID and its index
                                    // then updates the variables of the matching subject
                                    if (modifySubject == newSubjects[x].getSubjectID()){
                                        cout << "NEW Subject ID: ";
                                        cin >> newSubjectID;
                                        //==== WHILE INPUT IS NOT AN INTEGER ====//
                                        while (cin.fail()){
                                            cout << "Enter a valid ID!\n";
                                            cin.clear();
                                            cin.ignore(256,'\n');
                                            cout << "Please enter a valid ID: ";
                                            cin >> newSubjectID;
                                        }
                                        newSubjects[x].setSubjectID(newSubjectID);
                                        cout << "NEW Subject Name ";
                                        cin >> newSubjectName;
                                        newSubjects[x].setSubjectName(newSubjectName);
                                        cout << "New Subject Type(Core/Selective): ";
                                        cin >> newSubjectType;
                                        newSubjects[x].setSubjectType(newSubjectType);
                                        cout << "Subject modified successfully!\n";
                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                cout << "============================================================\n";
                                for (x = 0; x < newSubjects.size(); x++){
                                    cout << "Subject ID: " << newSubjects[x].getSubjectID() << " | Subject Name: " << newSubjects[x].getSubjectName()
                                         << " | Subject Type: " << newSubjects[x].getSubjectType() << endl;
                                }
                                cout << "============================================================\n\n";


                                break;
                            case 3:
                                cout << "*REMOVING SUBJECT*" << endl;

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                cout << "============================================================\n";
                                for (x = 0; x < newSubjects.size(); x++){
                                    cout << "Subject ID: " << newSubjects[x].getSubjectID() << " | Subject Name: " << newSubjects[x].getSubjectName()
                                         << " | Subject Type: " << newSubjects[x].getSubjectType() << endl;
                                }
                                cout << "============================================================\n\n";

                                cout << "Enter subject ID to remove: ";
                                cin >> removeSubjectID;
                                //==== WHILE INPUT IS NOT AN INTEGER ====//
                                while (cin.fail()){
                                    cout << "Enter a valid ID!\n";
                                    cin.clear();
                                    cin.ignore(256,'\n');
                                    cout << "Please enter a valid ID: ";
                                    cin >> removeSubjectID;
                                }

                                for (x = 0; x < newSubjects.size(); x++) {
                                    // goes through vector of subjects and finds matching subject ID and its index
                                    // then removes the element from the vector
                                    if (removeSubjectID == newSubjects[x].getSubjectID()) {
                                        newSubjects.erase(newSubjects.begin() + x);
                                        cout << "Subject successfully removed!\n";
                                    }
                                }

                                //==== PRINTS A TABLE SHOWING ALL THE SUBJECTS IN THE RECORD ===//
                                cout << "============================================================\n";
                                for (x = 0; x < newSubjects.size(); x++){
                                    cout << "Subject ID: " << newSubjects[x].getSubjectID() << " | Subject Name: " << newSubjects[x].getSubjectName()
                                         << " | Subject Type: " << newSubjects[x].getSubjectType() << endl;
                                }
                                cout << "============================================================\n\n";

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
                                break;
                            case 2:
                                break;
                            case 3:
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

void addSubject(){

    cout << "FUk";
}