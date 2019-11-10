#include "munit/munit.h"
#include "../libft.h"

MunitResult	test_ft_lstnew_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  munit_assert_string_equal(result -> content, a);
  munit_assert_ptr(result -> next, ==, NULL);
	return (MUNIT_OK);
}

MunitResult	test_ft_lstadd_front_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  char *b = "Goodbye world!";
  t_list *result2 = ft_lstnew(b);
  t_list **alst = &result;
  ft_lstadd_front(alst, result2);

  munit_assert_string_equal((*alst)->content, b);
  munit_assert_string_equal((*alst)->next->content, a);
	return (MUNIT_OK);
}

MunitResult	test_ft_lstsize_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  char *b = "Goodbye world!";
  t_list *result2 = ft_lstnew(b);
  t_list **alst = &result;
  ft_lstadd_front(alst, result2);

  munit_assert_int(ft_lstsize(*alst), ==, 2);
	return (MUNIT_OK);
}

MunitResult	test_ft_lstlast_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
  char *a = "Hello world!";
  t_list *result = ft_lstnew(a);
  char *b = "Goodbye world!";
  t_list *result2 = ft_lstnew(b);
  t_list **alst = &result;
  ft_lstadd_front(alst, result2);

  t_list *last = ft_lstlast(*alst);

  munit_assert_ptr(last->next, ==, NULL);

	return (MUNIT_OK);
}

MunitResult	test_ft_lstadd_back_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;
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

  munit_assert_string_equal(last->content, c);

	return (MUNIT_OK);
}

int global_counter = 0;

void  add_to_global_counter(void *input)
{
  char *s_input = input;
  global_counter += s_input[0];
}

MunitResult	test_ft_lstiter_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

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
  munit_assert_int(global_counter, ==, 6);

	return (MUNIT_OK);
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

MunitResult	test_ft_lstmap_1(const MunitParameter params[], void* data)
{
  (void) data;
	(void) params;

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
  munit_assert_string_equal(result->content, "bcd");
  result = result->next;
  munit_assert_string_equal(result->content, "efg");
  result = result->next;
  munit_assert_string_equal(result->content, "hij");

	return (MUNIT_OK);
}

MunitTest list_tests[] = {
	{
    "/ft_lstnew_1", /* name */
    test_ft_lstnew_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
 	 },
	{
    "/ft_lstadd_front_1", /* name */
    test_ft_lstadd_front_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_lstsize_1", /* name */
    test_ft_lstsize_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_lstlast_1", /* name */
    test_ft_lstlast_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_lstadd_back_1", /* name */
    test_ft_lstadd_back_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_lstiter_1", /* name */
    test_ft_lstiter_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  {
    "/ft_lstmap_1", /* name */
    test_ft_lstmap_1, /* test */
    NULL, /* setup */
    NULL, /* tear_down */
    MUNIT_TEST_OPTION_NONE, /* options */
    NULL /* parameters */
  },
  { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};
