#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"

TEST_GROUP(TestDrawPlayfield);

TEST_GROUP_RUNNER(TestDrawPlayfield)
{
RUN_TEST_CASE(TestDrawPlayfield, FunctionDrawPlayfield);
}

TEST_SETUP(TestDrawPlayfield)
{
}

TEST_TEAR_DOWN(TestDrawPlayfield)
{
}

TEST(TestDrawPlayfield, FunctionDrawPlayfield)

{

    for (int x = 0; x < FIELD_HEIGHT; x++) 
   {
      for (int y = 0; y < FIELD_WIDTH; y++) 
      {
         int x0 = (x + OFFSET_X) * BLOCK_SIZE;
         int y0 = (y - OFFSET_Y) * BLOCK_SIZE;
         int x1 = x0 + BLOCK_SIZE;
         int y1 = y0 + BLOCK_SIZE;
         
      }
   }
TEST_ASSERT_EQUAL_INT_ARRAY( 100, 100, 100);
}
