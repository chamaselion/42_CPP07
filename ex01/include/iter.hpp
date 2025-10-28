/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:48:13 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/28 12:40:59 by bszikora         ###   ########.fr       */
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

#endif