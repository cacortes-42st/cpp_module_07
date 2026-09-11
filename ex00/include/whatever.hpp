/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:48:40 by cacortes          #+#    #+#             */
/*   Updated: 2026/09/11 11:20:51 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>
#include <string>

template <typename S>
void	swap(S &a, S &b)
{
	S	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename N>
const N	min(const N &a, const N &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename X>
const X	max(const X &a, const X &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif