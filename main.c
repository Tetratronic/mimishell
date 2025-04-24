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

t_list	*copy_env(char **env)
{
	t_list	*result;
	t_list	*line;
	int		i;

	i = 0;
	result = NULL;
	while (env && env[i])
	{
		line = ft_lstnew(ft_strdup(env[i++]));
		ft_lstadd_back(&result, line);
	}
	return (result);
}

int	display_env(t_list	*env)
{
	while (env)
	{
		printf("%s\n", (char *)env->content);
		env = env->next;
	}
	return (0);
}

int	main(int argc, char **argv, char **env)
{
	char	*line;
	char	**broken;
	t_list	*envl;

	if (argc > 1)
		return (1);
	if (argv)
		;
	envl = copy_env(env);
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
		else if (!ft_strncmp(broken[0], "env", 4))
			display_env(envl);
		free(line);
	}
	return (0);
}
