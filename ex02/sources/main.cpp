/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszikora <bszikora@student.42helbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:16:46 by bszikora          #+#    #+#             */
/*   Updated: 2025/10/28 13:13:59 by bszikora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	// test default constructor
	Array<int> empty;
	std::cout << "Empty array size: " << empty.sizef() << std::endl;
	
	// test parameterized constructor
	Array<int> arr(5);
	std::cout << "Array size: " << arr.sizef() << std::endl;
	
	// Fill array with values
	for (unsigned int i = 0; i < arr.sizef(); i++)
		arr[i] = i * 2;
	
	// Display array contents
	std::cout << "Array contents: ";
	for (unsigned int i = 0; i < arr.sizef(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	
	// test copy constructor
	Array<int> copy(arr);
	std::cout << "Copy size: " << copy.sizef() << std::endl;
	
	// test assignment operator
	Array<int> assigned;
	assigned = arr;
	std::cout << "Assigned size: " << assigned.sizef() << std::endl;
	
	// test bounds checking
	try {
		arr[10] = 42;
	}
	catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	return 0;
}
