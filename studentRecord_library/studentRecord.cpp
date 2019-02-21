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

RSKJAM001::StudentRecord studentdatabase;
vector<RSKJAM001::StudentRecord> database;
void RSKJAM001::setStudentRecord(string nameInput ,string surnameInput ,string studentNumberInput ,string classRecordInput){
   /* RSKJAM001::StudentRecord */studentdatabase = {nameInput, surnameInput,studentNumberInput,classRecordInput};
    database.push_back(studentdatabase);
// add  check for database duplicate


}

void RSKJAM001::clear(void)
    {
     system("clear");
     }

string RSKJAM001::toStrng(){
   // return{Name.studentdatabase};
    return("Hellow world");
    }


void RSKJAM001::writeFile(){
    ofstream myfile;
    myfile.open("inputfile2.txt");
        if (!myfile.is_open())
        {
            cout << "Error opening database file..."<<endl;

        } else {
            cout << "Database File opened." << endl;
                }

    for(int i=0; i < database.size(); i++){
  // database[i].doSomething();

    myfile << database[i].Name+" ";
    myfile << database[i].Surname+" ";
    myfile << database[i].StudentNumber+" ";
    myfile << database[i].ClassRecord+"\n";

}
    myfile.close();
    }

    void RSKJAM001::saveDatabase(){
    ofstream myfile;
    myfile.open("inputfile2.txt");
        if (!myfile.is_open())
        {
            cout << "Error opening database file..."<<endl;

        } else {
            cout << "Database File opened." << endl;
                }

    for(int i=0; i < database.size(); i++){
  // database[i].doSomething();

    myfile << database[i].Name+" ";
    myfile << database[i].Surname+" ";
    myfile << database[i].StudentNumber+" ";
    myfile << database[i].ClassRecord+"\n";

}
    myfile.close();
    }



bool RSKJAM001::duplicate(string StudentNumberInput){
    bool flag = false;
    string StudentNumberHolder;
       for(int i=0; i < database.size(); i++){    
        
            if( StudentNumberInput.compare(database[i].StudentNumber)  == 0 ){
                flag = true;
            }else{
                //pass
            }
}

return flag;
}

string RSKJAM001::readFile(){
    //char databaseInfo[100];
    //char databaseSaver[100];
    string databaseInfo;
    string databaseSaver= "";
    ifstream myfile;
    myfile.open("inputfile2.txt");
    while (myfile)
{
    int i=0;
    i++;
  //  cout << "" << endl;
    myfile >> databaseInfo;
    cout << databaseInfo ;
    if(i%4==0){
        cout << "" << endl;
    }
    //databaseSaver == databaseSaver + databaseInfo+" ";
    //cout << databaseInfo << endl;
 }
    myfile.close();
    return databaseSaver;
    }
