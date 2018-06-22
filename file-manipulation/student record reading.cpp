#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    string line;
    int stdNo, classID;
    //--student details--//
    string stdFName, stdLName, stdClassID, stdRemainingStr;
    //--student scores--//
    double bm, eng, math, hist, moral, bio, chem, phy, eco, comm, art;
    char stdGender;
    ifstream file ("student_records.txt");

    cin.ignore();
    if (file.is_open()){
        while (getline(file, line)){
            stringstream ss(line);
            ss >> stdNo >> stdFName >> stdLName >> stdGender >> classID >> stdRemainingStr;
            ss.str(""); //-- clear the stream --//
            ss << classID;
            ss >> stdClassID; //-- convert int to string --//

            switch (stdClassID.at(1)){ //-- check the second digit of classID --//
                case '1': //-- if Lower Secondary class --//
                    ss.str("");
                    ss.str(stdRemainingStr); //-- scores that needs to be tokenized --//
                    ss >> bm >> eng >> math >> hist >> moral;   
                    break;

                case '2': //-- if Upper Secondary Science class --//
                    ss.str("");
                    ss.str(stdRemainingStr); //-- scores that needs to be tokenized --//
                    ss >> bm >> eng >> math >> hist >> moral >> bio >> chem >> phy;   
                    break;

                case '3': //-- if Upper Secondary Art class --//
                    ss.str("");
                    ss.str(stdRemainingStr); //-- scores that needs to be tokenized --//
                    ss >> bm >> eng >> math >> hist >> moral >> eco >> comm >> art;   
                    break;

                default:
            
            //--Do whatever you want with student details here--//
        }
    }
    else
        cout << "Unable to open file..." << endl;
    return 0;
}