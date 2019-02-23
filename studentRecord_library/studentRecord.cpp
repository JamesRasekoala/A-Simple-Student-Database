/*****************************************************************
*	
* 	File defines student Record methods found in the studentRecord.h
*   file. It provides a Vector called database used to store a 
* 	temporary memory. This files uses two name
* 	
******************************************************************/

#include "studentRecord.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h> 
#include <boost/algorithm/string.hpp>
using namespace std;
using namespace RSKJAM001;

RSKJAM001::StudentRecord studentdatabase;
vector<RSKJAM001::StudentRecord> database;
vector<string> line;

	void RSKJAM001::setStudentRecord(string nameInput ,string surnameInput ,string studentNumberInput ,string classRecordInput){
			studentdatabase = {nameInput, surnameInput,studentNumberInput,classRecordInput};           // Turning input data into a Sturct<StudentRecord> type
			database.push_back(studentdatabase);   														// Inserting data into Vector 

			}


	void RSKJAM001::reloadVector(){			
	//Method to copy file content to vector
			
			string filename = "inputfile2.txt";
			ifstream in(filename);
			if(!in) {
					cout << "Couldn't open " << filename << endl;				      //Response for not finiding file.
			}else{
					char fileLine[200];
					while(in) {
							in.getline(fileLine, 200); 
							if(in) {											       //
								std::string input = fileLine;
								std::istringstream ss(input);
								std::string token;
								string tempholder ="";
									while(std::getline(ss, token, ' ')) {		        //
											line.push_back(token);   
																		}
										for (int i=3;i<=line.size();i++ ){
											tempholder=tempholder+" "+line[i];
											}								
													 //cout << " tempholder __" << tempholder<<endl;	
							setStudentRecord(line[0],line[1] ,line[2],tempholder);			// turns file data to struct in vector
							line.clear();
									}
								} 
				}			
									}
	


	void RSKJAM001::clear(void)
    {
     system("clear"); 				//Method clears terminal. 
     }



	void RSKJAM001::writeFile(){
	// 	
		
		ofstream myfile;
		myfile.open("inputfile2.txt");
			if (!myfile.is_open())
			{
				cout << "Error opening database file..."<<endl;
			} else {
				cout << "** ** ** Database Opened.  **  **  **" << endl;
                }

		for(int i=0; i < database.size(); i++){							// loop adds each student
			myfile << database[i].Name+" ";
			myfile << database[i].Surname+" ";
			myfile << database[i].StudentNumber+" ";
			myfile << database[i].ClassRecord+"\n";
												}
		myfile.close();
								}


    void RSKJAM001::saveDatabase(){
	// Opens file and saves current state of Vector into file.
		
		ofstream myfile;
		myfile.open("inputfile2.txt");
			// statement to give feedback when there is no file.
			if (!myfile.is_open())
			{
				cout << "Error opening database file..."<<endl;
			} else {
				cout << "Database File opened." << endl;
					}

		for(int i=0; i < database.size(); i++){							// loop adds each student
			myfile << database[i].Name+" ";
			myfile << database[i].Surname+" ";
			myfile << database[i].StudentNumber+" ";
			myfile << database[i].ClassRecord+"\n";
												}	
		myfile.close();
		}
    
    
		void RSKJAM001::databaseQuery(string StudentNumberInput){
		//	Method looks through database for input Student Number
		
			for(int i=0; i < database.size(); i++){    								//Linear search through Vector
				if( StudentNumberInput.compare(database[i].StudentNumber)  == 0 ){		// if ckeck Student Numbers are similar
					
					// Print out student datails when found
					cout << " Name : "<< database[i].Name<<endl;
					cout<<" Surname : " <<database[i].Surname<<endl;
					cout<<" Student Number : "<<database[i].StudentNumber<<endl;
					cout<<" ClassRecord : " << database[i].ClassRecord<<endl;
				}else{
				}
			}
		  }



		bool RSKJAM001::duplicate(string StudentNumberInput){
		//Method itterates through Vector and check if a duplicate of STUDENT Number is present
		
			bool flag = false;     															// variable to hold state of duplicate detaction
			int numberOfCopies=0;
			string StudentNumberHolder;
				for(int i=0; i < database.size(); i++){    
					if( StudentNumberInput.compare(database[i].StudentNumber)  == 0 ){		// checks if student numbers are similar
						numberOfCopies=numberOfCopies+1;     	
					}else{
						//pass without doing nothing
					}
				}

			if(numberOfCopies>=2){
				flag = true;									// change flag based on number of copies found
			}

		return flag;     }
		

		string RSKJAM001::readFile(){
		//method goes through files and prints it line by line.
		
			int i=0;									//Number keeps track of items printed on line
			string databaseInfo;
			string databaseSaver= "";
			ifstream myfile;
			myfile.open("inputfile2.txt");
				while (myfile){							// keep going as there are files line by line.
					i++;
					if(i%7==0){  
						cout << endl;  					// print on new line for every four printed items.
					}else{
						myfile >> databaseInfo;
						cout << " "<<databaseInfo ; 
						}
				}
		myfile.close();
		return databaseSaver;
		}
		
		void RSKJAM001::calGrade(string StudentNumberInput){
			vector<string> seperated;
			vector<int> num;
			int sum=0;
			string a="";
			for(int i=0; i < database.size(); i++){    								//Linear search through Vector
				if( StudentNumberInput.compare(database[i].StudentNumber)  == 0 ){		// if ckeck Student Numbers are similar
					string rec = database[i].ClassRecord;
					string input(rec); 
					vector<string> result; 
					boost::split(result, input, boost::is_any_of(" ")); 
					for (int i = 0; i < result.size(); i++) {
						seperated.push_back(rec);
						cout << "result size : "<<result.size() << endl; 
						}
			
					for(int i=0; i < seperated.size(); i++){
							//int c = (int) seperated[i];
							int c = stoi(seperated[i]);
							num.push_back(c); 
						}
						
					for(int i=0; i < num.size(); i++){
						sum = sum+num[i];
						cout <<" sum "<<  sum/4 << "   Sum  ";
						
						
						}
						
						cout <<" ** "<<  sum/4 << "   Sum is being printed ";
						
													 
													
				}else{
				}
			
			
		}
			
			}
