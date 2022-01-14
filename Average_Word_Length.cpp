#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout<<"Input : ";
    getline(std::cin,input);
    int word_count {1};
    bool flag = true;
    for(int i=0; i<input.size(); ++i) {
        if(input[i]==' '){
            flag = false;
        }
    }
    for(int i=0; i<input.size(); ++i) {
        if(((input[i] < 'A' || input[i] > 'Z') && (input[i] < 'a' || input[i] > 'z')) && (input[i] != ' ')) {
            input.erase(i,1);
            --i;
        }
    }
    for(int i=0; i<input.size(); ++i) {
        if(input[i] == ' '){
            ++word_count;
        }
    }
    double result = (double)(input.size() - 1 - word_count) / word_count;
    double tmp = (int)result;
    if(flag){
        std::cout<<input.size()/1;
    }
    else{
        if(result > tmp) {
            std::cout<<tmp+1;
        }
        else {
            std::cout<<tmp;
        }
    }
}