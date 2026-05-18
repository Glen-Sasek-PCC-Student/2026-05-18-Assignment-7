// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

const double ASSIGNMENT_WEIGHT = 0.60;
const double EXAM_WEIGHT = 0.20;

// Function prototypes (if any)
void helloMessage();
void goodbyeMessage();

int readInt(string prompt); 
double readScore(string prompt); 

double assignAverage(int numAssigns); 

// The assignments are weighted at 60%, 
// the midterm and final exams are weighted at 20% each.
double calcDecimalGrade(double assignAvg, double midtermExam, double finalExam);

char calcLetterGrade(double decimalGrade); 

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
  cout << "Hello, World!" << endl;
  return 0;
}

// Function implementations (if any)
// The assignments are weighted at 60%, 
// the midterm and final exams are weighted at 20% each.
double calcDecimalGrade(double assignAvg, double midtermExam, double finalExam) {
  double decimalGrade = 0.0;
  decimalGrade += assignAvg * ASSIGNMENT_WEIGHT;
  decimalGrade += midtermExam * EXAM_WEIGHT;
  decimalGrade += finalExam * EXAM_WEIGHT;
}



// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
A
>=3.3 <= 4.0
Exceeds
B
>=2.8 < 3.3
Meets
C
>=2.0 < 2.8
Approaching
D
>=1.2 < 2.0
Not Yet
F
0.0 < 1.2
No Evidence

Use constants for all weights - 0.6, 0.2 etc for 60% and 20%


D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

MESSAGE Welcome to my Final Grade Calculator!

PROMPT "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!"
       "The number of assignments must be between 0 and 10."
       "All scores entered must be between 0 and 4. "
       "Enter the number of assignments (0 to 10): "

GET SCORES
  Enter score 1: 3.4 
  Enter score 2: 4 
  Enter score 3: 2.5 
  Enter score 4: 3.3
  Enter score 5: 3.1
  Enter score 6: 2.5
  Enter your midterm exam score: 3.5
  Enter your final exam score: 4

CALCULATE DECIMAL SCORE
CALCULATE CHARACTER GRADE
Your Final Numeric score is 3.4
Your Final Grade is A

MESSAGE "Thank you for using my Grade Calculator!""


SAMPLE RUNS

Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 6
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 3.3
Enter score 5: 3.1
Enter score 6: 2.5
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.4
Your Final Grade is A
Thank you for using my Grade Calculator!



Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 3
Enter score 1: 3 
Enter score 2: 4 
Enter score 3: 2.5 
Enter your midterm exam score: 2.5
Enter your final exam score: 2
Your Final Numeric score is 2.8
Your Final Grade is B
Thank you for using my Grade Calculator!



Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 12
Illegal Value! Please try again!!
Enter the number of assignments (0 to 10): 5
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 5.5
Illegal Score! Please try again!
Enter score 4: 3.5
Enter score 5: 3.1
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.5
Your Final Grade is A
Thank you for using my Grade Calculator!


*/
