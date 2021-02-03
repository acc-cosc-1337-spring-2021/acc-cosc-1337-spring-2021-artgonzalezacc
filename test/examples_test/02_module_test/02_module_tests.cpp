#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/examples/02_module/01_expressions/expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*Test case operator precedence 1 with function argument values 12, 6 and 3 returns 14*/
TEST_CASE("Verify operator precedence 1", "verify order of ops") 
{
	REQUIRE(operator_precedence_1(12, 6, 3) == 14);
}

/*Test case operator precedence 2 with function argument values 12, 6 and 3 returns 6*/
TEST_CASE("Verify operator precedence 2", "verify order of ops") 
{
	REQUIRE(operator_precedence_2(12, 6, 3) == 6);
}


/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case operator precedence 3 with function argument values 12, 6 and 3 returns 6*/

/*Test case convert_to_double to show that multiplying int and double returns a double*/

/*Test case convert double to int to show that a double converted to int truncates 
the decimal portion*/

/*Test case static cast double int to show that a double casted to int truncates
decimal portion*/

/*Test int overflow to show adding 1 to 2147483647 returns -2147483648*/

/*Test get radius of a circle with 10 to show that it returns 314.159*/

/*Test int data size */

/*Test multi assign addition*/

