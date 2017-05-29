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
//testing angle between points: comparing expected result with a result that we get from the func
TEST(TestAngleBetweenPoints, FunctionAngleBetweenPoints)

{
float x1 = 0, x2 = 0, y1 = 0, y2 = 0, a, b;
a = 0;
b = atan2(y2 - y1, x2 - x1);

TEST_ASSERT_EQUAL_FLOAT(a, b);
}

