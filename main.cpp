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
#include <limits>
#include <iomanip>

using namespace std;

const double ASSIGNMENT_WEIGHT = 0.60;
const double EXAM_WEIGHT = 0.20;

const int MIN_ASSIGNMENT_COUNT = 0;
const int MAX_ASSIGNMENT_COUNT = 10;

const double MIN_SCORE = 0.0;
const double MAX_SCORE = 4.0;

const string PROMPT_NUM_ASSIGNMENTS = "Enter the number of assignments (0 to 10): ";

// Function prototypes (if any)
void helloMessage();
void usageMessage();
void goodbyeMessage();

int readInt(string prompt); 
double readDouble(string prompt); 

double assignAverage(int numAssigns); 

// The assignments are weighted at 60%, 
// the midterm and final exams are weighted at 20% each.
double calcDecimalGrade(double assignAvg, double midtermExam, double finalExam);

char calcLetterGrade(double decimalGrade); 

double getScoreInRange(string prompt);

void displayGrade(double decimalGrade, char letterGrade);

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
  helloMessage();
  usageMessage();

  double assignAvg = 0.0;
  double midtermExam = 0.0;
  double finalExam = 0.0;

  int numberOfAssignments = 0;
  bool next = true;
  while(next) {
    numberOfAssignments = readInt(PROMPT_NUM_ASSIGNMENTS);
    if(MIN_ASSIGNMENT_COUNT <= numberOfAssignments 
       and 
       numberOfAssignments <= MAX_ASSIGNMENT_COUNT) {
      next = false;
    } 
  }
   
  assignAvg = assignAverage(numberOfAssignments);
  midtermExam = getScoreInRange("Enter your midterm exam score: ");
  finalExam = getScoreInRange("Enter your final exam score: ");

  double decimalGrade = calcDecimalGrade(assignAvg, midtermExam, finalExam);
  char letterGrade = calcLetterGrade(decimalGrade);

  displayGrade(decimalGrade, letterGrade);

  goodbyeMessage();
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
  return decimalGrade;
}

char calcLetterGrade(double decimalGrade) {
  char grade = '\0';

  if(decimalGrade >= 3.3) {
    grade = 'A';
  } else if(decimalGrade >= 2.8) {
    grade = 'B';
  } else if(decimalGrade >= 2.0) {
    grade = 'C';
  } else if(decimalGrade >= 1.2) {
    grade = 'D';
  } else {
    grade = 'F';
  }
  return grade;
}

int readInt(string prompt) {
    int n = 0;
    bool next = true;
    
    while (next) {
        cout << prompt;
        cin >> n;
        if (cin && n >= 0) {
            next = false;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return n;
}

double readDouble(string prompt) {
    double n = 0.0;
    bool next = true;
    
    while (next) {
        cout << prompt;
        cin >> n;
        if (cin) {
            next = false;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return n;
}

void helloMessage() {
  cout << "Welcome to my Final Grade Calculator!" << endl;
}

void usageMessage() {
  cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
  cout << "The number of assignments must be between 0 and 10." << endl;
  cout << "All scores entered must be between 0 and 4. " << endl;
}

void goodbyeMessage() {
  cout << "Thank you for using my Grade Calculator!" << endl;
}

double getScoreInRange(string prompt) {
    double score = 0.0;
    bool next = true;
    while(next) {
      score = readDouble(prompt);
      if(MIN_SCORE <= score and score <= MAX_SCORE) {
        next = false;
      } else {
        cout << "All scores entered must be between 0 and 4. ";
      }
    }
    return score;
}

double assignAverage(int numAssigns) {
  double sum = 0.0;
  double avg = 0.0;

  for(int i = 1; i <= numAssigns; i++) {
    string promptScore = "Enter score " + to_string(i) + ": ";
    double score = getScoreInRange(promptScore);
    sum = sum + score;
  }

  avg = sum / numAssigns;
  return avg;
}

void displayGrade(double decimalGrade, char letterGrade) {
  cout << fixed << setprecision(1);
  cout << "Your Final Numeric score is " << decimalGrade << endl;
  cout << "Your Final Grade is " << letterGrade << endl;
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

MESSAGE "Thank you for using my Grade Calculator!"


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
