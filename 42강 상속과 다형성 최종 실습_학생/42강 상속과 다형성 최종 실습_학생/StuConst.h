#pragma once

// 정적 상수화 멤버들을 정리해 놓은 클래스
// -> java에서 정적클래스라 불림
// 여러 클래스에서 공통으로 사용해야할 변수들
class StuConst
{
public:
	static const int def_iq;
	static const int max_iq;
	static const int min_iq;

	static const int def_hp;
	static const int max_hp;
	static const int min_hp;

	static const int def_stress;
	static const int max_stress;
	static const int min_stress;

	static const int def_scnt;
	static const int max_scnt;
	static const int min_scnt;

private: // 개체를 생성할 수 없게 함
	StuConst(void);
};

