/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   statics.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:38:07 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/10 12:41:42 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**get_stack_a(void)
{
	static t_stack	*stack_a;

	return (&stack_a);
}

t_stack	**get_stack_b(void)
{
	static t_stack	*stack_b;

	return (&stack_b);
}
