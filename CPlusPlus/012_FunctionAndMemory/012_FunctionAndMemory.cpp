﻿/* 하드디스크에 있던 exe 파일이 Ram에 올라오면 총 4가지 영역으로 나눠서 프로세스가 형성된다
* 맨 위부터 차례대로 코드영역(exe파일), 데이터영역, 힙영역, 스택영역.
   
   -1.코드영역
      상수
      함수의 설계도

   -2. 데이터 영역 추후설명
   -3. 힙영역 추후설명
   -4. 스택영역
       운영체제가 알아서 메모리 할당해줌. (보통 1메가 할당해주고 내가 이 스택영역크기도 조절할수 있지만 안한다) 
       함수의 설계도 대로 실행되는 실행흐름의 메모리가 존재하는곳.
       새로운 실행흐름이 실행되면 메모리가 할당되었다가 종료되면 메모리가 소멸되는 곳

  - 처음 프로그램을 실행하면 스택영역에 main이라는 실행흐름 공간이 만들어진다. 바로 그 main영역 안에 int 지역변수 등등이 할당됨. 당연히 main 실행영역은 지역변수 공간보다 더 크게 메모리가 할당되야함.
    {} 요 중괄호 기호가 바로 실행흐름의 시작과 끝을 표시하는 기호.


*/

void function();

//main scope
int main()
{
    //Unnamed Scope 이름없는 실행영역
    {
        int Value = 100;
    }
    // 이 실행흐름은 main함수 안에서 생기는게 아니다! 이 실행흐름은 main 다음의 스택영역에 새로 할당된다. 따라서 이 Value 변수는 실행흐름이 끝나면 동시에 사라진다.

    //내가 만든 이름있는 실행흐름(함수) 
    //디버깅시 f11은 한 실행흐름을 모두 실행한다. f10은 실행흐름 안의 단계단계까지 세부적으로 살핀다.
    void function();

    

}
//main 실행흐름이 끝나면 스택에 더이상 아무것도 남아 있지 않게되었으니, 프로세스가 끝났다고 운영체제에 알리고 작업이 완료된다.


void function()
{
    int Value = 100;

    {
        int Value = 100;
    }
}