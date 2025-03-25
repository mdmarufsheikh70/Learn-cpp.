#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int employeeId;

    // Nested class for personal information
    class PersonalInfo {
    public:
        string address;
        string phoneNumber;
    };

    PersonalInfo personalInfo;

public:
    Employee(string n, int id) : name(n), employeeId(id) {}

    void displayEmployeeInfo() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
    }

    PersonalInfo &getPersonalInfo() {
        return personalInfo;
    }
};

class HR : public Employee {
public:
    HR(string n, int id) : Employee(n, id) {}

    void displayPersonalInfo() {
        cout << "Address: " << personalInfo.address << endl;
        cout << "Phone Number: " << personalInfo.phoneNumber << endl;
    }
};

class Accounting : public Employee {
public:
    Accounting(string n, int id) : Employee(n, id) {}

    // Accounting class can only access public members of Employee
    void displaySalaryInfo() {
        cout << "Salary: " << calculateSalary() << endl; // Assuming a calculateSalary() function
    }

private:
    // Can't directly access personalInfo here
    int calculateSalary() {
        // Logic to calculate salary based on employee's role, experience, etc.
        return 50000; // For example
    }
};

int main() {
    HR hr("John Doe", 123);
    hr.getPersonalInfo().address = "123 Main St";
    hr.getPersonalInfo().phoneNumber = "123-456-7890";

    Accounting accounting("Jane Smith", 456);

    hr.displayEmployeeInfo();
    hr.displayPersonalInfo(); // HR can access personal info

    accounting.displayEmployeeInfo();
    // accounting.displayPersonalInfo(); // Accounting cannot directly access personal info
    accounting.displaySalaryInfo();

    return 0;
}