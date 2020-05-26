#pragma once
class DCArray
{
	int *base; // 버퍼
	int bcapacity;//버퍼크기
	int usage; // 보관 개수
public:
	DCArray(int usage = 0, int data =0);
	DCArray(const DCArray &src);
	~DCArray();
	void Copy(const DCArray &src);
	DCArray &operator = (const DCArray &src);
	int &operator[] (int index);
	bool IsAvailIndex(int index)const;
private:
	void Init();
};

