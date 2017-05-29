#include <math.h>
#include "unity.h"
#include "unity_fixture.h"
#include "mathlib.h"

TEST_GROUP(TestRectanglesIntersect);

TEST_GROUP_RUNNER(TestRectanglesIntersect)
{
RUN_TEST_CASE(TestRectanglesIntersect, FunctionRectanglesIntersect);
}

TEST_SETUP(TestRectanglesIntersect)
{
}

TEST_TEAR_DOWN(TestRectanglesIntersect)
{
}

TEST(TestRectanglesIntersect, FunctionRectanglesIntersect)

{

float l1=0.4, t1=2, r1=1, b1=2, l2=2, t2=3, r2=1, b2=1;
float b=0;
if (r1 < l2 || b1 < t2 || l1 < r2 || t1 > b2)
b=1;


TEST_ASSERT_EQUAL_FLOAT( b, 1);
}

