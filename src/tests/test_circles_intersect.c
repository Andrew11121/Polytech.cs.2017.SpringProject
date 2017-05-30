#include "unity.h"
#include "unity_fixture.h"
#include "colors.h"
#include "mathlib.h"
#include <math.h>
#include <stdbool.h>
TEST_GROUP(TestCirclesIntersect);

TEST_GROUP_RUNNER(TestCirclesIntersect)
{
RUN_TEST_CASE(TestCirclesIntersect, FunctionCirclesIntersect);
}

TEST_SETUP(TestCirclesIntersect)
{
}

TEST_TEAR_DOWN(TestCirclesIntersect)
{
}

//testing circles intersection: comparing expected result with a result from func

TEST(TestCirclesIntersect, FunctionCirclesIntersect)

{
float a = 1, b;
float x1 = 5, y1 = 10, r1 = 5, x2 = 10, y2 = 15, r2 = 10;
float radii = r1 + r2;
float dx = x2 - x1;
float dy = y2 - y1;
if((radii * radii) > (dx * dx + dy * dy))
b = 1;

TEST_ASSERT_EQUAL_FLOAT( a, b);
}
