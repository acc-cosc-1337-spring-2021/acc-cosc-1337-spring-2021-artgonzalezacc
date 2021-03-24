#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "vec.h"
#include "vec_for_ranged.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares", "while loop example")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Test call by value", "A copy of a variable's data is sent into the function")
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5);
}

TEST_CASE("Test call by reference", "A clone of the parameter is created")
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num2 == 50);

}

TEST_CASE("Test calculate weekly salary for salaried")
{
	REQUIRE(calculate_weekly_salary(52000) == 1000);
}

TEST_CASE("Test calculate weekly salary for hourly")
{
	REQUIRE(calculate_weekly_salary(40, 10) == 400);
}

TEST_CASE("Test vector value parameter")
{
	vector<int> expected_values{4, 1, 6, 0, 10};
	vector<int> nums{4, 1, 6, 0, 10};
	
	loop_vector_w_index(nums);
	REQUIRE(expected_values == nums);
}

TEST_CASE("Test vector reference parameter")
{
	vector<int> expected_values {-1, -1, -1, -1, -1};
	vector<int> nums{4, 1, 6, 0, 10};

	loop_vector_w_index_ref(nums);
	REQUIRE(expected_values == nums);
}

TEST_CASE("Test vector value parameter for ranged")
{
	vector<int> expected_values{4, 1, 6, 0, 10};
	vector<int> nums{4, 1, 6, 0, 10};
	loop_vector_w_for_ranged(nums);
	
	REQUIRE(expected_values == nums);	
}

TEST_CASE("Test vector reference parameter for ranged")
{
	vector<int> expected_values{-1, -1, -1, -1, -1};//???
	vector<int> nums{4, 1, 6, 0, 10};
	loop_vector_w_for_ranged_ref(nums);
	
	REQUIRE(expected_values == nums);		
}

TEST_CASE("Test vector return value")
{
	vector<int> expected_values{5, 1, 10};
	vector<int> nums = get_vector();

	REQUIRE(expected_values == nums);
}