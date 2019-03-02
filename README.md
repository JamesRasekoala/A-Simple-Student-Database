# A-Simple-Student-Database
The objective of this project is to build a simple database of student records, which can be queried for student information. The database will consist of fixed size records which contain student details. You will first need to set up the source code framework/structure and build a simple menu-based interface. After you’ve successfully done this you can fill in the details by implementing all database functionality. The database will not be sorted or indexed since this requires more complex algorithms and data structures. 


to run :	I. 	Compile makefile in /studentRecord_library 
		    II. Compile makefile in main folder   
		    III. run by calling 'make run'

I. File list
-------------

dataBaseDriver.cpp			Student database Driver class
this readme.txt				
makefile				Makefile to build dataBaseDriver
studentRecord_library			
   |	
   |	( With in directory )
   |	
   |---	  studentRecord.cpp		Student Record method definition
   '----  studentRecord.h		Student header file



---------------------------------------------------------------------------------

II. Design
------------

A. Program design
	The program is designed such that a textfile is used as a database for saving data to allow retainment of data even after the machine is switched off. A vector is useded to store recentlly added data but this data has to be specifically added to the database for it to be added.

B. Implementation
	dataBaseDriver.cpp : has main method and an infinity loop for the user interface.
	studentRecord.cpp : has method definitions
	studentRecord.h : Has method signatures

C. Method desription
		setStudentRecord(): This method takes student data , checks for duplicates , 
							replaces the duplicates in vector if present. It adds a student into vector.

		clear(): This method clears the terminal line.

		writeFile(): This method writes the database file using informations from the 				vector
		calGrade(): This method searches for a student number and calculates an avarage 			from the student grades
		
		readFile():	This method reads and displays data written in the file.

		reloadVector(): This method takes data from the file and inserts it into the 					vector.
	

D. File error handling
	  i.  When opening files I have an if statement to check.
	  ii. I have an else statement that catches invaled user input in the Main menu



