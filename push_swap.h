/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:37:06 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/07 18:10:53 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>


typedef struct s_node
{
	int		value; // elemento a ordenar
	int		index; // indice en la lista de los elementos a ordenar
	int		position; // posicion en la pila
	int		target_position;// posicion objetivo en A de los elementos de B
	int		a_cost;// coste de mover el elemento al top de la pila A
	int		b_cost;// coste de mover el elemento al top de la pila B
	int		all_cost; // ?
	struct s_node	*next;//puntero al siguiente elemento de la lista
}	t_node;

#endif
