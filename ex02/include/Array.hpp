/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:20:04 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/15 09:58:11 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array 
{
	private:
	
		T array;
		unsigned int size;


	public:
	
		Array(): size(0)
		{
			std::cout << "Default constructor called: empty array created." << std::endl;
			this->array = new T[0];
		}

		Array(unsigned int n)
		{
			std::cout << "Constructor called: " << n << " elements array created." << std::endl;
			this->array = new T[n];
		}

		Array(const T &other)
		{
			std::cout << "Copy constructor called." << std::endl;
			*this = other;
		}

		Array &operator=(const T &value)
		{
			std::cout << "Assigment operator called." << std::endl;
			(void)value;
			return *this;
		}

		T &operator[](unsigned int index)
		{
			// ¿Uso el size para medir los límites del index?
		}
};
#endif