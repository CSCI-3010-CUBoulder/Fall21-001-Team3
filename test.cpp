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
}