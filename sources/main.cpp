#include<LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <cmath>
#endif
#include <iostream>

int main() {
double result=0;
double pi=3.14159;
 
#ifdef USE_TRIGONOMETRY_DEGREE
result = cos(45.0);
#else
result = cos(pi/4.0);
#endif

/*std::cout<<degreemath::sin(90)<<std::endl;
std::cout<<degreemath::cos(90)<<std::endl;
std::cout<<degreemath::tan(90)<<std::endl;
std::cout<<degreemath::ctg(90)<<std::endl; */

std::cout<<result<<std::endl; 
}