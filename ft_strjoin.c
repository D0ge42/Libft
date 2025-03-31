/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:26:56 by lorenzo           #+#    #+#             */
/*   Updated: 2024/08/13 18:26:58 by lorenzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char *line, char *stash)
{
  char *dest;
  int i;
  int j;

  dest = malloc(sizeof(char) * (ft_strlen(line) + ft_strlen(stash) + 1));
  i = 0;
  j = 0;
  while(line && line[i])
    dest[j++] = line[i++];
  i = 0;
  while(stash && stash[i])
    dest[j++] = stash[i++];
  free(line);
  dest[j] = '\0';
  return dest;
}
