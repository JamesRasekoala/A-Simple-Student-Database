/*****************************************************************
* 
* 	The dataBaseDriver contains the main methods which uses StudentRecod.cpp
* 	and studentRecod.h
*
******************************************************************/

#include <iostream>
#include <string>
#include "studentRecord.h"
#include <fstream>

using namespace std;
using namespace RSKJAM001;


int main()
{
	
	reloadVector();                 //repopulating empty Vector.
    struct student;
    fstream file;
    
    // setting default strings to not applicable
    
	string Name="N/A";		
	string Surname="N/A";
	string StudentNumber="N/A";
	string ClassRecord="N/A";
    string userInput="";
    string Q="";
    string searchStudent;
    
    
    cout << "0: Add student" << endl;
    cout << "1: Read database" << endl;
    cout << "2: save database" << endl;
    cout << "3: display given student data" << endl;
    cout << "4: grade student" << endl;
    cout << "q: Quit" << endl;
    cout << " Enter a number (or q to quit) and press return..." << endl;
    cin >> userInput;
    clear();


	
    for (; ; ) {							// Infinity loop for user interface.
         
         if(userInput=="q" ||userInput=="Q"){
            cout <<"Quiting"<<endl;			
            break;
         }else if (userInput=="0"){
            cout <<"Please Enter new Student data below."<<endl;
            cout << "Student name : ";
            cin >>Name;
			cout << "Surname : " ;
			cin >>Surname;
			cout << "Student Number : " ;
			cin >>StudentNumber;
			cout << "Class Record : " ;
			cin.ignore();
			getline (cin,ClassRecord);
			setStudentRecord(Name,Surname ,StudentNumber ,ClassRecord);     // setting student data after input.
		}else if (userInput=="1"){
            cout <<"function QueryDatabase() called"<<endl;
            readFile();														// reading database and displaying it all
         }else if (userInput=="2"){
            cout <<"function saveDatabase() called"<<endl;
			bool info = duplicate(StudentNumber);
				if( info==true){
					cout <<"StudentNumber is a duplicate"<<endl;			// checking for duplicate
				}else{
					writeFile();											// updating data if there is a duplicate
					cout <<"Student saved"<<endl;
				}
         }else if (userInput=="3"){
				cout <<"function DisplayStudent() called"<<endl;
				cout <<"Enter Student Number : ";
				cin >> searchStudent;
				databaseQuery(searchStudent);								// calling method to search and print student details
         }else if (userInput=="4"){
				cout <<"function WriteGradeToDatabase() called"<<endl;
				cout <<"Enter Student Number : ";
				cin >> searchStudent;
				calGrade("RSKJAM003");
																			//calculating avarage
         }else{
              cout << "0: Add student" << endl;
			  cout << "1: Read database" << endl;
              cout << "2: save database" << endl;
              cout << "3: display given student data" << endl;
              cout << "4: grade student" << endl;
              cout << "q: Quit" << endl;
              cout << " Enter a number (or q to quit) and press return..." << endl;
			}
		  clear();
          cout << "0: Add student" << endl;
		  cout << "1: Read database" << endl;
          cout << "2: save database" << endl;
          cout << "3: display given student data" << endl;
          cout << "4: grade student" << endl;
          cout << "q: Quit" << endl;
          cout << " Enter a number (or q to quit) and press return..." << endl;
          cin >> userInput;
          }
		return 0;
}
