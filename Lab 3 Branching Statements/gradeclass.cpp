#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float grade1, grade2;
    cout << "Please enter 2 grades, separated by a space: ";
    cin >> grade1 >> grade2;
    if (grade1 < 60 && grade2 < 60) {
        cout << "Student Failed:(";
    }
    else if (grade1 >= 95 && grade2 >= 95) {
        cout << "Student Graduated with Honors:)";
    }
    else {
        cout << "Student Graduated!";
    }
    return 0;
}