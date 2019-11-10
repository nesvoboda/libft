# libft
This project is an attempt to recode C standard functions (libc). As you might know, this is the first project [42](42.fr) students have to do. This is my humble approach at this problem. 

As of now, the main part (everything except \*bonus.c) is functional. Bonus segfaults for some reason. Let me know if you have an idea why.

# Known issues

* Split doesn't `free()` all previously allocated substrings in case of a `malloc()` fail
* `ft_lstmap()` doesn't `free()` all previously allocated nodes if `ft_lstnew()` fails 

# Tests

Tests are located in the `tests/` folder and use [µnit](https://github.com/nemequ/munit/).

To run them, you have to:

#### Clone munit

`cd tests/`

`git clone https://github.com/nemequ/munit.git`


#### Make the library if you haven't


`cd ..`

`make bonus`

#### Compile and run the tests

`gcc -L. -lft tests/*.c tests/munit/munit.c && ./a.out` 
