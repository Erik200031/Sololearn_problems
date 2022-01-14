#include <iostream>
#include <string>
int main(){
    std::string input;
    std::cout<<"Input : ";
    std::cin>>input;
    std::string tmp;
    for(int i=0; i<input.size(); ++i) {
        if(input[i] != 'x'){
            tmp.push_back(input[i]);
        }
    }
    bool flag = true;
    for(int i=0; i<tmp.size(); ++i) {
        if(tmp[i] == '$' && (tmp[i-1] == 'T' || tmp[i+1] == 'T')) {
            flag = false;
        }
        else if(tmp[i] == '$' && tmp[i-1] != 'T' && tmp[i+1] != 'T'){
            flag = true;
        }
    }
    if(flag == true) {
        std::cout<<"quiet";
    }
    else if(flag == false) {
        std::cout<<"ALARM";
    }
}