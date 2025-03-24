/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:41:45 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/24 12:55:00 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *stack)
{
	if (!stack)
		return (0);
	return (stack_size(stack->next)+1);
}
int stack_size (t_stack *stack)
{
	int	size;
	
	size = 0;
	while (stack)
	{
	size ++;
	stack = stack->next;
	}
	return(size);
}