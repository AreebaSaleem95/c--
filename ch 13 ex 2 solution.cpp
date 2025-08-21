#include <iostream>
#include <cstring> // For using C-style strings
using namespace std;

class bank {
private:
    char name[30];
    int actno;
    char actype[30];
    int bal;

public:
    bank();                // Constructor
    void deposit(int amt);
    void withdraw(int amt);
    void display();
};

// Constructor definition
bank::bank() {
    cout << "Enter account name: ";
    cin.ignore();              // Clear input buffer
    cin.getline(name, 30);

    cout << "Enter account number: ";
    cin >> actno;

    cout << "Enter account type: ";
    cin.ignore();              // Clear buffer again before getline
    cin.getline(actype, 30);

    cout << "Enter opening balance: ";
    cin >> bal;
}

void bank::deposit(int amt) {
    bal = bal + amt;
    cout << "\nBalance after deposit: " << bal << endl;
}

void bank::withdraw(int amt) {
    if (amt > bal)
        cout << "Not enough balance in account!" << endl;
    else {
        bal = bal - amt;
        cout << "Balance after withdrawal: " << bal << endl;
    }
}

void bank::display() {
    cout << "\nAccount details:" << endl;
    cout << "Account name: " << name << endl;
    cout << "Account number: " << actno << endl;
    cout << "Account type: " << actype << endl;
    cout << "Current balance: " << bal << endl;
}

int main() {
    int a, choice;
    bank ac;

    do {
        cout << "\n\nChoice List\n";
        cout << "1) Deposit\n";
        cout << "2) Withdraw\n";
        cout << "3) Display all details\n";
        cout << "4) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter your amount to deposit: ";
            cin >> a;
            ac.deposit(a);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> a;
            ac.withdraw(a);
            break;

        case 3:
            ac.display();
            break;

        case 4:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (true);

    return 0;
}
