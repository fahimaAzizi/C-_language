#include <iostream>

#include <vector>

int main(){
    std::string name;
   
    int age;
    
    std:: cout << "what's your name?:";
    std::getline(std::cin >> std::ws,name);
   
    std:: cout << "what's your age ?:";
    std:: cin >> age;

    std:: cout << "Hello " <<name<<'\n';
    std:: cout <<"you are "<<age <<" years old";
   
    return 0;

}