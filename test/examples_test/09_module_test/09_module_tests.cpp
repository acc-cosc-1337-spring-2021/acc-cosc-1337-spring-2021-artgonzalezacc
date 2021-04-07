#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference parameter")
{
	int num = 0, num1 = 0;
	ref_ptr(num, &num1);

	REQUIRE(num == 10);
	REQUIRE(num1 == 20);
}
