#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"

TEST_GROUP(TestCheckForLines);

TEST_GROUP_RUNNER(TestCheckForLines)
{
RUN_TEST_CASE(TestCheckForLines, FunctionCheckForLines);
}

TEST_SETUP(TestCheckForLines)
{
}

TEST_TEAR_DOWN(TestCheckForLines)
{
}

TEST(TestCheckForLines, FunctionCheckForLines)

{


int lines = 0;

    for (int x = 0; x < FIELD_HEIGHT; x++) 
   {
       

        for (int y = 1; y < FIELD_WIDTH; y++) 
       

    return lines;
   }

TEST_ASSERT_EQUAL_INT_ARRAY( 10, 16, 20);
}


