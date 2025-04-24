/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkaro <abenkaro@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:08:35 by abenkaro          #+#    #+#             */
/*   Updated: 2025/04/23 15:08:37 by abenkaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	pwd(void)
{
	char	cwd[PATH_MAX];
	size_t	size;

	size = 0;
	if (getcwd(cwd, PATH_MAX))
		printf("%s\n", cwd);
	else
	{
		perror("pwd");
		return (1);
	}
	return (0);
}
