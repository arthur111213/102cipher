/*
** Utils.h for cipher_bonus in /home/bauren_a/Work/Tek1/Maths/102cipher/Bonus
** 
** Made by Arthur
** Login   <bauren_a@epitech.net>
** 
** Started on  Sat Nov 28 04:40:47 2015 Arthur
** Last update Sat Nov 28 04:41:56 2015 Arthur
*/
#ifndef UTILS_H_
# define UTILS_H_

#define GIGA_OCTET 1024

namespace String
{
  inline int getStrLen(const char *str)
  {
    int i = 0;
    while (str[i])
      i++;
    return (i);
  }

  inline int getStrLen(const char *str, char c)
  {
    int i = 0;
    while (str[i] && str[i] != c)
      i++;
    return (i);
  }

  inline int countWords(const char *str, char c)
  {
    int i = 0;
    int j = 0;
    while (str[i])
      {
	if (str[i] == c && str[i + 1] != c)
	  {
	    j++;
	  }
	i++;
      }
    return (j);
  }

  inline int get_nbr(const char *str)
  {
    int i = 0;
    int j = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == '+' || str[i] == '-')
      {
	if (str[i] == '-')
	  sign *= -1;
	i++;
      }
    j = i;
    while (str[j])
      {
	if (str[j] >= '0' && str[j] <= '9')
	  result = result * 10 + (str[j] - '0');
	j++;
      }
    return (result * sign);
  }
};

#endif /* !UTILS_H_ */
