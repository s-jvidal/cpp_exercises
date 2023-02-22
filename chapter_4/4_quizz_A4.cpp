#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string_view>

double calc_dist(double g,double time)
{   
    return (0.5*g*time*time);
}

double get_double()
{ 
    double x{};
    std::cin>>std::ws>>x; 
    return x;
}

int main()
{
    constexpr double gravity = 9.8;
    double time{};
    double height{get_double()};
    double new_height{height};
    do
    {
        new_height = height - calc_dist(gravity,time);
        std::cout<<"At "<<time<<" seconds,the ball is at height: "<<new_height<<"\n";
        time++;
    }
    while(calc_dist(gravity,time) < height);
    std::cout<<"At "<< time<<" seconds, the balls is on the ground.";


}