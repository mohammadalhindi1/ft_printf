/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malhendi <malhendi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:05:43 by malhendi          #+#    #+#             */
/*   Updated: 2025/08/12 19:00:33 by malhendi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // va_list, va_start, va_arg, va_end
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h> // uintptr_t
# include <stddef.h> // size_t

/* =========================
**  ثوابت مفيدة للهيكس
** =======================*/
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

/* =========================
**  واجهة ft_printf
**  ترجع عدد الأحرف المطبوعة أو -1 عند الخطأ (نفس سلوك printf)
** =======================*/
int   ft_printf(const char *fmt, ...);

/* =========================
**  Conversions الأساسية (كل دالة ترجع عدد الأحرف المطبوعة)
** =======================*/
int   ft_putchar_pf(int c);                     // %c
int   ft_putstr_pf(const char *s);              // %s
int   ft_putnbr_pf(int n);                      // %d / %i
int   ft_putuint_pf(unsigned int n);            // %u
int   ft_puthex_pf(unsigned int n, int upper);  // %x (upper=0) / %X (upper=1)
int   ft_putptr_pf(const void *ptr);            // %p
int   ft_putpercent_pf(void);                   // %%

/* =========================
**  Utilities (اختياري: لو مش رح تستخدم libft)
** =======================*/
size_t  ft_strlen_pf(const char *s);  // بديل بسيط عن strlen لو حاب تبعد عن libft

/* اطباعة رقم بأي قاعدة (تسهّل %x و %p)
   ترجع عدد الأحرف المطبوعة */
int   ft_putnbase_pf(unsigned long long n, const char *base);

#endif