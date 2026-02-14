/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:35:41 by bszikora          #+#    #+#             */
/*   Updated: 2026/02/12 23:11:57 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	std::swap(a, b);
}

template <typename T>
const T & min(const T &a, const T &b)
{
	if (a == b)
		return b;
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
const T & max(const T &a, const T &b)
{
	if (a == b)
		return b;
	if (a > b)
		return a;
	else
		return b;
}

#endif