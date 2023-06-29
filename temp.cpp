#include<stdio.h>

struct Point{
  int x;
  int y;
};
int main() {
    Point p1;
    p1.x = 1;
    p1.y = 3;
    printf("%d \n", p1.x);
    printf("%d \n", p1.y);
    return 0;
}