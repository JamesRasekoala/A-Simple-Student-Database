/*****************************************************************
*
*
*
******************************************************************/

#include <stdexcept>
#include <fstream>
using namespace std;


#ifndef _CLEAR
#define _CLEAR
namespace RSKJAM001{
struct StudentRecord {string Name;string Surname;string StudentNumber;string ClassRecord;};
void setStudentRecord(string Name ,string Surname ,string StudentNumber ,string ClassRecord);
void setname(string Name);
string toStrng();
void clear(void);
bool duplicate(string StudentNumber);
void writeFile();
void saveDatabase();
string readFile();
}
#endif
