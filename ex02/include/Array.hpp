/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:20:04 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/16 10:50:17 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template <typename T>
class	Array 
{
	private:
	
		T *array;
		unsigned int _size;


	public:
	
		Array(): _size(0)
		{
			std::cout << "Default constructor called: empty array created." << std::endl;
			this->array = new T[0];
		}

		Array(unsigned int n) : _size(n)
		{
			std::cout << "Constructor called: " << n << " elements array created." << std::endl;
			this->array = new T[n]();
		}

		Array(const Array &other) : _size(other._size)
		{
			std::cout << "Copy constructor called." << std::endl;
		
			this->array = new T[this->_size];

			for (unsigned int i = 0; i < this->_size; i++)
				this->array[i] = other.array[i];
		}

		Array &operator=(const Array &value)
		{
			std::cout << "Assigment operator called." << std::endl;

			if (this == &value)
				return *this;

			delete[] this->array;

			this->_size = value._size;
			this->array = new T[this->_size];

			for (unsigned int i = 0; i < this->_size; i++)
				this->array[i] = value.array[i];
			return *this;
		}

		~Array()
		{
			std::cout << "Destructor called." << std::endl;
			delete[] this->array;
		}

		
		T &operator[](unsigned int index)
		{
			if (index >= this->_size)
				throw OutIndexException();
			return this->array[index];
		}

		const T &operator[](unsigned int index) const
		{
			if (index >= this->_size)
				throw OutIndexException();
			return this->array[index];
		}
				
		
		unsigned int size(void) const
		{
			return this->_size;
		}
		
		class	OutIndexException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "The index is out of bounds.";
				}
		};
};
#endif