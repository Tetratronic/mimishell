/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkaro <abenkaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:24:48 by abenkaro          #+#    #+#             */
/*   Updated: 2025/04/23 14:24:51 by abenkaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlude "minishell.h"

int	echo(char **args)
{
	int	nflag;

	nflag = 0;
	if (args && **args == '-')
	{
		if (*(*args + 1) == 'n')
		{
			nflag = 1;
			args++;
		}
		else if (*(*args + 1) == ' ')
			args++;
	}
	while (*args && *(args + 1))
		printf("%s ", *args++);
	printf("%s", *args);
	if (!nflag)
		printf("%c", '\n');
	return (0);
}
