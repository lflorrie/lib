/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflorrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:38:52 by lflorrie          #+#    #+#             */
/*   Updated: 2020/11/13 14:43:04 by lflorrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

size_t				ft_strlen(const char *str);

int					ft_toupper(int c);

int					ft_tolower(int c);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

char				*ft_strdup(const char *str);

char				*ft_strcpy(char *dist, char *source);

void				*ft_memset(void *s, int c, size_t n);

void				ft_bzero(void *s, size_t n);

void				*ft_memcpy(void *dist, void *source, size_t n);

int					ft_strncmp(char *lhs, char *rhs, size_t n);

size_t				ft_strlcpy(char *dest, const char *src, size_t n);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(char *s, int c);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

char				*ft_strnstr(const char *big, const char *little, size_t n);

int					ft_atoi(const char *str);

void				*ft_memccpy(void *dest, const void *src, int c, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

void				*ft_calloc(size_t nmemb, size_t size);

char				*ft_itoa(int n);

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(const char *s1, const char *s2);

char				*ft_strtrim(const char *s1, const char *set);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				**ft_split(const char *s, char c);

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void*));

void				ft_lstclear(t_list **lst, void (*del)(void*));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
