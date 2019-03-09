/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazalee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 18:21:31 by sazalee           #+#    #+#             */
/*   Updated: 2019/03/09 19:29:10 by sazalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <header.h>

int		ft_strlen(char *str)
{
	int legth;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int		checkline(char *str)
{
	int i;

	i = 0;
	if (ft_strlen(str) !=  9)
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '9') || (str[i] == '.'))
			i++;
		else
			return (0);
	}
	return (1);
}

int		checkinput(int argc, char **argv)
{
	if (argc != 10)
		return (0);
	int start;
	start = 1;
	while (i < 10)
	{
		if (!(checkline(argv[start])))
			return (0);
		start++;
	}
	return (1);
}
