#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    
    //testing precondition/incorrect use of function
    REQUIRE(sumtail(0,0)==-1); 
    REQUIRE(sumtail(-2,0)== -1);

    //testing scenarios for correct use of function 
    REQUIRE(sumtail(3,0)==6);
    REQUIRE(sumtail(9,0)==45);
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    //testing precondition/incorrect use of function
    REQUIRE(sumwhile(0)==-1);
    REQUIRE(sumwhile(-2) == -1);
    
    //testing scenarios for correct use of function
    REQUIRE(sumwhile(3)==6);
    REQUIRE(sumwhile(9)==45);
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    int F2 = 1; //the second fib_number is 1
    int F3 = 2; //the third fib_number is 3
    
    //testing precondition/incorrect use of function
    REQUIRE(fib(0,F2,F3)==-1);
    REQUIRE(fib(-3,F2,F3) == -1);

    //testing scenarios for correct use of function
    REQUIRE(fib(1,F2,F3) == 1);
    REQUIRE(fib(10,F2,F3) == 55);
}


