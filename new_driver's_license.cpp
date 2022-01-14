#include <iostream>
#include <string>

int main() {
int tmpcount{};

    std::string name;
    int agents;
    std::string other_names;
    std::cout<<"Name : ";
    std::cin>>name;
    std::cout<<"Agents : ";
    std::cin>>agents;
    std::cin.get();
    std::cout<<"Other names: ";
    getline(std::cin,other_names);
    if(other_names[0] < name[0]){
        ++tmpcount;
    }
    for(int i=0; i<other_names.size(); ++i){
        if(other_names[i] == ' ' ){
            if(other_names[i+1] < name[0]){
                ++tmpcount;
            }
        }
    }
    std::cout<<tmpcount/agents * 20 + 20;

}