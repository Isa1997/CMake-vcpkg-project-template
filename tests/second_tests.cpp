#include <catch2/catch_test_macros.hpp>
#include <app/g.h>

TEST_CASE( "1: All test cases reside in other .cpp files (empty)", "[multi-file:1]" ) 
{}

// Random test case
TEST_CASE("Two calls of random are not equal", "[single-file]") 
{
    REQUIRE(GetRandom() != GetRandom());
}