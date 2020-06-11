
// 템플릿에서는 가상의 형식 이름을 지정해서 알고리즘을 정의해서 함수를 작성하게되면
// 사용하는 곳에 맞게끔 컴파일러에서 실제적인 코드를 전개해준다.
// 사용하기편하게 하지위해 사용한다.

template <typename data>
data *find_max_pos(data *base, size_t n)
{
	size_t mi = 0;
	//...중략...
	return base + mi;
}

template <typename data>
class Array
{
	data *base;
	size_t capacity;
	size_t count;
	//...중략...
};