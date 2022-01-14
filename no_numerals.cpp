#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string input;
    std::cout<<"Input : \n";
    std::vector<std::string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    getline(std::cin,input);
    char tmp;
    for(int i=0; i<input.size(); ++i){
        if(input[i] == '1' && input[i+1] == '0'){
            input.erase(i,2);
            input.insert(i,numbers[10]);
        }
        else if(input[i] >= '0' && input[i] <= '9'){
            tmp = input[i];
            input.erase(i,1);
            input.insert(i,numbers[int(tmp)-'0']);
        }
    }
    std::cout<<input;


    return 0;
}