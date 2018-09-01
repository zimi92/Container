#pragma once
#include <memory>

template <typename T>
class Contener
{
public:
	Contener::Contener(): m_size(0), m_element_number(0)
	{
		m_contener = std::make_shared<T>(new T(8));
	}

	void Contener<T>::push_back(T item)
	{/*
		if (m_element_number + 1 <= m_size)
		{
			m_contener[++m_element_number] = item;
		}
		else
		{
			T contener = std::make_shared<T>(m_element_number * 2);
			for (auto iteratorOfContenerElements : m_contener) 
			{
				*contener = iteratorOfContenerElements;
				++contener;
			}
			m_contener
		}*/
	}

	~Contener() {};

private:
	int m_size;
	int m_element_number;
	std::shared_ptr<T> m_contener;
};