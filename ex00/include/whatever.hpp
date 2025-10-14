/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:35:41 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/14 13:45:53 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T strg = a;
	a = b;
	b = strg;
}

template <typename T>
T min(T a, T b)
{
	if (a == b)
		return b;
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T a, T b)
{
	if (a == b)
		return b;
	if (a > b)
		return a;
	else
		return b;
}

#endif