#pragma once
template <typename T>
class Contener
{
public:
	Contener() : m_size(0), m_element_number(0);
	void push_back(T item);
	~Contener();
private:
	int m_size;
	int m_element_number;
	T m_contener[];
};

