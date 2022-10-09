#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "../libft.h"
#include <unistd.h>
#include "test.h"
#include "microtest.h"

void	test_ft_strlen()
{
	ASSERT_INT_EQ(ft_strlen("a"), strlen("a"));
}

void	test_ft_isalpha_1()
{
	ASSERT_INT_EQ(ft_isalpha('a'), isalpha('a'));
}

void	test_ft_isalpha_2()
{
	ASSERT_INT_EQ(ft_isalpha('Z'), isalpha('Z'));
}

void	test_ft_isalpha_3()
{
	ASSERT_INT_EQ(ft_isalpha('!'), isalpha('!'));
}

void	test_ft_isalpha_4()
{
	ASSERT_INT_EQ(ft_isalpha('['), isalpha('['));
}

void	test_ft_isalpha_5()
{
	ASSERT_INT_EQ(ft_isalpha('{'), isalpha('{'));
}

void	test_ft_isdigit_1()
{
	ASSERT_INT_EQ(ft_isdigit('1'), isdigit('1'));
}

void	test_ft_isdigit_2()
{
	ASSERT_INT_EQ(ft_isdigit('!'), isdigit('!'));
}

void	test_ft_isdigit_3()
{
	ASSERT_INT_EQ(ft_isdigit('{'), isdigit('{'));
}

void	test_ft_isascii_1()
{
	ASSERT_INT_EQ(ft_isascii(-1), isascii(-1));
}

void	test_ft_isascii_2()
{
	ASSERT_INT_EQ(ft_isascii(127), isascii(127));
}

void	test_ft_isascii_3()
{
	ASSERT_INT_EQ(ft_isascii(128), isascii(128));
}

void	test_ft_isascii_4()
{
	ASSERT_INT_EQ(ft_isascii(129), isascii(129));
}

void	test_ft_isalnum_1()
{
	ASSERT_INT_EQ(ft_isalnum('a'), isalnum('a'));
}

void	test_ft_isalnum_2()
{
	ASSERT_INT_EQ(ft_isalnum('A'), isalnum('A'));
}

void	test_ft_isalnum_3()
{
	ASSERT_INT_EQ(ft_isalnum('1'), isalnum('1'));
}

void	test_ft_isalnum_4()
{
	ASSERT_INT_EQ(ft_isalnum('!'), isalnum('!'));
}

void	test_ft_isalnum_5()
{
	ASSERT_INT_EQ(ft_isalnum('['), isalnum('['));
}

void	test_ft_isalnum_6()
{
	ASSERT_INT_EQ(ft_isalnum('{'), isalnum('{'));
}

void	test_ft_isprint_1()
{
	ASSERT_INT_EQ(ft_isprint(0), isprint(0));
}

void	test_ft_isprint_2()
{
	ASSERT_INT_EQ(ft_isprint(127), isprint(127));
}

void	test_ft_isprint_3()
{
	ASSERT_INT_EQ(ft_isprint(32), isprint(32));
}

void	test_ft_toupper_1()
{
	ASSERT_INT_EQ(ft_toupper(0), toupper(0));
}

void	test_ft_toupper_2()
{
	ASSERT_INT_EQ(ft_toupper('a'), toupper('a'));
}

void	test_ft_toupper_3()
{
	ASSERT_INT_EQ(ft_toupper('{'), toupper('{'));
}

void	test_ft_tolower_1()
{
	ASSERT_INT_EQ(ft_tolower(0), tolower(0));
}

void	test_ft_tolower_2()
{
	ASSERT_INT_EQ(ft_tolower('Z'), tolower('Z'));
}

void	test_ft_tolower_3()
{
	ASSERT_INT_EQ(ft_tolower('{'), tolower('{'));
}

void	test_ft_strchr_1()
{
  const char *a = "Hello world!";
  char c = 'w';
	ASSERT_STR_EQ(ft_strchr(a, c), strchr(a, c));
}

void	test_ft_strchr_2()
{
  const char *a = "Hello world!";
  char c = '\0';
	ASSERT_STR_EQ(ft_strchr(a, c), strchr(a, c));
}

void	test_ft_strchr_3()
{
  const char *a = "Hello world!";
  char c = 'a';

	ASSERT_PTR_EQ(ft_strchr(a, c), strchr(a, c));
}

void	test_ft_strchr_4()
{
  const char *a = "";
  char c = 'a';
	ASSERT_PTR_EQ(ft_strchr(a, c), strchr(a, c));
}

void	test_ft_strchr_5()
{
  const char *a = "LOL";
  char c = '\0';
	ASSERT_PTR_EQ(ft_strchr(a, c), strchr(a, c));
}

void	test_ft_strrchr_1()
{
  const char *a = "Hewllo world!";
  char c = 'w';
	ASSERT_STR_EQ(ft_strrchr(a, c), strrchr(a, c));
}

void	test_ft_strrchr_2()
{
  const char *a = "Hello world!";
  char c = '\0';
	ASSERT_STR_EQ(ft_strrchr(a, c), strrchr(a, c));
}

void	test_ft_strrchr_3()
{
  const char *a = "Hello world!";
  char c = 'a';

	ASSERT_PTR_EQ(ft_strrchr(a, c), strrchr(a, c));
}

void	test_ft_strrchr_4()
{
  const char *a = "";
  char c = 'a';
	ASSERT_PTR_EQ(ft_strrchr(a, c), strrchr(a, c));
}

void	test_ft_strrchr_5()
{
  const char *a = "LOL";
  char c = '\0';
	ASSERT_PTR_EQ(ft_strrchr(a, c), strrchr(a, c));
}

void	test_ft_strncmp_1()
{
  const char *a = "LOL";
  const char *b = "LOL";
	ASSERT_INT_EQ(ft_strncmp(a, b, 2), strncmp(a, b, 2));
}

void	test_ft_strncmp_2()
{
  const char *a = "LOL";
  const char *b = "LOL";
	ASSERT_INT_EQ(ft_strncmp(a, b, 3), strncmp(a, b, 3));
}

void	test_ft_strncmp_3()
{
  const char *a = "LOL";
  const char *b = "LOL";
	ASSERT_INT_EQ(ft_strncmp(a, b, 10), strncmp(a, b, 10));
}

void	test_ft_strncmp_4()
{
  const char *a = "LOL";
  const char *b = "LOL";
	ASSERT_INT_EQ(ft_strncmp(a, b, 2), strncmp(a, b, 2));
}

void	test_ft_strncmp_5()
{
  const char *a = "LOL";
  const char *b = "LOZ";
	ASSERT_INT_EQ(ft_strncmp(a, b, 2), strncmp(a, b, 2));
}

void	test_ft_strncmp_6()
{
  const char *a = "LOL";
  const char *b = "LOZ";
	ASSERT_INT_EQ(ft_strncmp(a, b, 3), strncmp(a, b, 3));
}

void	test_ft_strncmp_7()
{
  const char *a = "LOLLIB";
  const char *b = "LOTLIB";
	ASSERT_INT_EQ(ft_strncmp(a, b, 10), strncmp(a, b, 10));
}

void	test_ft_strncmp_8()
{
  const char *a = "";
  const char *b = "";
	ASSERT_INT_EQ(ft_strncmp(a, b, 10), strncmp(a, b, 10));
}

void	test_ft_strncmp_9()
{
  const char *a = "LOL";
  const char *b = "LOLLIB";
	ASSERT_INT_EQ(ft_strncmp(a, b, 10), strncmp(a, b, 10));
}

void	test_ft_strncmp_10()
{
  const char *a = "LOLLIB";
  const char *b = "LOL";
	ASSERT_INT_EQ(ft_strncmp(a, b, 10), strncmp(a, b, 10));
}

void	test_ft_strncmp_11()
{
  const char *a = "LOLLIB";
  const char *b = "LOL";
	ASSERT_INT_EQ(ft_strncmp(a, b, 0), strncmp(a, b, 0));
}

void	test_ft_strncmp_12()
{
  const char *a = "LOLLIB";
  const char *b = "";
	ASSERT_INT_EQ(ft_strncmp(a, b, 0), strncmp(a, b, 0));
}

void	test_ft_strncmp_13()
{
  const char *a = "test\200";
  const char *b = "test\0";
	ASSERT_INT_EQ(ft_strncmp(a, b, 6), strncmp(a, b, 6));
}

void	test_ft_strlcpy_1()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10];
  const char *actual_src = "LOL";
  char expected_dst[10];
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 4);
  expected_result = strlcpy(expected_dst, expected_src, 4);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcpy_2()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10];
  const char *actual_src = "LOL";
  char expected_dst[10];
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 3);
  expected_result = strlcpy(expected_dst, expected_src, 3);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcpy_3()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10];
  const char *actual_src = "LOL";
  char expected_dst[10];
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 2);
  expected_result = strlcpy(expected_dst, expected_src, 2);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcpy_4()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaaaaaaaa\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaaaaaaaa\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 0);
  expected_result = strlcpy(expected_dst, expected_src, 0);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcat_1()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcat(actual_dst, actual_src, 6);
  expected_result = strlcat(expected_dst, expected_src, 6);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcat_2()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcat(actual_dst, actual_src, 5);
  expected_result = strlcat(expected_dst, expected_src, 5);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcat_3()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcat(actual_dst, actual_src, 2);
  expected_result = strlcat(expected_dst, expected_src, 2);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcat_4()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOLL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOLL";

  actual_result = ft_strlcat(actual_dst, actual_src, 0);
  expected_result = strlcat(expected_dst, expected_src, 0);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcat_5()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "";

  actual_result = ft_strlcat(actual_dst, actual_src, 0);
  expected_result = strlcat(expected_dst, expected_src, 0);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcat_6()
{
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "abcd";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "abcd";

  actual_result = ft_strlcat(actual_dst, actual_src, 0);
  expected_result = strlcat(expected_dst, expected_src, 0);
  ASSERT_INT_EQ(actual_result, expected_result);
  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_strlcat_7()
{

  size_t actual_result = 0;
  size_t expected_result = 0;

  char *actual_dest = malloc(16 * sizeof(char));
  memset(actual_dest, 'r', 15);
  actual_dest[15] = '\0';

	actual_result = ft_strlcat(actual_dest, "lorem ipsum dolor sit amet", 5);

  char *expected_dest = malloc(16 * sizeof(char));
  memset(expected_dest, 'r', 15);
  expected_dest[15] = '\0';

	expected_result = strlcat(expected_dest, "lorem ipsum dolor sit amet", 5);

  ASSERT_STR_EQ(actual_dest, expected_dest);
  ASSERT_INT_EQ(actual_result, expected_result);
  free(actual_dest);
  free(expected_dest);
}

void	test_ft_strnstr_1()
{

  const char *haystack = "Hello World!";
  const char *needle = "World";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 12), strnstr(haystack, needle, 12));
}

void	test_ft_strnstr_2()
{

  const char *haystack = "Hello World!";
  const char *needle = "world";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 12), strnstr(haystack, needle, 12));
}

void	test_ft_strnstr_3()
{

  const char *haystack = "Hello World!";
  const char *needle = "World";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 3), strnstr(haystack, needle, 3));
}

void	test_ft_strnstr_4()
{

  const char *haystack = "Hello World!";
  const char *needle = "World";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 11), strnstr(haystack, needle, 11));
}

void	test_ft_strnstr_5()
{

  const char *haystack = "Hello World!";
  const char *needle = "";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 12), strnstr(haystack, needle, 12));
}

void	test_ft_strnstr_6()
{

  const char *haystack = "";
  const char *needle = "World";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 12), strnstr(haystack, needle, 12));
}

void	test_ft_strnstr_7()
{

  const char *haystack = "";
  const char *needle = "";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 12), strnstr(haystack, needle, 12));
}

void	test_ft_strnstr_8()
{

  const char *haystack = "lorem ipsum dolor sit amet";
  const char *needle = "dolor";

  ASSERT_PTR_EQ(ft_strnstr(haystack, needle, 15), strnstr(haystack, needle, 15));
}

void	test_ft_memset_1()
{
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  bzero(actual_result, 10);
  bzero(expected_result, 10);

  ft_memset(actual_result, 65, 3);
  memset(expected_result, 65, 3);

  ASSERT_STR_EQ(actual_result, expected_result);
  free(actual_result);
  free(expected_result);
}

void	test_ft_memset_2()
{
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  bzero(actual_result, 10);
  bzero(expected_result, 10);

  ft_memset(actual_result, 200, 3);
  memset(expected_result, 200, 3);

  ASSERT_STR_EQ(actual_result, expected_result);
}

void	test_ft_bzero_1()
{
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  ft_bzero(actual_result, 3);
  bzero(expected_result, 3);

  ASSERT_STR_EQ(actual_result, expected_result);
}

void	test_ft_bzero_2()
{
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  ft_bzero(actual_result, 5);
  bzero(expected_result, 5);

  ASSERT_STR_EQ(actual_result, expected_result);
}

void	test_ft_memcpy_1()
{
  void *actual_src = malloc(10 * sizeof(void));
  void *expected_src = malloc(10 * sizeof(void));

  bzero(actual_src, 10);
  bzero(expected_src, 10);

  memset(actual_src, 65, 5);
  memset(expected_src, 65, 5);

  void *actual_dest = malloc(10 * sizeof(void));
  void *expected_dest = malloc(10 * sizeof(void));

  bzero(actual_dest, 10);
  bzero(expected_dest, 10);

  ft_memcpy(actual_dest, actual_src, 4);
  memcpy(expected_dest, expected_src, 4);

  ASSERT_STR_EQ(actual_dest, expected_dest);
}

void	test_ft_memccpy_1()
{
  char *actual_src = "Hello World!";
  char *expected_src = "Hello World!";

  void *actual_dest = malloc(20 * sizeof(void));
  void *expected_dest = malloc(20 * sizeof(void));

  bzero(actual_dest, 20);
  bzero(expected_dest, 20);

  memset(actual_dest, 'A', 19);
  memset(expected_dest, 'A', 19);

  void *actual_result;
  void *expected_result;

  actual_result = ft_memccpy(actual_dest, (void *)actual_src, 'W', 4);
  expected_result = memccpy(expected_dest, (void *)expected_src, 'W', 4);

  ASSERT_STR_EQ(actual_dest, expected_dest);
  ASSERT_PTR_EQ(actual_result, expected_result);
  free(actual_dest);
  free(expected_dest);
}

void	test_ft_memccpy_2()
{
  char *actual_src = "Hello World!";
  char *expected_src = "Hello World!";

  void *actual_dest = malloc(20 * sizeof(void));
  void *expected_dest = malloc(20 * sizeof(void));

  bzero(actual_dest, 20);
  bzero(expected_dest, 20);

  memset(actual_dest, 'A', 19);
  memset(expected_dest, 'A', 19);

  void *actual_result;
  void *expected_result;

  actual_result = ft_memccpy(actual_dest, (void *)actual_src, 'W', 20);
  expected_result = memccpy(expected_dest, (void *)expected_src, 'W', 20);

  ASSERT_STR_EQ(actual_dest, expected_dest);
  ASSERT_STR_EQ(actual_result, expected_result);
  free(actual_dest);
  free(expected_dest);

}

void	test_ft_memmove_1()
{
  void *actual_src = memset(malloc(10 * sizeof(void)), 65, 5);
  void *expected_src = memset(malloc(10 * sizeof(void)), 65, 5);

  void *actual_dest = malloc(10 * sizeof(void));
  void *expected_dest = malloc(10 * sizeof(void));

  ft_memmove(actual_dest, actual_src, 4);
  memmove(expected_dest, expected_src, 4);

  ASSERT_INT_EQ(strncmp(actual_dest, expected_dest, 5), 0);
}

void	test_ft_memmove_2()
{
  char c_actual_src[10] = "012345678\0";
  char c_expected_src[10] = "012345678\0";

  void *actual_src = c_actual_src;
  void *expected_src = c_expected_src;

  void *actual_dest = actual_src + 4;
  void *expected_dest = expected_src + 4;

  ft_memmove(actual_dest, actual_src, 4);
  memmove(expected_dest, expected_src, 4);

  ASSERT_STR_EQ(actual_dest, expected_dest);
}

void	test_ft_memmove_3()
{
  char c_actual_dst[10] = "012345678\0";
  char c_expected_dst[10] = "012345678\0";

  void *actual_dst = c_actual_dst;
  void *expected_dst = c_expected_dst;

  void *actual_src = actual_dst + 4;
  void *expected_src = expected_dst + 4;

  ft_memmove(actual_dst, actual_src, 6);
  memmove(expected_dst, expected_src, 6);

  ASSERT_STR_EQ(actual_dst, expected_dst);
}

void	test_ft_memmove_5()
{

  char *actual_dest;
  char	actual_src[] = "lorem ipsum dolor sit amet";
  actual_dest = actual_src + 1;

  char *expected_dest;
  char	expected_src[] = "lorem ipsum dolor sit amet";
  expected_dest = expected_src + 1;

  ft_memmove(actual_dest, actual_src, 8);
  memmove(expected_dest, expected_src, 8);


  //ASSERT_STR_EQ(actual_dest, expected_dest);
}

void	test_ft_memchr_1()
{
  char c_dst[10] = "012345678\0";
  void *dst = c_dst;

  ASSERT_PTR_EQ(ft_memchr(dst, 49, 5), memchr(dst, 49, 5));
}

void	test_ft_memchr_2()
{
  char c_dst[10] = "012345678\0";
  void *dst = c_dst;

  ASSERT_PTR_EQ(ft_memchr(dst, 49, 1), memchr(dst, 49, 1));
}

void	test_ft_memchr_3()
{
  char c_dst[10] = "012345678\0";
  c_dst[3] = -50;
  void *dst = c_dst;

  ASSERT_PTR_EQ(ft_memchr(dst, -50, 5), memchr(dst, -50, 5));
}

void	test_ft_memcmp_1()
{
  unsigned char c_a[10] = "012345678\0";
  c_a[3] = 200;
  void *a = c_a;
  unsigned char c_b[10] = "012345678\0";
  c_b[3] = 200;
  void *b = c_b;

  ASSERT_INT_EQ(ft_memcmp(a, b, 5), memcmp(a, b, 5));
}

void	test_ft_memcmp_2()
{
  unsigned char c_a[10] = "012345678\0";
  c_a[3] = 200;
  void *a = c_a;
  unsigned char c_b[10] = "012345678\0";
  c_b[3] = 0;
  void *b = c_b;

  ASSERT_INT_EQ(ft_memcmp(a, b, 5), memcmp(a, b, 5));
}

void	test_ft_atoi_1()
{
  char *a = "42";

  ASSERT_INT_EQ(ft_atoi(a), atoi(a));
}

void	test_ft_atoi_2()
{
  char *a = "-42";

  ASSERT_INT_EQ(ft_atoi(a), atoi(a));
}

void	test_ft_atoi_3()
{
  char *a = "+-42";

  ASSERT_INT_EQ(ft_atoi(a), atoi(a));
}

void	test_ft_atoi_4()
{
  char *a = "--42";

  ASSERT_INT_EQ(ft_atoi(a), atoi(a));
}

void	test_ft_atoi_5()
{
  char *a = "-+42";

  ASSERT_INT_EQ(ft_atoi(a), atoi(a));
}

void	test_ft_atoi_6()
{
  char *a = "+42";

  ASSERT_INT_EQ(ft_atoi(a), atoi(a));
}

void	test_ft_atoi_7()
{
  char *a = "    \t\r\n+42";

  ASSERT_INT_EQ(ft_atoi(a), atoi(a));
}

void	test_ft_calloc_1()
{
  void *a = ft_calloc(3, 4);
  void *b = calloc(3, 4);

  ASSERT_STR_EQ(a, b);
}

void	test_ft_strdup_1()
{
  char *a = "Hello world!";
  void *p1 = ft_strdup(a);
  void *p2 = strdup(a);

  ASSERT_STR_EQ(p1, p2);
}

void	test_ft_substr_1()
{
  char *a = "Hello world!";
  char *b = ft_substr(a, 3, 5);
  ASSERT_STR_EQ(b, "lo wo");
}

void	test_ft_substr_2()
{
  char *a = "lorem ipsum dolor sit amet";
  char *b = ft_substr(a, 7, 10);
  ASSERT_STR_EQ(b, "psum dolor");
}

void	test_ft_substr_3()
{
  char *a = "lorem ipsum dolor sit amet";
  char *b = ft_substr(a, 7, 0);
  ASSERT_STR_EQ(b, "");
}

void	test_ft_substr_4()
{
  char *a = "lorem ipsum dolor sit amet";
  char *bullshit;
  char *b = ft_substr(a, 400, 20);
  bullshit = &b[30];
  bullshit = "FULL BULLSHIT";
  ASSERT_STR_EQ(b, "");
}


void	test_ft_strjoin_1()
{
  char *a = "Hello world!";
  char *b = "Goodbye world!";
  char *c = ft_strjoin(a, b);
  ASSERT_STR_EQ(c, "Hello world!Goodbye world!");
}

void	test_ft_strtrim_1()
{
  char *a = "Hello world!";
  char *b = "!d";
  char *c = ft_strtrim(a, b);
  ASSERT_STR_EQ(c, "Hello worl");
}

void	test_ft_strtrim_2()
{
  char *a = "lorem ipsum dolor sit amet";
  char *b = "te";
  char *c = ft_strtrim(a, b);
  ASSERT_STR_EQ(c, "lorem ipsum dolor sit am");
}

void	test_ft_strtrim_3()
{
  char *a = "...,,,abc.. ??..";
  char *b = ".,";
  char *c = ft_strtrim(a, b);
  ASSERT_STR_EQ(c, "abc.. ??");
}

void	test_ft_split_1()
{
  char **result;
  char *a = "Hello, great, world!";
  char *a1 = "Hello";
  char *a2 = " great";
  char *a3 = " world!";
  result = ft_split(a, ',');
  ASSERT_STR_EQ(result[0], a1);
  ASSERT_STR_EQ(result[1], a2);
  ASSERT_STR_EQ(result[2], a3);
  ASSERT_PTR_EQ(result[3], NULL);
}

void	test_ft_split_2()
{
  char **result;
  char *a = "Hello, great, world!";
  char *a1 = "Hello, great, world!";
  result = ft_split(a, '.');
  ASSERT_STR_EQ(result[0], a1);
  ASSERT_PTR_EQ(result[1], NULL);
}

void	test_ft_split_3()
{
  char **result;
  char *a = "          ";
  result = ft_split(a, ' ');
  ASSERT_PTR_EQ(result[0], NULL);
}

void	test_ft_split_4()
{
  char **result;
  char *a = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
  result = ft_split(a, ' ');
  ASSERT_STR_EQ(result[0], "lorem");
  ASSERT_STR_EQ(result[1], "ipsum");
  ASSERT_STR_EQ(result[2], "dolor");
  ASSERT_STR_EQ(result[3], "sit");
  ASSERT_STR_EQ(result[4], "amet,");
  ASSERT_STR_EQ(result[5], "consectetur");
  ASSERT_STR_EQ(result[6], "adipiscing");
  ASSERT_STR_EQ(result[7], "elit.");
  ASSERT_STR_EQ(result[8], "Sed");
  ASSERT_STR_EQ(result[9], "non");
  ASSERT_STR_EQ(result[10], "risus.");
  ASSERT_STR_EQ(result[11], "Suspendisse");
  ASSERT_PTR_EQ(result[12], NULL);
}

void	test_ft_itoa_1()
{
  int n = 42;
  char *a = "42";
  ASSERT_STR_EQ(ft_itoa(n), a);
}

void	test_ft_itoa_2()
{
  int n = -42;
  char *a = "-42";
  ASSERT_STR_EQ(ft_itoa(n), a);
}

void	test_ft_itoa_3()
{
  int n = 2147483647;
  char *a = "2147483647";
  ASSERT_STR_EQ(ft_itoa(n), a);
}

void	test_ft_itoa_4()
{
  int n = -2147483648;
  char *a = "-2147483648";
  ASSERT_STR_EQ(ft_itoa(n), a);
}

void	test_ft_itoa_5()
{
  int n = 0;
  char *a = "0";
  ASSERT_STR_EQ(ft_itoa(n), a);
}

void	test_ft_lstnew_1()
{
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  ASSERT_STR_EQ(result -> content, a);
  ASSERT_PTR_EQ(result -> next, NULL);
}

void	test_ft_lstadd_front_1()
{
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  char *b = "Goodbye world!";
  t_list *result2 = ft_lstnew(b);
  t_list **alst = &result;
  ft_lstadd_front(alst, result2);

  ASSERT_STR_EQ((*alst)->content, b);
  ASSERT_STR_EQ((*alst)->next->content, a);
}

void	test_ft_lstsize_1()
{
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  char *b = "Goodbye world!";
  t_list *result2 = ft_lstnew(b);
  t_list **alst = &result;
  ft_lstadd_front(alst, result2);

  ASSERT_INT_EQ(ft_lstsize(*alst), 2);
}

void	test_ft_lstlast_1()
{
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  char *b = "Goodbye world!";
  t_list *result2 = ft_lstnew(b);
  t_list **alst = &result;
  ft_lstadd_front(alst, result2);

  t_list *last = ft_lstlast(*alst);

  ASSERT_PTR_EQ(last->next, NULL);

}

void	test_ft_lstadd_back_1()
{
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  char *b = "Goodbye world!";
  t_list *result2 = ft_lstnew(b);
  t_list **alst = &result;
  ft_lstadd_front(alst, result2);

  char *c = "How are you doing world?";
  t_list *result3 = ft_lstnew(c);
  ft_lstadd_back(alst, result3);
  t_list *last = ft_lstlast(*alst);

  ASSERT_STR_EQ(last->content, c);

}

int global_counter = 0;

void  add_to_global_counter(void *input)
{
  char *s_input = input;
  global_counter += s_input[0];
}

void	test_ft_lstiter_1()
{

  t_list l1;
  t_list l2;
  t_list l3;

  l1.content = "\1";
  l1.next = &l2;

  l2.content = "\2";
  l2.next = &l3;

  l3.content = "\3";
  l3.next = NULL;

  ft_lstiter(&l1, add_to_global_counter);
  ASSERT_INT_EQ(global_counter, 6);

}

void *add_one(void *input)
{
  char *result;
  char *s = input;
  int i;

  i = 0;
  result = malloc(sizeof(char) * (strlen(input)+1));
  while (s[i] != '\0')
  {
    result[i] = s[i] + 1;
    i++;
  }
  result[i] = '\0';
  return (result);
}

void	test_ft_lstmap_1()
{

  t_list l1;
  t_list l2;
  t_list l3;

  l1.content = "abc";
  l1.next = &l2;

  l2.content = "def";
  l2.next = &l3;

  l3.content = "ghi";
  l3.next = NULL;

  t_list *result = ft_lstmap(&l1, add_one, free);
  ASSERT_STR_EQ(result->content, "bcd");
  result = result->next;
  ASSERT_STR_EQ(result->content, "efg");
  result = result->next;
  ASSERT_STR_EQ(result->content, "hij");

}

int main () {
  test_ft_strlen();
	test_ft_isalpha_1();
	test_ft_isalpha_2();
	test_ft_isalpha_3();
	test_ft_isalpha_4();
	test_ft_isalpha_5();
	test_ft_isdigit_1();
	test_ft_isdigit_2();
	test_ft_isdigit_3();
	test_ft_isascii_1();
	test_ft_isascii_2();
	test_ft_isascii_3();
	test_ft_isascii_4();
	test_ft_isalnum_1();
	test_ft_isalnum_2();
	test_ft_isalnum_3();
	test_ft_isalnum_4();
	test_ft_isalnum_5();
	test_ft_isalnum_6();
	test_ft_isprint_1();
	test_ft_isprint_2();
	test_ft_isprint_3();
	test_ft_toupper_1();
	test_ft_toupper_2();
	test_ft_toupper_3();
	test_ft_tolower_1();
	test_ft_tolower_2();
	test_ft_tolower_3();
	test_ft_strchr_1();
	test_ft_strchr_2();
	test_ft_strchr_3();
	test_ft_strchr_4();
	test_ft_strchr_5();
	test_ft_strrchr_1();
	test_ft_strrchr_2();
	test_ft_strrchr_3();
	test_ft_strrchr_4();
	test_ft_strrchr_5();
	test_ft_strncmp_1();
	test_ft_strncmp_2();
	test_ft_strncmp_3();
	test_ft_strncmp_4();
	test_ft_strncmp_5();
	test_ft_strncmp_6();
	test_ft_strncmp_7();
	test_ft_strncmp_8();
	test_ft_strncmp_9();
	test_ft_strncmp_10();
	test_ft_strncmp_11();
	test_ft_strncmp_12();
	test_ft_strncmp_13();
	test_ft_strlcpy_1();
	test_ft_strlcpy_2();
	test_ft_strlcpy_3();
	test_ft_strlcpy_4();
	test_ft_strlcat_1();
	test_ft_strlcat_2();
	test_ft_strlcat_3();
	test_ft_strlcat_4();
	test_ft_strlcat_5();
	test_ft_strlcat_6();
	test_ft_strlcat_7();
	test_ft_strnstr_1();
	test_ft_strnstr_2();
	test_ft_strnstr_3();
	test_ft_strnstr_4();
	test_ft_strnstr_5();
	test_ft_strnstr_6();
	test_ft_strnstr_7();
	test_ft_strnstr_8();
	test_ft_memset_1();
	test_ft_memset_2();
	test_ft_bzero_1();
	test_ft_bzero_2();
	test_ft_memcpy_1();
	test_ft_memccpy_1();
	test_ft_memccpy_2();
	test_ft_memmove_1();
	test_ft_memmove_2();
	test_ft_memmove_3();
	test_ft_memmove_5();
	test_ft_memchr_1();
	test_ft_memchr_2();
	test_ft_memchr_3();
	test_ft_memcmp_1();
	test_ft_memcmp_2();
	test_ft_atoi_1();
	test_ft_atoi_2();
	test_ft_atoi_3();
	test_ft_atoi_4();
	test_ft_atoi_5();
	test_ft_atoi_6();
	test_ft_atoi_7();
	test_ft_calloc_1();
	test_ft_strdup_1();
	test_ft_substr_1();
	test_ft_substr_2();
	test_ft_substr_3();
	test_ft_substr_4();
	test_ft_strjoin_1();
	test_ft_strtrim_1();
	test_ft_strtrim_2();
	test_ft_strtrim_3();
	test_ft_split_1();
	test_ft_split_2();
	test_ft_split_3();
	test_ft_split_4();
	test_ft_itoa_1();
	test_ft_itoa_2();
	test_ft_itoa_3();
	test_ft_itoa_4();
	test_ft_itoa_5();
  test_ft_lstadd_front_1();
  test_ft_lstsize_1();
  test_ft_lstlast_1();
  test_ft_lstadd_back_1();
  test_ft_lstiter_1();
  test_ft_lstmap_1();
  return (0);
}
