/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:37:06 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/24 12:42:30 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int				value; // elemento a ordenar
	int				index; // indice en la lista de los elementos a ordenar
	int				position; // posicion en la pila
	int				target_position;// posicion objetivo en A de los elem de B
	int				cost_a;// coste de mover el elemento al top de la pila A
	int				cost_b;// coste de mover el elemento al top de la pila B
	struct s_stack	*next;//puntero al siguiente elemento de la lista
}		t_stack;

//statics
t_stack	**get_stack_a(void);
t_stack	**get_stack_b(void);

//swap
void	sa(void);
void	sb(void);
void	ss(void);

//push
void	pa(void);
void	pb(void);
//rotate
void	ra(void);
void	rb(void);
void	rr(void);
//reverse rotate
void	rra(void);
void	rrb(void);
void	rrr(void);

//sort steps utils

void	push_to_stack_b(int *size);//pasa los elemento a stack_b
void	set_stack_positions(t_stack *stack); // asigna una posicion a cada nodo
int		calculate_cost_b(t_stack *stack_b, int size_b);// calcula coste mov
int		calculate_cost_a(t_stack *stack_b, t_stack *stack_a);
t_stack	*get_cheapest_node(void);

//utils
int		absolut (int c);

//stack utils
int		stack_is_sorted(t_stack *stack);

//stack
int	stack_size(t_stack *stack);

#endif
