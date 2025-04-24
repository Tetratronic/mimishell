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

#include "minishell.h"

int	main(void)
{
	char	*line;
	char	**broken;

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
		broken = ft_split(line, ' ');
		if (!ft_strncmp(broken[0], "pwd", 4))
			pwd();
		else if (!ft_strncmp(broken[0], "cd", 3))
			cd(broken[1]);
		free(line);
	}
	return (0);
}
