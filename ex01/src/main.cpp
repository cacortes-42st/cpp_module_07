/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 11:12:31 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/13 18:24:25 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_print(const char &c)
{
	std::cout << c;
}

void	ft_toupper(char &c)
{
	c = toupper(c);
}

int	main(void)
{
	std::cout << "\n===== DEFAULT TEST ====="<< std::endl;

	char dummy1[] = "hi there!";

	std::cout << "\nOld string: " << dummy1 << std::endl;
	iter(dummy1, 9, ft_toupper);
	std::cout << "\nNew string: " << dummy1 << std::endl;


	std::cout << "\n===== CONST TEST ====="<< std::endl;

	const char dummy2[] = "bye there!";

	std::cout << "\nResult: "; 
	iter(dummy2, 10, ft_print); 
	std::cout << std::endl;
}