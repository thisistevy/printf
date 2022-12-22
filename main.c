int main()
{
	    // test char
    char letter = 'c';

    if (printf("len = %d\n", printf("char = %c\n", letter)) == 
        ft_printf("len = %d\n", ft_printf("char = %c\n", letter)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // test str
    char *str = NULL;

    if (printf("len = %d\n", printf("str = %s\n", str)) == 
        ft_printf("len = %d\n", ft_printf("str = %s\n", str)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // test pointer
    void* ptr;

    if (printf("len = %d\n", printf("ptr = %p\n", &ptr)) == 
        ft_printf("len = %d\n", ft_printf("ptr = %p\n", &ptr)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // nbr decimal;
    int dec = -12;

    if (printf("len = %d\n", printf("dec = %d\n", dec)) == 
        ft_printf("len = %d\n", ft_printf("dec = %d\n", dec)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // nbr entier;
    int i = 15;

    if (printf("len = %d\n", printf("entier = %i\n", i)) == 
        ft_printf("len = %d\n", ft_printf("entier = %i\n", i)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // unsigned int i;
    unsigned int ui = -45678;

    if (printf("len = %d\n", printf("unsigned int = %u\n", ui)) == 
        ft_printf("len = %d\n", ft_printf("unsigned int = %u\n", ui)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // pourcentage;

    if (printf("len = %d\n", printf("pourcentage = %%\n")) == 
        ft_printf("len = %d\n", ft_printf("pourcentage = %%\n")))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // nbr hexamin
    unsigned int x = 278909898;

    if (printf("len = %d\n", printf("hexamin = %x\n", x)) == 
        ft_printf("len = %d\n", ft_printf("hexamin = %x\n", x)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");

    // nbr hexamax
    unsigned int max = 278909898;
    if (printf("len = %d\n", printf("hexamax = %X\n", max)) == 
        ft_printf("len = %d\n", ft_printf("hexamax = %X\n", max)))
    printf("♥‿♥\n\n");
    else printf("(҂◡_◡)\n\n");
}