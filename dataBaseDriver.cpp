/*****************************************************************
*
*
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
    struct student;
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();
    fstream file;
	  string Name="N/A";
	  string Surname="N/A";
	  string StudentNumber="N/A";
	  string ClassRecord="N/A";
    string userInput="";
    cout << "0: Add student" << endl;
    cout << "1: Read database" << endl;
    cout << "2: save database" << endl;
    cout << "3: display given student data" << endl;
    cout << "4: grade student" << endl;
    cout << "q: Quit" << endl;
    cout << " Enter a number (or q to quit) and press return..." << endl;
    cin >> userInput;
    clear();


    for (; ; ) {
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
			      cin >>ClassRecord;
			      setStudentRecord(Name,Surname ,StudentNumber ,ClassRecord);
            writeFile();

			/*
			clear();
			//break;
			  cout << "0: Add student" << endl;
			  cout << "1: Read database" << endl;
              cout << "2: save database" << endl;
              cout << "3: display given student data" << endl;
              cout << "4: grade student" << endl;
              cout << "q: Quit" << endl;
              cout << " Enter a number (or q to quit) and press return..." << endl;
*/
         }else if (userInput=="1"){
            cout <<"function QueryDatabase() called"<<endl;
           // file.open("inputfle.txt");
            readFile();

         }else if (userInput=="2"){
            cout <<"function saveDatabase() called"<<endl;

          //  cout <<"#                                            #"<<endl;
          //  cout <<"##############################################"<<endl;
           // cout << "Enter the Student Number you want to search: " ;
           // cin >>StudentNumber;
           bool info = duplicate(StudentNumber);
            
          // RSKJAM001:: bool info << duplicate();
            if( info==true){
               cout <<"StudentNumber is a duplicate"<<endl;

            }else{
              writeFile();
              cout <<"Student saved"<<endl;


            }
            //readFile();

         }else if (userInput=="3"){
            cout <<"function DisplayStudent() called"<<endl;

         }else if (userInput=="4"){
            cout <<"function WriteGradeToDatabase() called"<<endl;

         }else{
              cout << "0: Add student" << endl;
			        cout << "1: Read database" << endl;
              cout << "2: save database" << endl;
              cout << "3: display given student data" << endl;
              cout << "4: grade student" << endl;
              cout << "q: Quit" << endl;
              cout << " Enter a number (or q to quit) and press return..." << endl;
          }
         cin >> userInput;
         clear();
                }
		return 0;
}
