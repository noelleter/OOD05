//
//  main.cpp
//  OOD05
//
//  Created by 김노은 on 30/09/2019.
//  Copyright © 2019 Noeun-Kim. All rights reserved.
//

#include <iostream>
using namespace std;
int i;

// i 값이 3 나옴
class A{
public:
    ~A(){
        i = 10;
    }
};

int foo(){
    i = 3;
    A ob;
    return i;
}

int main() {
    cout << foo() << endl;
    return 0;
}

/*
 2. i 값이 10 출력되도록 하는 것 ( 레퍼런스 활용 )
 
 class A{
 public:
 ~A(){
 i = 10;
 }
 };
 
 int& foo(){
 i = 3;
 A ob;
 return i;
 }
 
 int main() {
 cout << foo() << endl;
 return 0;
 }
 */
