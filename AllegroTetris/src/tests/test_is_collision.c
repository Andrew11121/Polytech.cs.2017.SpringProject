#include "unity.h"
#include "unity_fixture.h"
#include "playfield.h"
#include "colors.h"

TEST_GROUP(TestIsCollision);

TEST_GROUP_RUNNER(TestIsCollision)
{
RUN_TEST_CASE(TestIsCollision, FunctionIsCollision);
}

TEST_SETUP(TestIsCollision)
{
}

TEST_TEAR_DOWN(TestIsCollision)
{
}

TEST(TestIsCollision, FunctionIsCollision)

{
Block *block;
 int dx;
int y;
 int dy ;
int x;


 if ((((block->x + dx  < 0) || (block->y + dy < 0) ||
            (block->x + dx + x >= FIELD_WIDTH) && (block->y + dy + y <= FIELD_HEIGHT)) &&
            (block->y & (1 << ((y * 4) + x)))) )
         {
             return true;
         }

TEST_ASSERT_EQUAL_INT_ARRAY( 10, 16, 20);
}

