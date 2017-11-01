C++ Exercise: Overloading
Given the following function prototypes:
	a. void f(long l);
	b. void f(short s);
	c. void f(char *s);
Which of the above functions will be called in each of the following cases (if
at all), and why? (Exact match, promotion, standard conversion, userdefined
conversion)
	1. f(1L);
	2. f(2);
	3. f(3.0);
	4. f(nullptr);
	5. f(“a”);
	6. f(‘a’);
For each function call, write whether it will compile or not, and the reason
for compiling (or not).