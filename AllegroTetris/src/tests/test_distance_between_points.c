#include <math.h>
#include "unity.h"
#include "unity_fixture.h"
#include "mathlib.h"

TEST_GROUP(TestDistanceBetweenPoints);

TEST_GROUP_RUNNER(TestDistanceBetweenPoints)
{
RUN_TEST_CASE(TestDistanceBetweenPoints, FuncionDistanceBetweenPoints);
}

TEST_SETUP(TestDistanceBetweenPoints)
{
}

TEST_TEAR_DOWN(TestDistanceBetweenPoints)
{
}

TEST(TestDistanceBetweenPoints, FuncionDistanceBetweenPoints)
{
float x1, x2, y1, y2;
float dx = x2 - x1;
float dy = y2 - y1;
return sqrt(dx * dx + dy * dy);

TEST_ASSERT_EQUAL_INT( 100, 100);

}
