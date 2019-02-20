/*****************************************************************
*
*
*
******************************************************************/

#include "studentRecord.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
using namespace RSKJAM001;

//RSKJAM001::StudentRecord studentdatabase;
vector<RSKJAM001::StudentRecord> database;
void RSKJAM001::setStudentRecord(string nameInput ,string surnameInput ,string studentNumberInput ,string classRecordInput){
    RSKJAM001::StudentRecord studentdatabase = {nameInput, surnameInput,studentNumberInput,classRecordInput};
    database.push_back(studentdatabase);
// add  check for database duplicate


}

void RSKJAM001::clear(void)
    {
     system("clear");
     }


void writeFile(){
    ofstream myfile;
    myfile.open("inputfile.txt");
        if (!myfile.is_open())
        {
            cout << "Error opening database file..."<<endl;

        } else {
            cout << "Database File opened." << endl;
                }
    myfile << "#################################.\n";
    myfile.close();
    }

string readFile(){
    return"";
    }
