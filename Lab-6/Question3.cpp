#include <iostream>
using namespace std;
class Account {
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;
    static long nextTransactionID;
public:
    Account(long accNo, double bal = 0) : accountNumber(accNo) {
        balance = bal;
        transactionID = 0;
        transactionType = "None";
    }
    long depositAmount(const long to, const long from, const double amount) {
        if (to == accountNumber) {
            balance += amount;
            transactionType = "Credit (Deposit)";
            transactionID = ++nextTransactionID;
            return transactionID;
        }
        return -1;
    }
    long creditAmount(const long to, const long from, const double amount) {
        if (from == accountNumber && balance >= amount) {
            balance -= amount;
            transactionType = "Debit (Withdraw)";
            transactionID = ++nextTransactionID;
            return transactionID;
        }
        return -1;
    }
    void displayDetails() const {
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Last Transaction ID: " << transactionID << endl;
        cout << "Transaction Type: " << transactionType << endl;
        cout << "--------------------------" << endl;
    }
};
long Account::nextTransactionID = 1000;
int main() {
    Account a1(101, 5000);
    Account a2(102, 3000);
    Account a3(103, 7000);
    Account a4(104, 2000);
    Account a5(105, 1000);
    a1.depositAmount(101, 102, 1000);
    a2.creditAmount(103, 102, 500);
    a3.depositAmount(103, 101, 2000);
    a4.creditAmount(104, 105, 1000);
    a5.depositAmount(105, 104, 1500);
    cout << "Account Details:\n";
    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();
    return 0;
}
