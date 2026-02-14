/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:48:13 by bszikora          #+#    #+#             */
/*   Updated: 2026/02/12 23:44:43 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T, typename F>
void iter(T* array, size_t length, F func)
{
	if (!array)
		return;

	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

template<typename T>
void iter(T* array, size_t length, void (*func)(T const &))
{
	if (!array)
		return;

	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

template<typename T>
void iter(T const* array, size_t length, void (*func)(T const &))
{
	if (!array)
		return;

	for (size_t i = 0; i < length; i++)
	{
		func(array[i]);
	}
}

// template<typename T>
// 	void cmon_do_smg(T &a)
// 	{
// 		std::cout << a << std::endl;
// 	}

#endif