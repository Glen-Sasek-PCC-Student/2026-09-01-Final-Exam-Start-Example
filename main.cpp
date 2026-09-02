// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)

// Prompt a user for the number of miles they want to ride (walk, run, swim, 
// whatever you want) this week. This is their goal. 
// If the user enters 0 or less, print a message that no miles were tracked this week. 
// The message should be printed in main() and not in the function.
// If a valid number of miles is entered, you must call another function - 
void getInput(int &goal);


// In this function, use a for loop to prompt for the number of miles ridden each day for a week. 
// Include the day of the week (Sunday, Monday, etc) in your prompt. 
// If the user enters a number less than 0, print an error message and prompt for the same day again. (See sample run below).
// After all of the days have been entered, calculate the total miles for the week and return to main().
int calcTotal();



// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {

  cout << "Welcome to my Miles Tracker program." << endl;

  cout << "TODO: int main()" << endl;

// print a message with the 
// total miles for the week and 
// a message if they met their goal, were over their goal, or under their goal. 
// Include the number of miles they were over or under in your message.

// You rode 70 miles this week.
// Uh oh! You missed your goal by 30 miles!
// Keep riding!

  return 0;
}

// Function implementations (if any)

// 
// If the user enters 0 or less, print a message that no miles were tracked this week. 
// The message should be printed in main() and not in the function.
// If a valid number of miles is entered, you must call another function - 
void getInput(int &goal) {
  // Prompt a user for the number of miles they want to ride (walk, run, swim, whatever you want) this week.
  // This is their goal. 

  // How many miles do you want to ride this week? 50
  cout << "TODO: void getInput(int &goal)" << endl;
}


// In this function, 


// After all of the days have been entered, calculate the total miles for the week and return to main().
int calcTotal() {
  int miles = 0;
  // use a for loop to prompt for the number of miles ridden each day for a week. 
  // Include the day of the week (Sunday, Monday, etc) in your prompt. 
  // If the user enters a number less than 0, print an error message and prompt for the same day again. (sample below).

  // How many miles did you ride on Sunday? -9
  // Miles must be 0 or greater!
  // How many miles did you ride on Sunday? -3
  // Miles must be 0 or greater!
  // How many miles did you ride on Sunday? 0
  // How many miles did you ride on Monday? 10
  // How many miles did you ride on Tuesday? 10
  // How many miles did you ride on Wednesday? 10
  // How many miles did you ride on Thursday? 10
  // How many miles did you ride on Friday? 10
  // How many miles did you ride on Saturday? 0
  cout << "TODO: int calcTotal()" << endl;

  return miles;
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
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS

How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -3
Miles must be 0 or greater!
How many miles did you ride on Sunday? 0
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 0
You rode 50 miles this week.
Good job! You met your goal!
Keep riding!

Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 100
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Uh oh! You missed your goal by 30 miles!
Keep riding!

Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Great job! You exceeded your goal by 20 miles!
Keep riding!

Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!

Welcome to my Miles Tracker program.
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!

*/
