#include <iostream>
#include <vector>
#include <string>
#include "Figures/Figure.hpp"
#include "geometry.hpp"

bool getString(std::string *str){
    char buffer;
    while((buffer = std::cin.get())!='\n'){
        if(buffer == EOF){
            str += EOF;
            return false;
        }
        str += buffer;
    }
    str += EOF;
    return true;
}

int main()
{
    std::string str ="";
    std::vector<Figure*> figures;
    while(getString(&str)){
        figures.push_back(geometry::fromWKT(str));
        //check intersection
        str = "";
    }
    for(Figure *f: figures){
        std::cout << f->toString() << std::endl;
    }
    return 0;
}