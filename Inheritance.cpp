#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int employeeId;

    
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

    void displaySalaryInfo() {
        cout << "Salary: " << calculateSalary() << endl; 
    }

private:
    
    int calculateSalary() {
        
        return 50000; 
    }
};

int main() {
    HR hr("John Doe", 123);
    hr.getPersonalInfo().address = "123 Main St";
    hr.getPersonalInfo().phoneNumber = "123-456-7890";

    Accounting accounting("Jane Smith", 456);

    hr.displayEmployeeInfo();
    hr.displayPersonalInfo(); 

    accounting.displayEmployeeInfo();
    // accounting.displayPersonalInfo(); // Accounting cannot directly access personal info
    accounting.displaySalaryInfo();

    return 0;
}
