
#include "unity.h"
#include "unity_fixture.h"
#include "mathlib.h"
#include <math.h>
#include <stdbool.h>


TEST_GROUP(TestCircleContainsPoint);

TEST_GROUP_RUNNER(TestCircleContainsPoint)
{
RUN_TEST_CASE(TestCircleContainsPoint, FunctionCircleContainsPoint);
}

TEST_SETUP(TestCircleContainsPoint)
{
}

TEST_TEAR_DOWN(TestCircleContainsPoint)
{
}

TEST(TestCircleContainsPoint, FunctionCircleContainsPoint)

{
float x1=2, y1=1, r=8, x2=7, y2=5 ;
float rec, a=1;

  float dx = x2 - x1;
  float dy = y2 - y1;
  if ((dx * dx + dy * dy) < (r * r))
  rec = 1;
TEST_ASSERT_EQUAL_FLOAT( rec, a);
}



