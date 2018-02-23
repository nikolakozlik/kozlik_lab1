#include<LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <cmath>
#endif
#include <iostream>
#include<string>

int main(int argc,char*argv[]) 
{
double result=0;
double pi=3.14159;
double angle=45;
if(argc>1)
{angle=std::stod(argv[1]);}
double angle_rad=angle*pi/180.0;

 
#ifdef USE_TRIGONOMETRY_DEGREE
std::cout<<degreemath::sin(angle)<<std::endl;
std::cout<<degreemath::cos(angle)<<std::endl;
std::cout<<degreemath::tan(angle)<<std::endl;
std::cout<<degreemath::ctg(angle)<<std::endl; 

#else
std::cout<<degreemath::sin(90)<<std::endl;
std::cout<<degreemath::cos(90)<<std::endl;
std::cout<<degreemath::tan(90)<<std::endl;
std::cout<<degreemath::ctg(90)<<std::endl; 
#endif


std::cout<<result<<std::endl; 
system("pause");
}