﻿
#include <iostream>

//상속한 클래스는 그냥 상속했던 맴버들을 모두 갖고있음. 그냥 보이지 않을뿐임

class A
{
public:
    __int64 a = 0;
    A()
    {
        printf_s("A 생성자\n");
    }

    ~A()
    {
        printf_s("A 소멸자\n");
    }

};
class B : public A
{
public:
    char b = 0;
    B()
    {
        printf_s("B 생성자\n");
    }

    ~B()
    {
        printf_s("B 소멸자\n");
    }

};

int main()
{
    sizeof(B); // 1 바이트가 아니라 16 바이트로 뜬다.
    B NewB = B(); //상속했던 A생성자가 먼저 실행되고 그다음 상속된 B생성자가 실행됨.
    NewB.~B();//소멸자로 소멸할때는 생성과는 반대로 자식이 먼저 소멸되고 부모가 소멸됨.

    //소멸자는 '~클래스이름'으로 하는게 문법으로 정해져있다 다른 이름은 인정안됨
    //근데 소멸자는 공부용이고 실제론 안씀. 메모리 소멸관리는 컴파일러가 알아서 해주는 거지 이걸 쓰면 안되는게 일반적인 상식이다.
    //소멸자는 컴파일러가 아닌 프로그래머가 직접호출을 한다고 메모리가 파괴되는 것도 확정이 아니여서 예측불가임 그래서 안씀
    //소멸자 특징 : 인자를 못넣어줌.


}

