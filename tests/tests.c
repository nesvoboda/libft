#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include "munit/munit.h"
#include "../libft.h"
#include <unistd.h>
#include "test.h"


MunitResult	test_ft_strlen(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	char *a = "Hello world!";
	munit_assert_int(ft_strlen(a), ==, strlen(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalpha_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalpha('a'), ==, isalpha('a'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalpha_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalpha('Z'), ==, isalpha('Z'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalpha_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalpha('!'), ==, isalpha('!'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalpha_4(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalpha('['), ==, isalpha('['));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalpha_5(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalpha('{'), ==, isalpha('{'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isdigit_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isdigit('1'), ==, isdigit('1'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isdigit_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isdigit('!'), ==, isdigit('!'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isdigit_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isdigit('{'), ==, isdigit('{'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isascii_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isascii(-1), ==, isascii(-1));
	return (MUNIT_OK);
}

MunitResult	test_ft_isascii_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isascii(127), ==, isascii(127));
	return (MUNIT_OK);
}

MunitResult	test_ft_isascii_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isascii(128), ==, isascii(128));
	return (MUNIT_OK);
}

MunitResult	test_ft_isascii_4(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isascii(129), ==, isascii(129));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalnum_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalnum('a'), ==, isalnum('a'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalnum_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalnum('A'), ==, isalnum('A'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalnum_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalnum('1'), ==, isalnum('1'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalnum_4(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalnum('!'), ==, isalnum('!'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalnum_5(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalnum('['), ==, isalnum('['));
	return (MUNIT_OK);
}

MunitResult	test_ft_isalnum_6(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isalnum('{'), ==, isalnum('{'));
	return (MUNIT_OK);
}

MunitResult	test_ft_isprint_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isprint(0), ==, isprint(0));
	return (MUNIT_OK);
}

MunitResult	test_ft_isprint_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isprint(127), ==, isprint(127));
	return (MUNIT_OK);
}

MunitResult	test_ft_isprint_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_isprint(32), ==, isprint(32));
	return (MUNIT_OK);
}

MunitResult	test_ft_toupper_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_toupper(0), ==, toupper(0));
	return (MUNIT_OK);
}

MunitResult	test_ft_toupper_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_toupper('a'), ==, toupper('a'));
	return (MUNIT_OK);
}

MunitResult	test_ft_toupper_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_toupper('{'), ==, toupper('{'));
	return (MUNIT_OK);
}

MunitResult	test_ft_tolower_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_tolower(0), ==, tolower(0));
	return (MUNIT_OK);
}

MunitResult	test_ft_tolower_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_tolower('Z'), ==, tolower('Z'));
	return (MUNIT_OK);
}

MunitResult	test_ft_tolower_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
	munit_assert_int(ft_tolower('{'), ==, tolower('{'));
	return (MUNIT_OK);
}

MunitResult	test_ft_strchr_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "Hello world!";
  char c = 'w';
	munit_assert_string_equal(ft_strchr(a, c), strchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strchr_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "Hello world!";
  char c = '\0';
	munit_assert_string_equal(ft_strchr(a, c), strchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strchr_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "Hello world!";
  char c = 'a';

	munit_assert_ptr(ft_strchr(a, c), ==, strchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strchr_4(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "";
  char c = 'a';
	munit_assert_ptr(ft_strchr(a, c), ==, strchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strchr_5(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  char c = '\0';
	munit_assert_ptr(ft_strchr(a, c), ==, strchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strrchr_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "Hewllo world!";
  char c = 'w';
	munit_assert_string_equal(ft_strrchr(a, c), strrchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strrchr_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "Hello world!";
  char c = '\0';
	munit_assert_string_equal(ft_strrchr(a, c), strrchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strrchr_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "Hello world!";
  char c = 'a';

	munit_assert_ptr(ft_strrchr(a, c), ==, strrchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strrchr_4(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "";
  char c = 'a';
	munit_assert_ptr(ft_strrchr(a, c), ==, strrchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strrchr_5(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  char c = '\0';
	munit_assert_ptr(ft_strrchr(a, c), ==, strrchr(a, c));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_1(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  const char *b = "LOL";
	munit_assert_int(ft_strncmp(a, b, 2), ==, strncmp(a, b, 2));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_2(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  const char *b = "LOL";
	munit_assert_int(ft_strncmp(a, b, 3), ==, strncmp(a, b, 3));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_3(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  const char *b = "LOL";
	munit_assert_int(ft_strncmp(a, b, 10), ==, strncmp(a, b, 10));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_4(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  const char *b = "LOL";
	munit_assert_int(ft_strncmp(a, b, 2), ==, strncmp(a, b, 2));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_5(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  const char *b = "LOZ";
	munit_assert_int(ft_strncmp(a, b, 2), ==, strncmp(a, b, 2));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_6(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  const char *b = "LOZ";
	munit_assert_int(ft_strncmp(a, b, 3), ==, strncmp(a, b, 3));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_7(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOLLIB";
  const char *b = "LOTLIB";
	munit_assert_int(ft_strncmp(a, b, 10), ==, strncmp(a, b, 10));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_8(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "";
  const char *b = "";
	munit_assert_int(ft_strncmp(a, b, 10), ==, strncmp(a, b, 10));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_9(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOL";
  const char *b = "LOLLIB";
	munit_assert_int(ft_strncmp(a, b, 10), ==, strncmp(a, b, 10));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_10(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOLLIB";
  const char *b = "LOL";
	munit_assert_int(ft_strncmp(a, b, 10), ==, strncmp(a, b, 10));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_11(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOLLIB";
  const char *b = "LOL";
	munit_assert_int(ft_strncmp(a, b, 0), ==, strncmp(a, b, 0));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_12(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "LOLLIB";
  const char *b = "";
	munit_assert_int(ft_strncmp(a, b, 0), ==, strncmp(a, b, 0));
	return (MUNIT_OK);
}

MunitResult	test_ft_strncmp_13(const MunitParameter params[], void* data)
{
	(void) data;
	(void) params;
  const char *a = "test\200";
  const char *b = "test\0";
	munit_assert_int(ft_strncmp(a, b, 6), ==, strncmp(a, b, 6));
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcpy_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10];
  const char *actual_src = "LOL";
  char expected_dst[10];
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 4);
  expected_result = strlcpy(expected_dst, expected_src, 4);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcpy_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10];
  const char *actual_src = "LOL";
  char expected_dst[10];
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 3);
  expected_result = strlcpy(expected_dst, expected_src, 3);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcpy_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10];
  const char *actual_src = "LOL";
  char expected_dst[10];
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 2);
  expected_result = strlcpy(expected_dst, expected_src, 2);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcpy_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaaaaaaaa\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaaaaaaaa\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcpy(actual_dst, actual_src, 0);
  expected_result = strlcpy(expected_dst, expected_src, 0);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcat_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcat(actual_dst, actual_src, 6);
  expected_result = strlcat(expected_dst, expected_src, 6);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcat_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcat(actual_dst, actual_src, 5);
  expected_result = strlcat(expected_dst, expected_src, 5);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcat_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOL";

  actual_result = ft_strlcat(actual_dst, actual_src, 2);
  expected_result = strlcat(expected_dst, expected_src, 2);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcat_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "LOLL";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "LOLL";

  actual_result = ft_strlcat(actual_dst, actual_src, 0);
  expected_result = strlcat(expected_dst, expected_src, 0);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcat_5(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "";

  actual_result = ft_strlcat(actual_dst, actual_src, 0);
  expected_result = strlcat(expected_dst, expected_src, 0);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcat_6(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int actual_result = 0;
  int expected_result = 0;

  char actual_dst[10] = "aaa\0bbbbb\0";
  const char *actual_src = "abcd";
  char expected_dst[10] = "aaa\0bbbbb\0";
  const char *expected_src = "abcd";

  actual_result = ft_strlcat(actual_dst, actual_src, 0);
  expected_result = strlcat(expected_dst, expected_src, 0);
  munit_assert_int(actual_result, ==, expected_result);
  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_strlcat_7(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  size_t actual_result = 0;
  size_t expected_result = 0;

  char *actual_dest = malloc(16 * sizeof(char));
  memset(actual_dest, 'r', 15);
  actual_dest[16] = '\0';

	actual_result = ft_strlcat(actual_dest, "lorem ipsum dolor sit amet", 5);

  char *expected_dest = malloc(16 * sizeof(char));
  memset(expected_dest, 'r', 15);
  expected_dest[16] = '\0';

	expected_result = strlcat(expected_dest, "lorem ipsum dolor sit amet", 5);

  munit_assert_string_equal(actual_dest, expected_dest);
  munit_assert_int(actual_result, ==, expected_result);
  free(actual_dest);
  free(expected_dest);
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "Hello World!";
  const char *needle = "World";

  munit_assert_ptr(ft_strnstr(haystack, needle, 12), ==, strnstr(haystack, needle, 12));
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "Hello World!";
  const char *needle = "world";

  munit_assert_ptr(ft_strnstr(haystack, needle, 12), ==, strnstr(haystack, needle, 12));
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "Hello World!";
  const char *needle = "World";

  munit_assert_ptr(ft_strnstr(haystack, needle, 3), ==, strnstr(haystack, needle, 3));
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "Hello World!";
  const char *needle = "World";

  munit_assert_ptr(ft_strnstr(haystack, needle, 11), ==, strnstr(haystack, needle, 11));
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_5(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "Hello World!";
  const char *needle = "";

  munit_assert_ptr(ft_strnstr(haystack, needle, 12), ==, strnstr(haystack, needle, 12));
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_6(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "";
  const char *needle = "World";

  munit_assert_ptr(ft_strnstr(haystack, needle, 12), ==, strnstr(haystack, needle, 12));
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_7(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "";
  const char *needle = "";

  munit_assert_ptr(ft_strnstr(haystack, needle, 12), ==, strnstr(haystack, needle, 12));
	return (MUNIT_OK);
}

MunitResult	test_ft_strnstr_8(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  const char *haystack = "lorem ipsum dolor sit amet";
  const char *needle = "dolor";

  munit_assert_ptr(ft_strnstr(haystack, needle, 15), ==, strnstr(haystack, needle, 15));
	return (MUNIT_OK);
}

MunitResult	test_ft_memset_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  bzero(actual_result, 10);
  bzero(expected_result, 10);

  ft_memset(actual_result, 65, 3);
  memset(expected_result, 65, 3);

  munit_assert_string_equal(actual_result, expected_result);
  free(actual_result);
  free(expected_result);
	return (MUNIT_OK);
}

MunitResult	test_ft_memset_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  bzero(actual_result, 10);
  bzero(expected_result, 10);

  ft_memset(actual_result, 200, 3);
  memset(expected_result, 200, 3);

  munit_assert_string_equal(actual_result, expected_result);
	return (MUNIT_OK);
}

MunitResult	test_ft_bzero_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  ft_bzero(actual_result, 3);
  bzero(expected_result, 3);

  munit_assert_string_equal(actual_result, expected_result);
	return (MUNIT_OK);
}

MunitResult	test_ft_bzero_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  void *actual_result = malloc(10 * sizeof(void));
  void *expected_result = malloc(10 * sizeof(void));

  ft_bzero(actual_result, 5);
  bzero(expected_result, 5);

  munit_assert_string_equal(actual_result, expected_result);
	return (MUNIT_OK);
}

MunitResult	test_ft_memcpy_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
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

  munit_assert_string_equal(actual_dest, expected_dest);
	return (MUNIT_OK);
}

MunitResult	test_ft_memccpy_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
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

  munit_assert_string_equal(actual_dest, expected_dest);
  munit_assert_ptr(actual_result, ==, expected_result);
  free(actual_dest);
  free(expected_dest);
	return (MUNIT_OK);
}

MunitResult	test_ft_memccpy_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
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

  munit_assert_string_equal(actual_dest, expected_dest);
  munit_assert_string_equal(actual_result, expected_result);
  free(actual_dest);
  free(expected_dest);

	return (MUNIT_OK);
}

MunitResult	test_ft_memmove_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  void *actual_src = memset(malloc(10 * sizeof(void)), 65, 5);
  void *expected_src = memset(malloc(10 * sizeof(void)), 65, 5);

  void *actual_dest = malloc(10 * sizeof(void));
  void *expected_dest = malloc(10 * sizeof(void));

  ft_memmove(actual_dest, actual_src, 4);
  memmove(expected_dest, expected_src, 4);

  munit_assert_string_equal(actual_dest, expected_dest);
	return (MUNIT_OK);
}

MunitResult	test_ft_memmove_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char c_actual_src[10] = "012345678\0";
  char c_expected_src[10] = "012345678\0";

  void *actual_src = c_actual_src;
  void *expected_src = c_expected_src;

  void *actual_dest = actual_src + 4;
  void *expected_dest = expected_src + 4;

  ft_memmove(actual_dest, actual_src, 4);
  memmove(expected_dest, expected_src, 4);

  munit_assert_string_equal(actual_dest, expected_dest);
	return (MUNIT_OK);
}

MunitResult	test_ft_memmove_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char c_actual_dst[10] = "012345678\0";
  char c_expected_dst[10] = "012345678\0";

  void *actual_dst = c_actual_dst;
  void *expected_dst = c_expected_dst;

  void *actual_src = actual_dst + 4;
  void *expected_src = expected_dst + 4;

  ft_memmove(actual_dst, actual_src, 6);
  memmove(expected_dst, expected_src, 6);

  munit_assert_string_equal(actual_dst, expected_dst);
	return (MUNIT_OK);
}

MunitResult	test_ft_memmove_5(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  char *actual_dest;
  char	actual_src[] = "lorem ipsum dolor sit amet";
  actual_dest = actual_src + 1;

  char *expected_dest;
  char	expected_src[] = "lorem ipsum dolor sit amet";
  expected_dest = expected_src + 1;

  ft_memmove(actual_dest, actual_src, 8);
  memmove(expected_dest, expected_src, 8);


  //munit_assert_string_equal(actual_dest, expected_dest);
	return (MUNIT_OK);
}

MunitResult	test_ft_memchr_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char c_dst[10] = "012345678\0";
  void *dst = c_dst;

  munit_assert_ptr(ft_memchr(dst, 49, 5), ==, memchr(dst, 49, 5));
	return (MUNIT_OK);
}

MunitResult	test_ft_memchr_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char c_dst[10] = "012345678\0";
  void *dst = c_dst;

  munit_assert_ptr(ft_memchr(dst, 49, 1), ==, memchr(dst, 49, 1));
	return (MUNIT_OK);
}

MunitResult	test_ft_memchr_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char c_dst[10] = "012345678\0";
  c_dst[3] = -50;
  void *dst = c_dst;

  munit_assert_ptr(ft_memchr(dst, -50, 5), ==, memchr(dst, -50, 5));
	return (MUNIT_OK);
}

MunitResult	test_ft_memchr_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

  char *pouet = "z";
	char *lolzer = (char *)&pouet[2];
	lolzer = "aaaaaaaaaa";
	char *actual_str = ft_memchr(pouet, 'a', 50);

	char *expected_str = memchr(pouet, 'a', 50);


  munit_assert_ptr(actual_str, ==, expected_str);
	return (MUNIT_OK);
}

MunitResult	test_ft_memcmp_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  unsigned char c_a[10] = "012345678\0";
  c_a[3] = 200;
  void *a = c_a;
  unsigned char c_b[10] = "012345678\0";
  c_b[3] = 200;
  void *b = c_b;

  munit_assert_int(ft_memcmp(a, b, 5), ==, memcmp(a, b, 5));
	return (MUNIT_OK);
}

MunitResult	test_ft_memcmp_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  unsigned char c_a[10] = "012345678\0";
  c_a[3] = 200;
  void *a = c_a;
  unsigned char c_b[10] = "012345678\0";
  c_b[3] = 0;
  void *b = c_b;

  munit_assert_int(ft_memcmp(a, b, 5), ==, memcmp(a, b, 5));
	return (MUNIT_OK);
}

MunitResult	test_ft_atoi_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "42";

  munit_assert_int(ft_atoi(a), ==, atoi(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_atoi_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "-42";

  munit_assert_int(ft_atoi(a), ==, atoi(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_atoi_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "+-42";

  munit_assert_int(ft_atoi(a), ==, atoi(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_atoi_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "--42";

  munit_assert_int(ft_atoi(a), ==, atoi(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_atoi_5(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "-+42";

  munit_assert_int(ft_atoi(a), ==, atoi(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_atoi_6(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "+42";

  munit_assert_int(ft_atoi(a), ==, atoi(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_atoi_7(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "    \t\r\n+42";

  munit_assert_int(ft_atoi(a), ==, atoi(a));
	return (MUNIT_OK);
}

MunitResult	test_ft_calloc_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  void *a = ft_calloc(3, 4);
  void *b = calloc(3, 4);

  munit_assert_string_equal(a, b);
	return (MUNIT_OK);
}

MunitResult	test_ft_strdup_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  void *p1 = ft_strdup(a);
  void *p2 = strdup(a);

  munit_assert_string_equal(p1, p2);
	return (MUNIT_OK);
}

MunitResult	test_ft_substr_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  char *b = ft_substr(a, 3, 5);
  munit_assert_string_equal(b, "lo wo");
	return (MUNIT_OK);
}

MunitResult	test_ft_substr_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "lorem ipsum dolor sit amet";
  char *b = ft_substr(a, 7, 10);
  munit_assert_string_equal(b, "psum dolor");
	return (MUNIT_OK);
}

MunitResult	test_ft_substr_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "lorem ipsum dolor sit amet";
  char *b = ft_substr(a, 7, 0);
  munit_assert_string_equal(b, "");
	return (MUNIT_OK);
}

MunitResult	test_ft_substr_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "lorem ipsum dolor sit amet";
  char *bullshit;
  char *b = ft_substr(a, 400, 20);
  bullshit = &b[30];
  bullshit = "FULL BULLSHIT";
  munit_assert_string_equal(b, "");
	return (MUNIT_OK);
}


MunitResult	test_ft_strjoin_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  char *b = "Goodbye world!";
  char *c = ft_strjoin(a, b);
  munit_assert_string_equal(c, "Hello world!Goodbye world!");
	return (MUNIT_OK);
}

MunitResult	test_ft_strtrim_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  char *b = "!d";
  char *c = ft_strtrim(a, b);
  munit_assert_string_equal(c, "Hello worl");
	return (MUNIT_OK);
}

MunitResult	test_ft_strtrim_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "lorem ipsum dolor sit amet";
  char *b = "te";
  char *c = ft_strtrim(a, b);
  munit_assert_string_equal(c, "lorem ipsum dolor sit am");
	return (MUNIT_OK);
}

MunitResult	test_ft_strtrim_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "...,,,abc.. ??..";
  char *b = ".,";
  char *c = ft_strtrim(a, b);
  munit_assert_string_equal(c, "abc.. ??");
	return (MUNIT_OK);
}

MunitResult	test_ft_split_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char **result;
  char *a = "Hello, great, world!";
  char *a1 = "Hello";
  char *a2 = " great";
  char *a3 = " world!";
  result = ft_split(a, ',');
  munit_assert_string_equal(result[0], a1);
  munit_assert_string_equal(result[1], a2);
  munit_assert_string_equal(result[2], a3);
  munit_assert_ptr(result[3], ==, NULL);
	return (MUNIT_OK);
}

MunitResult	test_ft_split_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char **result;
  char *a = "Hello, great, world!";
  char *a1 = "Hello, great, world!";
  result = ft_split(a, '.');
  munit_assert_string_equal(result[0], a1);
  munit_assert_ptr(result[1], ==, NULL);
	return (MUNIT_OK);
}

MunitResult	test_ft_split_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char **result;
  char *a = "          ";
  result = ft_split(a, ' ');
  munit_assert_ptr(result[0], ==, NULL);
	return (MUNIT_OK);
}

MunitResult	test_ft_split_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char **result;
  char *a = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
  result = ft_split(a, ' ');
  munit_assert_string_equal(result[0], "lorem");
  munit_assert_string_equal(result[1], "ipsum");
  munit_assert_string_equal(result[2], "dolor");
  munit_assert_string_equal(result[3], "sit");
  munit_assert_string_equal(result[4], "amet,");
  munit_assert_string_equal(result[5], "consectetur");
  munit_assert_string_equal(result[6], "adipiscing");
  munit_assert_string_equal(result[7], "elit.");
  munit_assert_string_equal(result[8], "Sed");
  munit_assert_string_equal(result[9], "non");
  munit_assert_string_equal(result[10], "risus.");
  munit_assert_string_equal(result[11], "Suspendisse");
  munit_assert_ptr(result[12], ==, NULL);
	return (MUNIT_OK);
}

MunitResult	test_ft_itoa_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int n = 42;
  char *a = "42";
  munit_assert_string_equal(ft_itoa(n), a);
	return (MUNIT_OK);
}

MunitResult	test_ft_itoa_2(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int n = -42;
  char *a = "-42";
  munit_assert_string_equal(ft_itoa(n), a);
	return (MUNIT_OK);
}

MunitResult	test_ft_itoa_3(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int n = 2147483647;
  char *a = "2147483647";
  munit_assert_string_equal(ft_itoa(n), a);
	return (MUNIT_OK);
}

MunitResult	test_ft_itoa_4(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int n = -2147483648;
  char *a = "-2147483648";
  munit_assert_string_equal(ft_itoa(n), a);
	return (MUNIT_OK);
}

MunitResult	test_ft_itoa_5(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  int n = 0;
  char *a = "0";
  munit_assert_string_equal(ft_itoa(n), a);
	return (MUNIT_OK);
}


MunitTest character_tests[] = {
  {
    "/ft-isalpha_1", /* name */
    test_ft_isalpha_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalpha_2", /* name */
    test_ft_isalpha_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalpha_3", /* name */
    test_ft_isalpha_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalpha_4", /* name */
    test_ft_isalpha_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalpha_5", /* name */
    test_ft_isalpha_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isdigit_1", /* name */
    test_ft_isdigit_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isdigit_2", /* name */
    test_ft_isdigit_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isdigit_3", /* name */
    test_ft_isdigit_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isascii_1", /* name */
    test_ft_isascii_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isascii_2", /* name */
    test_ft_isascii_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isascii_3", /* name */
    test_ft_isascii_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isascii_4", /* name */
    test_ft_isascii_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalnum_1", /* name */
    test_ft_isalnum_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalnum_2", /* name */
    test_ft_isalnum_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalnum_3", /* name */
    test_ft_isalnum_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalnum_4", /* name */
    test_ft_isalnum_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalnum_5", /* name */
    test_ft_isalnum_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isalnum_6", /* name */
    test_ft_isalnum_6, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isprint_1", /* name */
    test_ft_isprint_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isprint_2", /* name */
    test_ft_isprint_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-isprint_3", /* name */
    test_ft_isprint_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-toupper_1", /* name */
    test_ft_toupper_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-toupper_2", /* name */
    test_ft_toupper_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-toupper_3", /* name */
    test_ft_toupper_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-tolower_1", /* name */
    test_ft_tolower_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-tolower_2", /* name */
    test_ft_tolower_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-tolower_3", /* name */
    test_ft_tolower_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  /* Mark the end of the array with an entry where the test
   * function is NULL */
  { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

MunitTest string_tests[] = {
  {
    "/ft-strlen", /* name */
    test_ft_strlen, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strchr_1", /* name */
    test_ft_strchr_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strchr_2", /* name */
    test_ft_strchr_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strchr_3", /* name */
    test_ft_strchr_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strchr_4", /* name */
    test_ft_strchr_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strchr_5", /* name */
    test_ft_strchr_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strrchr_1", /* name */
    test_ft_strrchr_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strrchr_2", /* name */
    test_ft_strrchr_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strrchr_3", /* name */
    test_ft_strrchr_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strrchr_4", /* name */
    test_ft_strrchr_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strrchr_5", /* name */
    test_ft_strrchr_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_1", /* name */
    test_ft_strncmp_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_2", /* name */
    test_ft_strncmp_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_3", /* name */
    test_ft_strncmp_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_4", /* name */
    test_ft_strncmp_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_5", /* name */
    test_ft_strncmp_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_6", /* name */
    test_ft_strncmp_6, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_7", /* name */
    test_ft_strncmp_7, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_8", /* name */
    test_ft_strncmp_8, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_9", /* name */
    test_ft_strncmp_9, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_10", /* name */
    test_ft_strncmp_10, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_11", /* name */
    test_ft_strncmp_11, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_12", /* name */
    test_ft_strncmp_12, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strncmp_13", /* name */
    test_ft_strncmp_13, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcpy_1", /* name */
    test_ft_strlcpy_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcpy_2", /* name */
    test_ft_strlcpy_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcpy_3", /* name */
    test_ft_strlcpy_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcpy_4", /* name */
    test_ft_strlcpy_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcat_1", /* name */
    test_ft_strlcat_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcat_2", /* name */
    test_ft_strlcat_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcat_3", /* name */
    test_ft_strlcat_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcat_4", /* name */
    test_ft_strlcat_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcat_5", /* name */
    test_ft_strlcat_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcat_6", /* name */
    test_ft_strlcat_6, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strlcat_7", /* name */
    test_ft_strlcat_7, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_1", /* name */
    test_ft_strnstr_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_2", /* name */
    test_ft_strnstr_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_3", /* name */
    test_ft_strnstr_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_4", /* name */
    test_ft_strnstr_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_5", /* name */
    test_ft_strnstr_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_6", /* name */
    test_ft_strnstr_6, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_7", /* name */
    test_ft_strnstr_7, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft-strnstr_8", /* name */
    test_ft_strnstr_8, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },

  {
    "/ft_atoi_1", /* name */
    test_ft_atoi_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_atoi_2", /* name */
    test_ft_atoi_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_atoi_3", /* name */
    test_ft_atoi_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_atoi_4", /* name */
    test_ft_atoi_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_atoi_5", /* name */
    test_ft_atoi_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_atoi_6", /* name */
    test_ft_atoi_6, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_atoi_7", /* name */
    test_ft_atoi_7, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_calloc_1", /* name */
    test_ft_calloc_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_strdup_1", /* name */
    test_ft_strdup_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_substr_1", /* name */
    test_ft_substr_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_substr_2", /* name */
    test_ft_substr_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_substr_3", /* name */
    test_ft_substr_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_substr_4", /* name */
    test_ft_substr_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_strjoin_1", /* name */
    test_ft_strjoin_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_strtrim_1", /* name */
    test_ft_strtrim_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_strtrim_2", /* name */
    test_ft_strtrim_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_strtrim_3", /* name */
    test_ft_strtrim_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_split_1", /* name */
    test_ft_split_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_split_2", /* name */
    test_ft_split_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_split_3", /* name */
    test_ft_split_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_split_4", /* name */
    test_ft_split_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_itoa_1", /* name */
    test_ft_itoa_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_itoa_2", /* name */
    test_ft_itoa_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_itoa_3", /* name */
    test_ft_itoa_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_itoa_4", /* name */
    test_ft_itoa_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_itoa_5", /* name */
    test_ft_itoa_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  /* Mark the end of the array with an entry where the test
   * function is NULL */
  { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

MunitTest memory_tests[] = {
  {
    "/ft_memset_1", /* name */
    test_ft_memset_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memset_2", /* name */
    test_ft_memset_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_bzero_1", /* name */
    test_ft_bzero_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_bzero_2", /* name */
    test_ft_bzero_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memcpy_1", /* name */
    test_ft_memcpy_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memmove_1", /* name */
    test_ft_memmove_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memmove_2", /* name */
    test_ft_memmove_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memmove_3", /* name */
    test_ft_memmove_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memmove_5", /* name */
    test_ft_memmove_5, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memchr_1", /* name */
    test_ft_memchr_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memchr_2", /* name */
    test_ft_memchr_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memchr_3", /* name */
    test_ft_memchr_3, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memchr_4", /* name */
    test_ft_memchr_4, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memcmp_1", /* name */
    test_ft_memcmp_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memcmp_2", /* name */
    test_ft_memcmp_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memccpy_1", /* name */
    test_ft_memccpy_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_memccpy_2", /* name */
    test_ft_memccpy_2, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};



static const MunitSuite character_suite = {
  "/character_functions", /* name */
  character_tests, /* tests */
  NULL, /* suites */
  1, /* iterations */
  MUNIT_SUITE_OPTION_NONE /* options */
};

static const MunitSuite string_suite = {
  "/string_functions", /* name */
  string_tests, /* tests */
  NULL, /* suites */
  1, /* iterations */
  MUNIT_SUITE_OPTION_NONE /* options */
};

static const MunitSuite memory_suite = {
  "/memory_functions", /* name */
  memory_tests, /* tests */
  NULL, /* suites */
  1, /* iterations */
  MUNIT_SUITE_OPTION_NONE /* options */
};

static const MunitSuite list_suite = {
  "/list_functions", /* name */
  list_tests, /* tests */
  NULL, /* suites */
  1, /* iterations */
  MUNIT_SUITE_OPTION_NONE /* options */
};

int main (int argc, const char* argv[]) {
	(void) argv;
  munit_suite_main(&character_suite, NULL, argc, NULL);
  munit_suite_main(&string_suite, NULL, argc, NULL);
  munit_suite_main(&memory_suite, NULL, argc, NULL);
  munit_suite_main(&list_suite, NULL, argc, NULL);
  return (0);
}
