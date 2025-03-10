/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:37:06 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/10 12:48:50 by mhuescar         ###   ########.fr       */
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
	int				a_cost;// coste de mover el elemento al top de la pila A
	int				b_cost;// coste de mover el elemento al top de la pila B
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

#endif
