#include <math.h>
#include "unity.h"
#include "unity_fixture.h"
#include "mathlib.h"

TEST_GROUP(TestDistanceBetweenPoints);

TEST_GROUP_RUNNER(TestDistanceBetweenPoints)
{
RUN_TEST_CASE(TestDistanceBetweenPoints, FunctionDistanceBetweenPoints);
}

TEST_SETUP(TestDistanceBetweenPoints)
{
}

TEST_TEAR_DOWN(TestDistanceBetweenPoints)
{
}
//testing distance between points: comparing expected result with a result that we get from the func
TEST(TestDistanceBetweenPoints, FunctionDistanceBetweenPoints)
{
float x1 = 1, x2 = 1, y1 = 1, y2 = 3, a, b;
float dx = x2 - x1;
float dy = y2 - y1;
a = 2;
b = sqrt(dx * dx + dy * dy);

TEST_ASSERT_EQUAL_FLOAT(a, b);

}
