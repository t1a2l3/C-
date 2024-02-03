#include <iostream>
#include <fstream>
using namespace std;

const int MAX_SUBJECTS = 100;

// read data from file
void readGradesFromFile(string fileName, int numOfStudents, int numOfSubjects, int grades[MAX_SUBJECTS][MAX_SUBJECTS])
 {
    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "Failed to open the file." << endl;
        return;
    }
  
    for (int i = 0; i < numOfStudents; i++) {
        for (int j = 0; j < numOfSubjects; j++) {
            inputFile >> grades[i][j];
        }
    }

    inputFile.close();
}


void readGradesFromUser(int numOfStudents, int numOfSubjects, int grades[MAX_SUBJECTS][MAX_SUBJECTS])
 {
    for (int i = 0; i < numOfStudents; i++) {
        cout << "Enter grades for student " << i + 1 << ":" << endl;
        for (int j = 0; j < numOfSubjects; j++) {
            cin >> grades[i][j];
        }
    }
}


void calculateAvg(int numOfStudents, int numOfSubjects, int grades[MAX_SUBJECTS][MAX_SUBJECTS], double avg[]) {
    for (int i = 0; i < numOfStudents; i++) {
        int sum = 0;
        for (int j = 0; j < numOfSubjects; j++) {
            sum += grades[i][j];
        }
        avg[i] = static_cast<double>(sum) / numOfSubjects;
    }
}


void displayAboveAvg(int numOfStudents, double avg[]) 
{
    double overallAvg = 0.0;
    for (int i = 0; i < numOfStudents; i++) {
        overallAvg += avg[i];
    }
    overallAvg = numOfStudents;

    cout << "Students with grades above average:" << endl;
    for (int i = 0; i < numOfStudents; i++) {
        if (avg[i] > overallAvg) {
            cout << "Student " << i + 1 << endl;
        }
    }
}
int main() {
    int numOfStudents, numOfSubjects;
    cout << "Enter the number of students: ";
    cin >> numOfStudents;
    cout << "Enter the number of subjects: ";
    cin >> numOfSubjects;

    int grades[MAX_SUBJECTS][MAX_SUBJECTS];
    double avg[MAX_SUBJECTS];


    string fileName = "grade.txt";
    readGradesFromFile(fileName, numOfStudents, numOfSubjects, grades);


    calculateAvg(numOfStudents, numOfSubjects, grades, avg);


    displayAboveAvg(numOfStudents, avg);

return 0;
}