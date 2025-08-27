#include <iostream>
int main () {
    
    int x,y;
    char opt;
    std::cin >> x >> opt >> y;
    switch (opt) {
        case '+':
            std::cout << x + y <<std::endl;
            break;
        case '-':
            std::cout << x - y <<std::endl;
            break;
        case '*':
            std::cout << x * y <<std::endl;
            break;
        case '/':
            if(y==0){
                std::cout << "error"; 
                break;
            }
            std::cout << (float)x / y <<std::endl;
            break;
        default:
            break;
    }

}
