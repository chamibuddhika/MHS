#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct Point {
    double x, y;
} Point;

// P(x)
int circle(Point p) {
    if (sqrt(p.x*p.x + p.y*p.y) <= 1) {
        return 1;
    } else {
        return 0;
    }
}

// Q(x)
int rectangle(Point p) {
    if (p.x <= 1 && p.y <= 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    time_t t;
    srand((unsigned) time(&t));

    // x(o)
    Point p;
    p.x= (double)rand() / (double)RAND_MAX;
    p.y = (double)rand() / (double)RAND_MAX;

    for (int i =0 ; i < 100; i++) {
      // Calculate a here
      double a;

      // Calculate the new point
      // Point p_1 = // Q(p);
      Point p_1;

      if (a >= 1) {
        p = p_1;
      } else {
        double newRand =(double)rand();
        if (newRand < a) {
          p = p_1;
        }
      }
    }
}
