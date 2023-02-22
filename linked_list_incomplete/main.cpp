#include<iostream>
#include<stdlib.h>
#include<tuple>

/*forward declarations*/ 
typedef struct __element element_t;


struct __element
{
    element_t *ptr_next;
    std::tuple<double,double> position;    
};


element_t* list_init(element_t *anchor,double snake_head_x,double snake_head_y)
{
    anchor = (element_t*)malloc(sizeof(struct __element));
    if(anchor == NULL) 
    {
        std::cerr<<"Nullpointer Init";
        exit(1);
    }
    anchor->position = std::make_tuple(snake_head_x,snake_head_y);  
    anchor->ptr_next = NULL;
    return anchor; 
}

int main()
{
    element_t *anchor{};
    anchor = list_init(anchor,0.5,0.5);
    std::cout<< "Position Snake_Head:"<<"("<<std::get<0> (anchor->position)<<","<<std::get<1> (anchor->position)<<")";
    return 0;
}
