#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <climits>
#include "../src/examples/02_module/01_expressions/expressions.h"
#include "casting.h"
#include "overflow.h"
#include "constants.h"

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
TEST_CASE("Test convert to double", "int * double, int converted to double")
{
	REQUIRE(convert_to_double(10, .35) == 3.5);
}

/*Test case convert double to int to show that a double converted to int truncates 
the decimal portion*/
TEST_CASE("Test convert to double to int", "double to int, truncate decimals")
{
	REQUIRE(convert_double_to_int(10.375) == 10);
	REQUIRE(convert_double_to_int(10.875) == 10);
}

/*Test case static cast double int to show that a double casted to int truncates
decimal portion*/
TEST_CASE("Test static cast double to int", "explicit double to int, truncate decimals")
{
	REQUIRE(static_cast_double_int(10.375) == 10);
}

/*Test int overflow to show adding 1 to 2147483647 returns -2147483648*/
TEST_CASE("Test int overflow", "Create C++ weirdness")
{
	REQUIRE(int_overflow() == -2147483648);
}

TEST_CASE("Test double underflow", "Decimal havoc")
{
	REQUIRE(double_underflow() == 0);
}

/*Test get radius of a circle with 10 to show that it returns 314.159*/
TEST_CASE("Test get area of circle function", "use constants ")
{
	REQUIRE(get_area_of_circle(10) == 314.159);
}

/*Test int data size */

/*Test multi assign addition*/

