﻿// 문자를 표현하는 방식 - 특정글자를 정수 1개와 매칭한다.

#include <iostream>

int main()
{
    'A';

    //1바이트 문자형(아스키코드) 알파벳 정도만 표현.
    char Ch = 'A';
    
    //2바이트 문자형(유니코드). 문자앞에 L을 붙여야 2바이트 문자형이라고 인식. L없으면 1바이트 문자형이라고 인식. 중국어는 되는데 아랍어는 안됨.
    wchar_t wch = L'A';

    //유니코드에도 한계가 있어서 국가 코드라는게 생김. UTF-8 이라는 다국어 지원 문자형 탄생.
    //글자를 1 2 3 4바이트로 표현(어떤 글자는 1바이트, 어떤글자는 2바이트 이렇게 가변적으로 메모리를 쓰는 똑똑한 자료형)
    //C++ 14버전 이상부터 사용가능
    char Arr = u8'a';

    //아스키 - 255개만 표현
    //멀티바이트 - 어떤건 1바이트 어떤건 2바이트 (UTF-8, UTF-16, UTF-32 등등)
    //와이드 바이트 -  모두다 2바이트(유니코드)
}
         