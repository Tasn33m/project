#include <iostream>
#include <string>
using namespace std;

double initial_balance = 0;
long long accountID = 0;
string accountName = "";
bool accountClosed = false;

void createAccount(long long &ID, double &balance, string &name) {
    cout << "Please Enter ID: ";
    while (!(cin >> ID) || ID <= 0) {
        cout << "Invalid ID! Please enter a valid positive number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Please Enter Initial Balance: ";
    while (!(cin >> balance) || balance < 0) {
        cout << "Invalid balance! Please enter a non-negative number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "Please Enter Your Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Your Account is Created Successfully!" << endl;
    cout << "Your Name: " << name << endl;
    cout << "Your ID: " << ID << endl;
    cout << "Your Initial Balance: " << balance << endl;
}

double withdraw(double balance) {
    if (accountClosed) {
        cout << "Your account is closed. No transactions allowed." << endl;
        return balance;
    }

    double amount;
    cout << "Enter amount to withdraw: ";
    while (!(cin >> amount) || amount <= 0) {
        cout << "Invalid amount! Please enter a positive number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    if (amount > balance) {
        cout << "Your Balance is not Enough!" << endl;
    } else {
        balance -= amount;
        cout << "Your New Balance is " << balance << endl;
    }
    return balance;
}

double deposit(double balance) {
    if (accountClosed) {
        cout << "Your account is closed. No transactions allowed." << endl;
        return balance;
    }

    double amount;
    cout << "Enter amount to deposit: ";
    while (!(cin >> amount) || amount <= 0) {
        cout << "Invalid amount! Please enter a positive number: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    balance += amount;
    cout << "Your New Balance is " << balance << endl;
    return balance;
}

void closeAccount() {
    accountID = 0;
    initial_balance = 0;
    accountName = "Unknown";
    accountClosed = true;
    cout << "Your account has been closed successfully.\n";
}

int main() {
    long long enteredID;
    cout << "Welcome! Please create an account\n";

    createAccount(accountID, initial_balance, accountName);

    while (true) {
        cout << "\nPlease Enter your ID to proceed: ";
        cin >> enteredID;

        if (enteredID == accountID) {
            break;
        }
        cout << "Invalid ID! Please try again.\n";
    }

    int choice;
    while (true) {
        cout << "\nChoose an operation:\n";
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Close Account\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        
        while (!(cin >> choice) || choice < 1 || choice > 4) {
            cout << "Invalid choice! Please enter a number between 1 and 4: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        switch (choice) {
            case 1:
                initial_balance = withdraw(initial_balance);
                break;
            case 2:
                initial_balance = deposit(initial_balance);
                break;
            case 3:
                closeAccount();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
        }
    }
}

