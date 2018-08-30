#include "Contener.h"


template <typename T>
Contener::Contener()
{
	///TODO go make pointer smart!!1
}

template<typename T>
void Contener<T>::push_back(T item)
{
	if (m_element_number + 1 <= m_size) 
	{
		m_contener[++m_element_number] = item;
	}
	else
	{
		m_contener
	}
}

template <typename T>
Contener::~Contener()
{
}
