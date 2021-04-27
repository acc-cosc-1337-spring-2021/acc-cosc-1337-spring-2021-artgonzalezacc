#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "vector.h"

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

TEST_CASE("Test vector size function for memberwise copy")
{
	Vector v(3);
	Vector v1 = v;

	REQUIRE(v.Size() == v1.Size());
}

TEST_CASE("Test the pointer copy between classes")
{
	Vector v(3);
	Vector v1 = v;
	v[0] = 5;

	REQUIRE(v[0] != v1[0]);
}

TEST_CASE("Test overwriting an existing class with a copy")
{
	Vector v(3);
	Vector v1(3);
	v1 = v;
	v[0] = 5;

	REQUIRE(v[0] != v1[0]);
}