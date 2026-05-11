#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> courseName(n);
    vector<float> grade(n), creditHours(n);

    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter course name: ";
        cin >> courseName[i];

        cout << "Enter grade obtained: ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        totalCredits += creditHours[i];
        totalGradePoints += grade[i] * creditHours[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);

    cout << "\n----- Student Grade Report -----\n";

    for (int i = 0; i < n; i++) {
        cout << "Course: " << courseName[i]
             << " | Grade: " << grade[i]
             << " | Credit Hours: " << creditHours[i] << endl;
    }

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalGradePoints << endl;
    cout << "Final CGPA = " << cgpa << endl;

    return 0;
}