/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 09:51:14 by meid              #+#    #+#             */
/*   Updated: 2024/07/22 12:16:34 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

ssize_t	put_nbr(long nb);
ssize_t	put_char(char c);
ssize_t	put_str(char *str);
ssize_t	put_hex(unsigned long nb, char up_low);
ssize_t	put_ptr(char *str);
int		ft_printf(const char *str, ...);

#endif
