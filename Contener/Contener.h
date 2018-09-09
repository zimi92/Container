#pragma once
#include <memory>

template <typename T>
class Contener
{
public:
	Contener::Contener(): m_size(10), m_element_number(0)
	{
		std::shared_ptr<T[]> cont(new T[10]);
		m_contener = std::move(cont);
	}

	void push_back(T item)
	{
		if (m_element_number + 1 <= m_size)
		{
			m_contener.get()[m_element_number++] = item;
		}
		/*else
		{
			for (auto iteratorOfContenerElements)
			{
				*contener = iteratorOfContenerElements;
				++contener;
			}
		}*/
	}

	T read(int index) 
	{
		return m_contener.get()[index];
	}

	~Contener() {};

private:
	int m_size;
	int m_element_number;
	std::shared_ptr<T[]> m_contener;
};