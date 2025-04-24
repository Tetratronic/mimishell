/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkaro <abenkaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:39:07 by abenkaro          #+#    #+#             */
/*   Updated: 2025/04/24 10:48:15 by abenkaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>

int	main(int argc, char **argv, char **envp)
{
	char	*line;

	while (1)
	{
		line = readline("minishell> ");
		if (!line)
			break ;
		if (strlen(line))
		{
			add_history(line);
			//parse
		}
		if ()
		free(line);
	}
	return (0);
}
