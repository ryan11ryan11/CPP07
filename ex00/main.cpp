#include "whatever.hpp"

int main()
{
    int i = 5;
    int j = 6;

    std::string s1 = "Apple";
    std::string s2 = "Banana";

    float k = 4.2;
    float l = 133.2;

    std::cout << "====Start====" << std::endl;
    std::cout << "i: " << i << " j: " << j << std::endl;
    std::cout << "k: " << k << " l: " << l << std::endl;
    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;

    std::cout << "====Min Test====" << std::endl;
    std::cout << "i: " << i << " j: " << j << " min: " << min(i,j) <<std::endl;
    std::cout << "k: " << k << " l: " << l << " min: " << min(k,l) << std::endl;
    std::cout << "s1: " << s1 << " s2: " << s2 << " min: " << min(s1,s2) << std::endl;

    std::cout << "====Max Test====" << std::endl;
    std::cout << "i: " << i << " j: " << j << " max: " << max(i,j) <<std::endl;
    std::cout << "k: " << k << " l: " << l << " max: " << max(k,l) << std::endl;
    std::cout << "s1: " << s1 << " s2: " << s2 << " max: " << max(s1,s2) << std::endl;

    ::swap(i,j);
    ::swap(k,l);
    ::swap(s1,s2);

    std::cout << "====Swap Test====" << std::endl;
    std::cout << "i: " << i << " j: " << j << std::endl;
    std::cout << "k: " << k << " l: " << l << std::endl;
    std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;


    std::cout << "====Another Test====" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}