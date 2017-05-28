#include "unity.h"
#include "unity_fixture.h"
#include "mathlib.h"

TEST_GROUP(TestAngleBetweenPoints);

TEST_GROUP_RUNNER(TestAngleBetweenPoints)
{
RUN_TEST_CASE(TestAngleBetweenPoints, FunctionAngleBetweenPoints);
}

TEST_SETUP(TestAngleBetweenPoints)
{
}

TEST_TEAR_DOWN(TestAngleBetweenPoints)
{
}

TEST(TestAngleBetweenPoints, FunctionAngleBetweenPoints)

{

float x1, x2, y1, y2;

return atan2(y1 - y2, x1 - x2);

TEST_ASSERT_EQUAL_INT_ARRAY( 100, 100, 100);
}

