//bank_account.h
class BankAccount
{
public://access specifier
    int get_balance()const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);
private:
    int balance{0};//protect data integry-Encapsulation
};