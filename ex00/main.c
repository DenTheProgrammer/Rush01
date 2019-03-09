/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazalee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 18:55:02 by sazalee           #+#    #+#             */
/*   Updated: 2019/03/09 20:56:42 by sazalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int		main(int argc, char **argv)
{
	char puzzle[9][9];

	if(!(checkline(argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	field(argv + 1, puzzle);
	solution(puzzle);
	printpuzzle(puzzle);
	return (0);
}
