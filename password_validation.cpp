#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout<<"Create password : ";
    std::cin>>input;
    int special_characters_count {};
    int number_count {};
    const std::string special_characters {"!@#$%&*"};
    for(int i=0; i<input.size(); ++i) {
        for(int j=0; j<special_characters.size(); ++j) {
            if(input[i] == special_characters[j]) {
                ++special_characters_count;
            }
        }
        if(input[i] >= '0' && input[i] <= '9') {
            ++number_count;
        }
    }
    if(special_characters_count >= 2 && number_count >= 2 && input.size() >= 7 ) {
        std::cout<<"Strong";
    }
    else {
        std::cout<<"Weak";
    }
}
