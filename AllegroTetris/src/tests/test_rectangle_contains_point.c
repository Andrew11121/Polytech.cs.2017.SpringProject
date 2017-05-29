
#include "unity.h"
#include "unity_fixture.h"
#include "mathlib.h"
#include <math.h>
#include <stdbool.h>


TEST_GROUP(TestRectangleContainsPoint);

TEST_GROUP_RUNNER(TestRectangleContainsPoint)
{
RUN_TEST_CASE(TestRectangleContainsPoint, FunctionRectangleContainsPoint);
}

TEST_SETUP(TestRectangleContainsPoint)
{
}

TEST_TEAR_DOWN(TestRectangleContainsPoint)
{
}

TEST(TestRectangleContainsPoint, FunctionRectangleContainsPoint)

{
float x=3, l=2, r=4.5, y=2, t=1 ,b=4;
float rec, a=1;
 if (x > l || x < r || y > t || y < b)
  rec = 1;
TEST_ASSERT_EQUAL_FLOAT( rec, a);
}

