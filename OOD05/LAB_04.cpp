
#include <stdio.h>

// 4. error 수정 ( 기본 생성자 )


class Animal{
public:
    /*
    Animal(){
        this -> numberOfLeg = numberOfLeg;
    }
    */
    Animal(int numberOfLeg){
        this -> numberOfLeg = numberOfLeg;
    }
private:
    int numberOfLeg;
    
    
};

int main(){
    Animal a;
    
    return 0;
}
