/**************************************************************************
* 
*   This h file is of Student Record. It contains a struct signature for
*   Student Record and methods that help in providing access and 
*   functionanity for the data base
*
****************************************************************************/

#include <stdexcept>
#include <fstream>
using namespace std;


#ifndef _CLEAR
#define _CLEAR

	namespace RSKJAM001{
			
			struct StudentRecord {string Name;string Surname;string StudentNumber;string ClassRecord;};   //structure for students
			
			void setStudentRecord(string Name ,string Surname ,string StudentNumber ,string ClassRecord);	//creats and adds Student to vector
			void reloadVector(void);
			void databaseQuery(string StudentNumber);		
			void calGrade(string StudentNumber);
			void clear(void);				
			bool duplicate(string StudentNumber);
			void writeFile(void);
			void saveDatabase(void);
			string readFile(void);								//   returns string
	}
#endif
