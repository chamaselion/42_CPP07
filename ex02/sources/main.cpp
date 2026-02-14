/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:16:46 by bszikora          #+#    #+#             */
/*   Updated: 2026/02/14 15:21:24 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	// test default constructor
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;
	
	// test parameterized constructor
	Array<int> arr(5);
	std::cout << "Array size: " << arr.size() << std::endl;
	
	// Fill array with values
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = i * 2;
	
	// Display array contents
	std::cout << "Array contents: ";
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	
	// test copy constructor
	Array<int> copy(arr);
	std::cout << "Copy size: " << copy.size() << std::endl;
	std::cout << "Copy[0]: " << copy[0] << std::endl;
	std::cout << "Copy[4]: " << copy[4] << std::endl;
	
	// test assignment operator
	Array<int> assigned;
	assigned = arr;
	std::cout << "Assigned size: " << assigned.size() << std::endl;
	
	// test bounds checking
	try {
		arr[10] = 42;
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	return 0;
}
