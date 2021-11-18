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
    
    //testing precondition/incorrect use of function is done through the assert statement in the function

    //testing borderline case of precondition/base case
    REQUIRE(sumtail(1,0)==1);

    //testing scenarios for correct use of function 
    REQUIRE(sumtail(3,0)==6);
    REQUIRE(sumtail(9,0)==45);
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 

    //testing precondition/incorrect use of function is done through the assert statement in the function
    
    //testing borderline case of precondition
    REQUIRE(sumwhile(1)==1);

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
    int F1 = 0; //the first fib_number is 0
    int F2 = 1; //the second fib_number is 1
    
    //testing precondition/incorrect use of function is done through the assert statement in the function

    //testing borderline cases of precondition/base cases
    REQUIRE(fib(2,F1,F2)==1);
    REQUIRE(fib(1,F1,F2)==0);

    //testing scenarios for correct use of function (part with tail-recursion)
    REQUIRE(fib(11,F1,F2)==55);
    REQUIRE(fib(5, F1, F2)==3);
}


