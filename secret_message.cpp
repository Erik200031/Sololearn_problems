#include <iostream>
#include <string>

int main(){
    std::string input;
    std::string alphabet;
    std::cout<<"Input Message : \n";
    getline(std::cin,input);
    char ch='a';
    while(ch != 'z'+1){
        alphabet+=ch;
        ch++;
    }
    int tmp;
    for(int i = 0;i<input.size();++i){
        if(input[i] >= 'A' && input[i]<='Z'){
            input[i] +=32;
        }
    }
    for(int i=0;i<input.size();++i){
        if(input[i] != ' '){
        tmp = alphabet.find(input[i]);
        input[i]=alphabet[alphabet.size()-1-tmp];
        }
        
    }
    std::cout<<"\nHere is encoded version :\n";
    std::cout<<input;
    return 0;
}