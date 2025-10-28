/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:48:00 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/28 12:51:57 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print_int(const int& n) { std::cout << n << " "; }

void increment_int(int& n) { n++; }

void print_string(const std::string& s) { std::cout << s << " "; }

int main()
{
	int numbers[] = {1, 2, 3, 4, 5};
	std::cout << "Original numbers: ";
	iter(numbers, 5, print_int);
	std::cout << std::endl;


	iter(numbers, 5, increment_int);
	std::cout << "After increment: ";
	iter(numbers, 5, print_int);
	std::cout << std::endl;

	std::string words[] = {"Hello", "World", "!"};
	std::cout << "Words: ";
	iter(words, 3, print_string);
	std::cout << std::endl;

	return 0;
}