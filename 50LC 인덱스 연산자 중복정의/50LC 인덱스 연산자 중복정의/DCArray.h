#pragma once
class DCArray
{
	int *base; // ����
	int bcapacity;//����ũ��
	int usage; // ���� ����
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

