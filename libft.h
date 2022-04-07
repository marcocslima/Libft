/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:28:41 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/07 21:49:42 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <string.h>
# include <strings.h>
# include <bsd/string.h>

// <ctype.h> functions:
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

// <string.h> functions:
// Memory:
int		ft_memcmp(const void *s1, const void *s2, size_t size);
void	*ft_memchr(const void *s, int c, size_t size);
void	*ft_memset(void *s, int c, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
// Strings:
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
// BSD (<bsd/string.h>):
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t size);

// <stdlib.h> functions:
int		ft_atoi(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);

// <strings.h> functions:
void	ft_bzero(void *s, size_t size);    // Deprecated; use memset instead

#endif