/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:20:04 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/14 21:43:01 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class	Array 
{
	private:
	
		T array;
		unsigned int size = 0;


	public:
	
		Array()
		{
			std::cout << "Default constructor called: empty array created." << std::endl;
			this->array = new T[0];
		}

		Array(unsigned int n)
		{
			std::cout << "Constructor called: " << n << " elements array created." << std::endl;
			this->array = new T[n];
		}

		Array(const T &other);

		Array &operator=(const T &value);


};
#endif