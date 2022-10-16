#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Test test_parameters function")
{
	int num1 = 10;
	int num2 = 10;
	int result = 990;
	check_math(num1, num2, result);
	REQUIRE(num1 == 10);
	REQUIRE(num2 == 10);
	REQUIRE(result == 100);
}

