#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    float balance;

public:
    Account(int accNo = 0, float bal = 0) {
        accountNumber = accNo;
        balance = bal;
    }

    void setAccountNumber(int accNo) {
        accountNumber = accNo;
    }

    void setBalance(float bal) {
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    float getBalance() {
        return balance;
    }

    virtual void Credit(float amount) = 0;
    virtual void Debit(float amount) = 0;

    virtual void Print() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual ~Account() {
        cout << "Account Destructor\n";
    }
};


class CurrentAccount : public Account {
private:
    float serviceCharges;
    float minBalance;

public:
    CurrentAccount(int accNo, float bal, float minBal, float charges)
        : Account(accNo, bal) {
        minBalance = minBal;
        serviceCharges = charges;
    }

    void Credit(float amount) override {
        balance += amount;
    }

    void Debit(float amount) override {
        if (amount <= balance) {
            balance -= amount;

           
            if (balance < minBalance) {
                balance -= serviceCharges;
            }
        }
        else {
            cout << "Insufficient balance\n";
        }
    }

    void Print() override {
        cout << "\n--- Current Account ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Minimum Balance: " << minBalance << endl;
        cout << "Service Charges: " << serviceCharges << endl;
    }

    ~CurrentAccount() {
        cout << "CurrentAccount Destructor\n";
    }
};


class SavingAccount : public Account {
private:
    float interestRate;

public:
    SavingAccount(int accNo, float bal, float rate)
        : Account(accNo, bal) {
        interestRate = rate;
    }

    void Credit(float amount) override {
        balance += amount;
    }

    void Debit(float amount) override {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            cout << "Insufficient balance\n";
        }
    }

    void Print() override {
        cout << "\n--- Saving Account ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }

    ~SavingAccount() {
        cout << "SavingAccount Destructor\n";
    }
};


int main() {

   
    Account* arr[2];

    arr[0] = new CurrentAccount(101, 5000, 2000, 200);
    arr[1] = new SavingAccount(102, 3000, 5);

    arr[0]->Credit(1000);
    arr[0]->Debit(4500);

    arr[1]->Credit(500);
    arr[1]->Debit(1000);

  
    for (int i = 0; i < 2; i++) {
        arr[i]->Print();
    }

   
    for (int i = 0; i < 2; i++) {
        delete arr[i];
    }

    return 0;
}