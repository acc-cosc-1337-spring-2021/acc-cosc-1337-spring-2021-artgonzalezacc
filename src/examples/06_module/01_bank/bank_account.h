//bank_account.h
class BankAccount
{
public://access specifier
    int get_balance()const {return balance;}
private:
    int balance{0};
};