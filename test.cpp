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
    SECTION("Passing filled vec returns prod")
    {
        std::vector<int> test = std::vector<int>({1,2,3,4,5});
        REQUIRE(Product(test) == 120);
    }
    SECTION("Passing empty vec returns 1")
    {
        std::vector<int> test = {};
        REQUIRE(Product(test) == 1);
    }
}