#include "Array.hpp"

//valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./my_program

int main() {
	Array<int> a(5);
	Array<std::string> b(5);
	Array<int> c(12);
	Array<int> f;

	std::cout << "### 0.size of f ###" << std::endl;
	std::cout << "Size: " << f.size() << std::endl;
	std::cout << std::endl;

	std::cout << "### 1.Print array of the instance a ###" << std::endl;
	a.printAll();
	std::cout << "Size: " << a.size() << std::endl;
	std::cout << std::endl;
	std::cout << "### 2.Print array of the instance b ###" << std::endl;
	b.printAll();
	std::cout << "Size: " << b.size() << std::endl;
	std::cout << std::endl;

	std::cout << "### 3.Set array of the instance a ###" << std::endl;
	a[0] = 1;
	a[1] = 123;
	a[2] = 14115;
	a[3] = -454;
	a[4] = 2;
	std::cout << std::endl;

	std::cout << "### 4.Set array of the instance b ###" << std::endl;
	b[0] = "hello";
	b[1] = "World";
	b[2] = "Some_sentence";
	b[3] = "Hi";
	b[4] = "What";
	std::cout << std::endl;

	std::cout << "### 5.Print array of the instance a ###" << std::endl;
	a.printAll();
	std::cout << std::endl;

	std::cout << "### 6.Print array of the instance b ###" << std::endl;
	b.printAll();
	std::cout << std::endl;

	std::cout << "### 7.Operator = override test ###" << std::endl;
	c = a;
	std::cout << "c = a" << std::endl;
	std::cout << std::endl;

	std::cout << "### 8.Print array of the instance c ###" << std::endl;
	c.printAll();
	std::cout << std::endl;

	std::cout << "### 9.Copy constructor test ###" << std::endl;
	Array<int> d(a);
	std::cout << "Array<int> d(a)" << std::endl;

	std::cout << "### 10.Print array of the instance d ###" << std::endl;
	d.printAll();
	std::cout << std::endl;

	std::cout << "### 11. Try to access over the limit of the array ###" << std::endl;
	try {
		b[5] = "wassup";
	}
	catch (const std::exception& e) {
		std::cerr << "!Error: " << e.what() << std::endl;
	}
}