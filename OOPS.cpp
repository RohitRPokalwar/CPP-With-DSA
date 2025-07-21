#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Attendance {
public:
    int studentID;
    string name;
    int daysPresent;

    void input() {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cin.ignore();  // Clear input buffer
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Days Present: ";
        cin >> daysPresent;
    }

    void display() const {
        cout << "ID: " << studentID << ", Name: " << name << ", Days Present: " << daysPresent << endl;
    }
};

int main() {
    int n;
    cout << "How many students? ";
    cin >> n;

    ofstream outFile("attendance.txt");
    if (!outFile) {
        cout << "Error opening file for writing.\n";
        return 1;
    }

    // Input and save attendance data to file
    for (int i = 0; i < n; i++) {
        Attendance a;
        cout << "\nStudent " << i + 1 << ":\n";
        a.input();
        outFile << a.studentID << "\n" << a.name << "\n" << a.daysPresent << "\n";
    }
    outFile.close();

    int threshold;
    cout << "\nEnter attendance threshold: ";
    cin >> threshold;

    ifstream inFile("attendance.txt");
    if (!inFile) {
        cout << "Error opening file for reading.\n";
        return 1;
    }

    cout << "\nStudents with attendance below " << threshold << ":\n";

    int id, days;
    string name;
    bool found = false;

    while (inFile >> id) {
        inFile.ignore(); // ignore newline after id
        getline(inFile, name);
        inFile >> days;
        inFile.ignore(); // ignore newline after days

        if (days < threshold) {
            cout << "ID: " << id << ", Name: " << name << ", Days Present: " << days << endl;
            found = true;
        }
    }
    inFile.close();

    if (!found) {
        cout << "No students below threshold.\n";
    }

    return 0;
}
