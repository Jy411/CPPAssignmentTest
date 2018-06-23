#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    string line;
    int stdNo, classID, stdClassID, readError=0;
    //--student details--//
    string stdFName, stdLName, stdRemainingStr;
    //--student scores--//
    double bm, eng, math, hist, moral, bio, chem, phy, eco, comm, art;
    char stdGender;
    ifstream file ("student_record.txt");

    cin.ignore();
    if (file.is_open()){
        while (getline(file, line)){
            stringstream ss(line);
            ss >> stdNo >> stdFName >> stdLName >> stdGender >> classID >> stdRemainingStr;
            ss.str(""); //-- clear the stream --//

            stdClassID = (classID / 1000) % 10; //-- getting the 3rd digit of classID --//

            switch (stdClassID){ //-- check the 3rd digit of classID --//
                case 1: //-- if Lower Secondary class --//
                    ss.str(""); //-- clear the stream --//
                    ss.str(stdRemainingStr); //-- scores that needs to be tokenized --//
                    ss >> bm >> eng >> math >> hist >> moral;   
                    break;

                case 2: //-- if Upper Secondary Science class --//
                    ss.str(""); //-- clear the stream --//
                    ss.str(stdRemainingStr); //-- scores that needs to be tokenized --//
                    ss >> bm >> eng >> math >> hist >> moral >> bio >> chem >> phy;   
                    break;

                case 3: //-- if Upper Secondary Art class --//
                    ss.str(""); //-- clear the stream --//
                    ss.str(stdRemainingStr); //-- scores that needs to be tokenized --//
                    ss >> bm >> eng >> math >> hist >> moral >> eco >> comm >> art;   
                    break;
                default:
                    readError = 1;
            
            //--Do whatever you want with student details here--//
            }
        }
    }
    else {
        cout << "Unable to open file..." << endl;
    }
    if (readError == 1)
        cout << "Error reading class ID..." << endl;

    return 0;
}