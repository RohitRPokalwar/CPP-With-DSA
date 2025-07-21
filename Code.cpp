#include <iostream>
#include <string>
using namespace std;

// Base class
class FY6 {
public:
    void display() {
        cout << "Base Class: FY-6" << endl;
    }
};

// Forward declaration
class Bird_10630;

// Derived class: Human
class Human_10660 : public FY6 {
    string name;
    int age;
    friend class Bird_10630; // Bird can access private members
public:
    void getDetails() {
        cout << "Enter Human Name: ";
        cin >> name;
        cout << "Enter Human Age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Human Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Animal
class Animal_10671 : public FY6 {
    string species;
    int legs;
public:
    void getDetails() {
        cout << "Enter Animal Species: ";
        cin >> species;
        cout << "Enter Number of Legs: ";
        cin >> legs;
    }

    void showDetails() {
        cout << "Animal Species: " << species << ", Legs: " << legs << endl;
    }
};

// Derived class: Bird
class Bird_10630 : public FY6 {
    string type;
public:
    void getDetails() {
        cout << "Enter Bird Type: ";
        cin >> type;
    }

    void showDetails() {
        cout << "Bird Type: " << type << endl;
    }

    void accessFriend(Human_10660 h) {
        cout << "Bird is a friend of Human!" << endl;
        cout << "Accessing Human data (friend access): " << h.name << ", Age: " << h.age << endl;
    }
};

// Derived class: Bank
class Bank_10678 : public FY6 {
    string bankName;
    double balance;
public:
    void getDetails() {
        cout << "Enter Bank Name: ";
        cin >> bankName;
        cout << "Enter Account Balance: ";
        cin >> balance;
    }

    void showDetails() {
        cout << "Bank Name: " << bankName << ", Balance: Rs." << balance << endl;
    }
};



int main() {
    Human_10660 h;
    Animal_10671 a;
    Bird_10630 b;
    Bank_10678 bk;
    

    cout << "\n-- Enter Details --\n";
    h.getDetails();
    a.getDetails();
    b.getDetails();
    bk.getDetails();
   

    cout << "\n-- Displaying Details --\n";
    h.showDetails();
    a.showDetails();
    b.showDetails();
    bk.showDetails();
   

    cout << "\n-- Friend Class Access (Bird accessing Human) --\n";
    b.accessFriend(h);

    return 0;
}