/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:16:57 by bszikora          #+#    #+#             */
/*   Updated: 2026/02/13 00:01:38 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>
class Array
{
private:
	T				*elements;
	unsigned int	m_size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();
	
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	
	unsigned int size() const;
	
	class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

template <typename T>
Array<T>::Array() : elements(NULL), m_size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : elements(NULL), m_size(n)
{
	if (n > 0)
	{
		elements = new T[n];
		for (unsigned int i = 0; i < n; i++)
			elements[i] = T();
	}
}

template <typename T>
Array<T>::Array(const Array& other) : elements(NULL), m_size(other.m_size)
{
	if (m_size > 0)
	{
		elements = new T[m_size];
		for (unsigned int i = 0; i < m_size; i++)
			elements[i] = other.elements[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] elements;
		m_size = other.m_size;
		elements = NULL;
		if (m_size > 0)
		{
			elements = new T[m_size];
			for (unsigned int i = 0; i < m_size; i++)
				elements[i] = other.elements[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= m_size)
		throw OutOfBoundsException();
	return elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= m_size)
		throw OutOfBoundsException();
	return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return m_size;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "Array index out of bounds";
}

#endif