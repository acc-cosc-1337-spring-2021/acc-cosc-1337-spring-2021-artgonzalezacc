#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test new bank account balance is 0")
{
	BankAccount account;

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test bank account deposit with valid amount")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test bank account deposit with invalid amount")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.deposit(-10);
	REQUIRE(account.get_balance() == 50);
}

TEST_CASE("Test bank account withdraw with valid amount")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);	

	account.withdraw(10);
	REQUIRE(account.get_balance() == 40);	
}

TEST_CASE("Test bank account withdraw with amount less than 0")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);	

	account.withdraw(-10);
	REQUIRE(account.get_balance() == 50);	
}

TEST_CASE("Test bank account withdraw with amount greater than balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);	
	
	account.withdraw(51);
	REQUIRE(account.get_balance() == 50);	
}

TEST_CASE("Test new bank account balance is 100")
{
	BankAccount account(100);

	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account deposit with begin balance 100")
{
	BankAccount account(100);

	REQUIRE(account.get_balance() == 100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test bank account withdraw with begin balance 100")
{
	BankAccount account(100);

	REQUIRE(account.get_balance() == 100);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 50);
}
