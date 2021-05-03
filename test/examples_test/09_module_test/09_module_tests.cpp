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

TEST_CASE("Test empty vector pushback")
{
	Vector v;
	v.Pushback(2);

	REQUIRE(v.Capacity() == 8);
	REQUIRE(v.Size() == 1);
	REQUIRE(v[0] ==  2);
}

TEST_CASE("Test non-empty vector pushback")
{
	Vector v(3);
	REQUIRE(v.Size() == 0);
	REQUIRE(v.Capacity() == 3);

	v.Pushback(3);

	REQUIRE(v.Size() == 1);
	REQUIRE(v.Capacity() == 3);
}

TEST_CASE("Test vector default multiplier doubles memory")
{
	Vector v(3);
	v.Pushback(1);
	v.Pushback(99);
	v.Pushback(50);
	REQUIRE(v[1] == 99);
	REQUIRE(v.Size() == 3);
	REQUIRE(v.Capacity() == 3);

	v.Pushback(25);
	REQUIRE(v[3] == 25);
	REQUIRE(v.Capacity() == 6);
	REQUIRE(v.Size() == 4);

}