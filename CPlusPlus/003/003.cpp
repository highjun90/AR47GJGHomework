// 003.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.


/*
솔루션 내에 프로젝트 여려개면 실행할 프로젝트 이름 위에 마우스 오른클릭으로 '시작프로젝트로 설정'해줘야 f5누르면 그 프로젝트만 실행됨 딴프로젝트는 실행안됨
ctrl + shift + g = #전처리기 원본파일로 이동

모든 프로그램은 순서대로 실행됨 객체지향, 함수, 절차지향 다 마찬가지 약간의 방식이 다른것
프로그램의 시작점을 진입점이라고 하고 int main()이 디폴트
진입점(main 함수)를 바꿀순 있으나 아무도 안함

ide = 전처리기 -> 컴파일러 -> 어셈블러 -> 링커
전처리기 : 주석삭제, 전처리문 처리 후 컴파일러에 전달
전처리문처리 == 전처리문 원본코드 복붙

프로그램 = 설계도 = exe 파일, 하드디스크에 존재
프로세스 = 실제구현된 데이터, ram 상에 존재

f5는 비주얼 스튜디오가 감시해주고 ctrl f5는 안해주는 디버깅임.

비주얼 스튜디오 줄번호 안나올때 나오게 하는법 도구 - 옵션 - 텍스트편집기 - c/c++ - 줄 번호(L) 체크
비주얼 스튜디오 옆에 사진 스크롤 나오게 하는법 도구 - 옵션 - 텍스트편집기 - c/c++ - 스크롤 막대 - 세로 스크롤 막대에 지도모드사용 체크

*/



#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
