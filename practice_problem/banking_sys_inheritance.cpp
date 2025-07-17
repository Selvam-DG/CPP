#include <iostream>
using namespace std;

class Account {
protected:
    string name;
    int acnt_no;
    string acnt_type;
public:
    void get_account_details() {
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> acnt_no;
        cout << "Enter account type: ";
        cin >> acnt_type;
    }

    void show_account_details() {
        cout << "\nCustomer Name: " << name;
        cout << "\nAccount Type: " << acnt_type;
        cout << "\nAccount Number: " << acnt_no;
    }
};

class Current_account : public Account {
private:
    float balance = 0;
public:
    void deposit() {
        float deposit;
        cout << "Enter amount to deposit: ";
        cin >> deposit;
        balance += deposit;
    }

    void withdraw() {
        float withdraw;
        cout << "Enter amount to withdraw: ";
        cin >> withdraw;
        if (balance - withdraw < 1000) {
            cout << "Insufficient Balance! Minimum balance of 1000 required.";
        } else {
            balance -= withdraw;
            cout << "Withdrawal successful. Remaining Balance: " << balance;
        }
    }

    void display_balance() {
        cout << "Current Balance: " << balance << endl;
    }

    void full_display() {
        show_account_details();
        display_balance();
    }
};

class Savings_account : public Account {
private:
    float balance = 0;
public:
    void deposit() {
        float deposit;
        cout << "Enter amount to deposit: ";
        cin >> deposit;
        balance += deposit;
        float interest = balance * 0.02;
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }

    void withdraw() {
        float withdraw;
        cout << "Enter amount to withdraw: ";
        cin >> withdraw;
        if (balance - withdraw < 500) {
            cout << "Insufficient Balance! Minimum balance of 500 required.";
        } else {
            balance -= withdraw;
            cout << "Withdrawal successful. Remaining Balance: " << balance;
        }
    }

    void display_balance() {
        cout << "Current Balance: " << balance << endl;
    }

    void full_display() {
        show_account_details();
        display_balance();
    }
};

int main() {
    char type;
    int choice;
    cout << "Enter 'S' for Savings Account or 'C' for Current Account: ";
    cin >> type;

    if (type == 'S' || type == 's') {
        Savings_account sa;
        sa.get_account_details();
        do {
            cout << "\n\nMenu:\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Display Balance\n";
            cout << "4. Display Full Account Details\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1: sa.deposit(); break;
                case 2: sa.withdraw(); break;
                case 3: sa.display_balance(); break;
                case 4: sa.full_display(); break;
                case 5: cout << "\nThank you for banking with us!\n"; break;
                default: cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 5);
    }
    else if (type == 'C' || type == 'c') {
        Current_account ca;
        ca.get_account_details();
        do {
            cout << "\n\nMenu:\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Display Balance\n";
            cout << "4. Display Full Account Details\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1: ca.deposit(); break;
                case 2: ca.withdraw(); break;
                case 3: ca.display_balance(); break;
                case 4: ca.full_display(); break;
                case 5: cout << "\nThank you for banking with us!\n"; break;
                default: cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 5);
    }
    else {
        cout << "\nInvalid account type selected!";
    }

    return 0;
}
