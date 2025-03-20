/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_steps_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:50:53 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/20 12:16:54 by mhuescar         ###   ########.fr       */
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

t_stack *get_cheapest_node(void)
{
	t_stack	*stack_b; 
	t_stack	*cheapest_node; // se almacena el puntero con menos coste
	
	int	cheapest_cost; 
	int	total_cost;
	
	stack_b = *get_stack_b();//Obtenemos la cabeza de la pila 'b' llamando a la función 'get_stack_b()
	if (!stack_b)
		return (NULL);
		
	cheapest_node = NULL;
	cheapest_cost = INT_MAX; // cualquier costo será menor que este valor
	
	while(stack_b)//recorremos todos los nodos de la pila
	{
		total_cost = absolut(stack_b->cost_a) + absolut(stack_b->cost_b);
		
		if(!cheapest_node || total_cost < cheapest_cost)
		{
			cheapest_cost = total_cost;//actualizamos al nuevo coste mas bajo
			cheapest_node = stack_b;// actualizamos cheapest_node para que apunte al actual.
		}
		stack_b = stack_b->next;//avanzamos al siguiente nodo de la pila
	}
	
	return cheapest_node;
	
	
}