#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vars.h"
#include "input.h"
#include "numbers.h"
#include "auto.h"
#include "chars.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Verify the echo variable function", "should return the value of param") 
{
	REQUIRE(echo_variable(5) == 5);
}

TEST_CASE("Verify the get total function", "should return product of params") 
{
	REQUIRE(get_total(5, 6) == 30);
	REQUIRE(get_total(5, 10) == 50);
}

/*test case add_to_double_1 with 0 as parameter*/
/*test case add_to_double_1 with 1 as parameter*/
TEST_CASE("Verify the ADD TO double 1 function", "show decimal addition inconsistencies") 
{
	REQUIRE(add_to_double_1(1) == 1.9);
	//REQUIRE(add_to_double_1(0) == .9);//convert to a whole number
}

/*test case add_to_double_2 with 0 as parameter*/
/*test case add_to_double_2 with 1 as parameter*/

TEST_CASE("Verify the auto_int function", "should return 10") 
{
	REQUIRE(auto_int() == 10);
}

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/
TEST_CASE("Verify the get ascii value function", "should return letter ASCII value") 
{
	REQUIRE(get_char_ascii_value('J') == 74);
	REQUIRE(get_char_ascii_value('o') == 111);
	REQUIRE(get_char_ascii_value('e') == 101);
}
