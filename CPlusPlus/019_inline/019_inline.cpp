﻿/*
inline은 스택영역에 실행흐름을 만들었다 삭제했다 해서 작업시간을 느리게 하지 말고 컴파일 할때 처음부터 메인함수에 코드를 복붙해 달라는 명령어이다.
그러면 사람은 코드칠때는 가독성, 생산성이 증가하고 막상 컴퓨터는 실행흐름을 만들지 않아서 좋은 퍼포먼스얻고 일거양득
*/
#include <iostream>

//컴파일러 판단에 따라 inline(복붙)이 안될수도 있다. 컴파일러 마음임. 즉, 컴파일러보고 최적화 할수 있으면 해주세요 라는 명령어가 inline 이다.
//빨라질 수도 아닐수도 있지만 그래도 빨라질걸 기대하고 습관적으로 사용하는게 좋지만 컴파일 시간이 너무 느려질거 같으면 안붙일 수도 있음
inline void Test()
{
    printf_s("Function");
}

int main()
{
    Test();
}



