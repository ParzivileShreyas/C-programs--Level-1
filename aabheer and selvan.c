#include<stdio.h>
struct Distance
{
 int feet;
 float inch;
};
int main()
{
 struct Distance d1,d2,sumOfDistances;
 scanf("%d %f",&d1.feet,&d1.inch);
 scanf("%d %f",&d2.feet,&d2.inch);
 sumOfDistances.feet=d1.feet+d2.feet;
 sumOfDistances.inch=d1.inch+d2.inch;
 printf("%d feet and %0.2f inches",sumOfDistances.feet,sumOfDistances.inch);
 return 0;
}