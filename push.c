/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:43:10 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/10 13:06:33 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push(t_stack **s_receiver, t_stack **s_sender);

void	pa(void)
{
	if (push(get_stack_a(), get_stack_b()))
		printf("pa\n");
}

void	pb(void)
{
	if (push(get_stack_b(), get_stack_a()))
		printf("pb\n");
}

static int	push(t_stack **s_receiver, t_stack **s_sender)
{
	t_stack	*temp;

	if (!*s_sender)
		return (0);
	temp = (*s_sender)-> next;
	(*s_sender)-> next = *s_receiver;
	*s_receiver = *s_sender;
	*s_sender = temp;
	return (1);
}
