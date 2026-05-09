#include <iostream>

int main (){

    std::string car[] = {"BMW","toyata","ford","honda"};
    std::cout << car[0] << std::endl;
 
    for(int i = 0; i < 4; i++){
        std::cout << car[i] << std::endl;
    }

    std::cout << "*************better way to do this **************"<< std::endl;
    for(int i =0 ; i < sizeof(car)/sizeof(car[0]);i++){ //size of the array / size of one element in the array
        std::cout << car[i] << std::endl;
    }

    return 0;
}