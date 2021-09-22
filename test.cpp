//
// Created by korisd on 9/22/21.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Test various behaviours of the RemoveTwos function", "[RemoveTwos]")
{

    SECTION("Passing 16 returns 1")
    {
        REQUIRE(RemoveTwos(16) == 1);
    }

    SECTION("Passing 26 returns 13")
    {
        REQUIRE(RemoveTwos(26) == 13);
    }

    SECTION("Passing 52 returns 13")
    {
        REQUIRE(RemoveTwos(52) == 13);
    }
    SECTION("Passing odd returns same")
    {
        REQUIRE(RemoveTwos(13) == 13);
    }
}

TEST_CASE("Testing behaviors for Sum function", "[Sum]")
{
    SECTION("Passing filled vec returns prod. Int")
    {
        std::vector<int> test = std::vector<int>({1,2,3,4,5});
        REQUIRE(Product(test) == 120);
    }
    SECTION("Passing empty vec returns 1. Int")
    {
        std::vector<int> test = {};
        REQUIRE(Product(test) == 1);
    }
    SECTION("Passing filled vec returns prod. Double")
    {
        std::vector<double> test = std::vector<double>({1,2,3,4,5,0.5,0.125});
        REQUIRE(Product(test) == 7.5);
    }
    SECTION("Passing empty vec returns 1. Double")
    {
        std::vector<double> test = {};
        REQUIRE(Product(test) == 1.0);
    }
}

TEST_CASE("Sum various behaviours of the sum functions.", "[Sum]")
{
    SECTION("Sum on empty vector returns 0")
    {
        std::vector<int> nothing;
        REQUIRE(Sum(nothing) == 0);
    }
    SECTION("Sum of {1, 1} returns 2")
    {
        std::vector<int> nums {1, 1};
        REQUIRE(Sum(nums) == 2);
    }

    SECTION("Sum of {1, 2, 3, 4, 5} returns 15")
    {
        std::vector<int> nums {1, 2, 3, 4, 5};
        REQUIRE(Sum(nums) == 15);
    }
}