/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:20:30 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/16 11:49:06 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream> 
#include <string>
#include <cstdlib>

#define MAX_VAL 750
int main(int, char**)
{
    
    std::cout << "\n===== DEFAULT TESTS =====" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }


	std::cout << "\n===== DEEP COPY TEST =====" << std::endl;
    
	Array<int> assigned(3);

	assigned[0] = 100;
	assigned[1] = 200;
	assigned[2] = 300;

	assigned = numbers;

	std::cout << "assigned[0] before modification: "
				<< assigned[0] << std::endl;

	assigned[0] = 1234;

	std::cout << "numbers[0] after modifying assigned: "
				<< numbers[0] << std::endl;

	std::cout << "assigned[0] after modification: "
				<< assigned[0] << std::endl;


	std::cout << "\n===== EMPTY ARRAY TEST =====" << std::endl;
	Array<int> empty;

	std::cout << "Size: " << empty.size() << std::endl;

	try
	{
		std::cout << empty[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	
	std::cout << "\n===== DEFAULT INITIALIZATION TEST =====" << std::endl;

	Array<int> numbs(5);

	std::cout << "Size: " << numbs.size() << std::endl;

	for (unsigned int i = 0; i < numbs.size(); i++)
		std::cout << "numbs[" << i << "] = " << numbs[i] << std::endl;


    std::cout << "\n===== END =====" << std::endl;
    delete [] mirror;
    return 0;
}