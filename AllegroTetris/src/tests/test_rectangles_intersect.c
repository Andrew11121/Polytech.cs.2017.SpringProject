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

float l1, t1, r1, b1, l2, t2, r2, b2;

return !(r1 < l2 || b1 < t2 || l1 > r2 || t1 > b2);

TEST_ASSERT_EQUAL_INT_ARRAY( 100, 100, 100);
}

