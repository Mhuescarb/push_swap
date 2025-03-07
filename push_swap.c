/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:11:14 by mhuescar          #+#    #+#             */
/*   Updated: 2025/03/07 18:11:53 by mhuescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char const *argv[])
{

	int patata[2] = {1, 2};
	patata[0] = 1;
	patata[1] = 2;


	t_node stack[2];
	t_node nodo2 = {2, 1, 1, 0, 0, 0, 0, NULL};
	t_node nodo1 = {1, 0, 0, 0, 0, 0, 0, &nodo2};
	stack[0] = nodo1;
	stack[1] = nodo2;

	return 0;
}
