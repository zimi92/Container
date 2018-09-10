#pragma once
#include <memory>

template <typename T>
class Contener
{
public:
	Contener::Contener(): m_size(10), m_element_number(0)
	{
		std::unique_ptr<T[]> containerPrefab(new T[m_size]);
		m_contener = std::move(containerPrefab);
	}

	void push_back(T item)
	{
		if (m_element_number + 1 <= m_size)
		{
			m_contener.get()[m_element_number++] = item;
		}
		else
		{
			m_size = m_size * 2;
			std::unique_ptr<T[]> containerPrefab(new T[m_size]);
			for (int iteratorOfContenerElements = 0; iteratorOfContenerElements < m_element_number; ++iteratorOfContenerElements)
			{
				containerPrefab.get()[iteratorOfContenerElements] = m_contener.get()[iteratorOfContenerElements];
			}
			containerPrefab.get()[m_element_number++] = item;

			m_contener = std::move(containerPrefab);
		}
	}

	T& operator [] (int index) 
	{
		if (index < m_element_number) 
		{
			return m_contener.get()[index];
		}
		else 
		{
			throw "out of range";
		}
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