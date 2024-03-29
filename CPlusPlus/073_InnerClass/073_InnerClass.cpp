﻿
#include <iostream>

//이너클래스는 그걸 포함한 외부 클래스와 전혀 관계가 없다. 

class Outclass
{
public:
	class Innerclass
	{
		// OutValue = 20; 이너클래스는 바깥에 있는 함수나 변수를 마음대로 쓸 수 없다. 그냥 서로 관련이 하나도 없다. 
		int InnerValue = 0;
	};

	int OutValue = 0;

	void Function()
	{
		//InnerValue = 30; 외부클래스 역시 내부클래스의 변수와 함수와는 전혀 쓸수없음 서로 관련이 없음.
	}
};


//그럼 대체 서로 영향 줄수있는것도 없고 그냥 밖에다 선언하면 되지 왜 안에다 클래스를 만드나?
//1.외부에 클래스의 존재를 알리기 싫을 경우 private 두고 감추기 (namespace처럼 껍데기 하나 더 만드는것과 비슷)
//2.여러 개념(클래스)을 하나의 개념으로 묶어서 정의하기
//ex) Test:: 치면 안에있는 이너클래스를 전부 파악할수있음. 이렇게 클래스도 외부 클래스에 한군데 모아서 정의해두고 관리하면 편하게 사용 및 유지보수가 가능하다.
//3. 그 클래스(외부클래스) 안에서만 사용되는 개념(이너클래스) 인경우. 

//대표적인 STL 자료구조중에 list 가 이런 이너클래스를 갖고있다. 
//iterator와 node 클래스가 list 클래스 안에 정의되어 있음( <== node는 추측임 정확한 확인필요)
