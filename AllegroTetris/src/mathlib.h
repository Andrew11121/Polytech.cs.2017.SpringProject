#ifndef MATHLIB_H
#define MATHLIB_H
#include <stdbool.h>	
#ifdef __cplusplus
   extern "C" 

#endif

#define PI (3.14159265358979323846)
#define TWO_PI (PI * 2)
#define HALF_PI (PI / 2)
#define TRUE 1
#define FALSE 0

#define DEG2RAD(DEG) ((DEG)*((PI)/(180.0)))
#define RAD2DEG(RAD) ((RAD)*((180.0)/(PI)))

typedef struct 
{
    float x, y;
} point;

typedef struct 
{
    float x, y;
    float w, h;
} rect;

typedef struct 
{
    float x, y;
    float r;
} circle;

typedef struct {
    float dx, dy;
} velocity;

float angle_between_points(float x1, float y1, float x2, float y2);



bool rectangles_intersect(float l1, float t1, float r1, float b1, float l2, float t2, float r2, float b2);

bool rectangle_contains_point(float l, float t, float r, float b, float x, float y);



bool rectangles_intersect_ex(const rect* r1, const rect* r2);
bool rectangle_contains_point_ex(const rect* r, const point* p);

#ifdef __cplusplus
   }
#endif

#endif
