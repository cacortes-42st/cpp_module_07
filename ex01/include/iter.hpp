/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 11:15:09 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/13 18:11:38 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define	ITER_HPP

#include <string>
#include <iostream>

template <typename I>
void	iter(I *array, const size_t Alenght, void(*funct)(I&))
{
	if (array == NULL || funct == NULL)
		return ;
	for (size_t i = 0; i < Alenght; i++)
		funct(array[i]);
}

template <typename I>
void	iter(const I *array, const size_t Alenght, void(*funct)(const I&))
{
	if (array == NULL || funct == NULL)
		return ;
	for (size_t i = 0; i < Alenght; i++)
		funct(array[i]);
}

#endif