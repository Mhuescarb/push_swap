/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_steps_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:50:53 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/17 19:00:31 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_stack_b(int	*size)
{
	pb ();
		(*size)--;
}
void 	set_stack_positions(t_stack	*stack)
{
	int	i;
	i = 0;

	while (stack)
	{
		stack->position = i++;
		stack = stack ->next;
		
	}

}
int 	calculate_cost_b(t_stack *stack_b, int size_b)
{
	int	mittel_i;
	mittel_i = size_b / 2;

	if (stack_b-> position <= mittel_i) //verificamos si la posicion está por encima o por debajo de la media en la pila.
		return (stack_b->position);//si el nodo está en la mitad superior de la pila, el número de movimientos necesarios para llevarlo a la parte superior es igual a su posición en la pila, ya que puedes usar la operación ra() (rotación hacia arriba).
	else 
		return (stack_b-> position - size_b); //calcula cuántos movimientos necesitarás para llevar este nodo a la parte superior de la pila, asumiendo que estás utilizando rra()
}
int	calculate_cost_a (t_stack *stack_b, t_stack *stack_a)
{
	int size_a;
	int	mittel_i;
	
	size_a = stack_size(stack_a);
	mittel_i = size_a/2;

	if (stack_b ->target_position <= mittel_i)
		return (stack_b->target_position);
	else 
		return (stack_b-> target_position - size_a);
}