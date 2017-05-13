
#include "unity.h"
#include "unity_fixture.h"
#include "mathlib.h"


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
float x, l, r, y, t ,b;
  return !(x < l || x > r || y < t || y > b);
TEST_ASSERT_EQUAL_INT_ARRAY( 100, 100, 20);
}

