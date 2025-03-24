/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:44:17 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/24 12:08:33 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_is_sorted(t_stack *stack)
{
	while(stack && stack->next)//mientras E stack y tenga más de un elemento.
	{
		if(stack->value > stack->next->value)//si el valor actual > al siguiente
			return (0);//la pila no está ordenada
		stack = stack->next;//avanza al siguiente nodo
	}
	return (1); //la pila está ordenada
}