// int main ()
// {
// 	// % --> cspdiuxX%
// 	// \ ---> abfnrtv     &     \ " ' %
// 	// flags --> '-0. and '# +'

// 	// no format conversion
// 	printf("");
// 	printf("\\ \" \' \n"); // \% not accepted
// 	printf("\a \b \f \n \r \t \v \n");

// 	// char
// 	printf("%c\n", 'A');
// 	printf("65: %c\n", 65);
// 	printf("065: %c\n", 065); // interpreted as octal
// 	printf("-191: %c\n", -191);
// 	printf("-0: %c\n", -0);
// 	printf("0: %c\n", 0);
// 	printf("00000000: %c\n", 00000000);
// 	printf("11111111: %c\n", 11111111); // seen as normal number
// 	printf("01010101: %c\n", 01010101); // why not correspond to ASCII ???
// 	printf("2147483647: %c\n", 2147483647); // max
// 	printf("-2147483647: %c\n", -2147483647 - 1); // max
// 	printf("\'a\' + \'b\'%c\n", 'a' + 'b'); // implicit conversion to int

// 	// sizes
// 	printf("\nSIZEOF CHAR\n");
// 	printf("char is %lu\n", sizeof(char));
// 	printf("char* is %lu\n", sizeof(char *));
// 	printf("char** is %lu\n", sizeof(char **));
// 	char a = 'a';
// 	char b = 'b';
// 	char nullTerm = '\0';
// 	char newLine = '\n';
//  	printf("a is %lu\n", sizeof(a));
// 	printf("\\0 is %lu\n", sizeof(nullTerm));
// 	printf("\\n is %lu\n", sizeof(newLine));
// 	printf("a + b is %lu\n", sizeof(a + b)); // implicit conversion to int
// 	printf("Nico! is %lu\n", sizeof("Nico!"));
// 	// printf("\'\' is %lu\n", sizeof('')); // error

// 	printf("\nSIZEOF UNSIGNED CHAR\n");
// 	printf("unsigned char is %lu\n", sizeof(unsigned char));
// 	printf("unsigned char* is %lu\n", sizeof(unsigned char*));
// 	printf("unsigned char** is %lu\n", sizeof(unsigned char**));

// 	printf("\nSIZEOF SHORT INT\n");
// 	printf("short int is %lu\n", sizeof(short int));
// 	printf("short int* is %lu\n", sizeof(short int*));
// 	printf("short int** is %lu\n", sizeof(short int**));

// 	printf("\nSIZEOF INT\n");
// 	printf("int is %lu\n", sizeof(int));
// 	printf("int* is %lu\n", sizeof(int *));
// 	printf("int** is %lu\n", sizeof(int **));
// 	printf("0 is %lu\n", sizeof(0));
// 	printf("9367 is %lu\n", sizeof(9367));
// 	printf("2147483647 is %lu\n", sizeof(2147483647));
// 	printf("2147483648 is %lu\n", sizeof(2147483648));
// 	printf("-0 is %lu\n", sizeof(-0));
// 	printf("+0 is %lu\n", sizeof(+0));
// 	printf("-12 is %lu\n", sizeof(-12));
// 	printf("-4567 is %lu\n", sizeof(-4567));
// 	printf("-2147483647 is %lu\n", sizeof(-2147483647));

// 	printf("\nSIZEOF UNSIGNED INT\n");
// 	printf("unsigned int is %lu\n", sizeof(unsigned int));
// 	printf("unsigned int* is %lu\n", sizeof(unsigned int*));
// 	printf("unsigned int** is %lu\n", sizeof(unsigned int**));

// 	char *s = "irue ifw fe%  fowfiejwf"; // if spaces, not recognized
// 	while (*s)
// 	{
// 		printf("%c-", *s);
// 		s++;
// 	}

// 	// FORMAT POSSIBILITIES
// 	// find the logic
// 		// check FLAGS, which can exist together
// 		// check WIDTH
// 		// check PRECISION
// 		// check TYPE
// 	// or maybe better to check in opposite order BUT where begin?
// 	// seaprate len from valid?
// 	printf("\nPOSSIBLE FORMATS\n");
// 	printf("%#x\n", 100);
// 	printf("%#X\n", 100);
// 	printf("%----#####x\n", 100);
// 	printf("%0+5d NIC\n", 678);
// }

// ______________________________________________________________________________

#include "ft_printf.h"

int main ()
{
	// printf("\nPRINTF BEHAVIORS\n");
	// printf("Format specifier, but no args: %d\n");
	// printf("More args than format specifiers: %d %d\n", 42, 84, 126);
	// printf("More format specifiers than args: %d %d %d\n", 42, 84);
	// printf("Nothing after percent: %^end^\n");
	// printf("Flags after percent: %+++++ ++++#####^end^\n");
	// printf("Nothing after percent, but another conversion: %  ^end^%d\n", 987);
	// // in these both cases 8 blank spaces are taken
	// printf("Only number after percent: %8[after flags]^^^\n");
	// printf("Only number after percent: %8d[after flags]^^^\n", 5);

	// printf("\nPRINTF BEHAVIORS - FLAGS\n");
	// printf("Precision: %6d\n", 3534);
	// printf("Precision: %06d\n", 3534);
	// printf("Precision: %.6d\n", 3534);
	// printf("Precision: %.06d\n", 3534);

	printf("\nFT_PRINTF\n");
	// ft_printf("I put a percent -> % <- without nothing after.\n");
	// ft_printf("ft_printf(): Get the next length: %   000###+++---  ^^^\n");
	// ft_printf("c)\t First: %c ^end^\n", 'N');
	// ft_printf("s)\t First: %s ^end^\n", "NicoCastel");
	// ft_printf("1) ^end^"); // 0
	// ft_printf("2) %^end^"); // 1
	// ft_printf("3) %0000000^end^"); // 8
	// ft_printf("4) %0000000ddd^end^"); // 8
	// ft_printf("5) %0d$%00d$%00000^end^");
	// ft_printf("6) %777d^end^");

	// int	n = 90;
	// int	*p = &n;
	// printf("%#s - %####+++X", "NicoCastel", p);
	// printf("%5c\n",'c');
	// printf("%5d\n", 79);
	// printf("%5i\n", 79);
	// printf("%5.3s\n", "NicoCastel");
	// printf("%5.3d\n", 34);
	// printf("%5  4.4  3d\n", 34);


	// ____________________________MULTIPLE ARGS_______________________________
	// ft_printf("ft(): %5c %07d^end^", 'c', 78);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5c %07d^end^", 'c', 78);

	// ft_printf("ft(): %5c %07d^end^", 'c', 78, 128);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5c %07d^end^", 'c', 78, 128);

	// ft_printf("ft(): %5c %07d %c %c^end^", 'c', 78, 128);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5c %07d %c %c^end^", 'c', 78, 128); // undefined


	// ________________________________CHAR__________________________________
	// ft_printf("ft() %c %c %c ", '2', '1', 0);
	// ft_putchar_fd('\n', 1);
	// printf("or() %c %c %c ", '2', '1', 0);

	// ft_printf("%c ", '0' + 256);
	// ft_putchar_fd('\n', 0);
	// printf("%c ", '0' + 256);

	// ft_printf("ft(): % % %% %^end^", 'c', "RanDoom");
	// ft_putchar_fd('\n', 0);
	// printf("or(): % % %% %^end^", 'c', "RanDoom");

	// ft_printf("ft(): %c$%c$%c$^end^", 'A', 'B', 'C'); //ft(): A$B$C$^end^
	// printf("or(): %c$%c$%c$^end^", 'A', 'B', 'C');

	// ft_printf("ft(): %5c^end^", 'c');
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5c^end^", 'c');

	// ft_printf("ft(): %-5c ^end^", 'c');
	// ft_putchar_fd('\n', 0);
	// printf("or(): %-5c ^end^", 'c');

	// ft_printf("ft(): % 5c ^end^", 'c');
	// ft_putchar_fd('\n', 0);
	// printf("or(): % 5c ^end^", 'c'); // undefined

	// ft_printf("ft(): %+5c ^end^", 'c');
	// ft_putchar_fd('\n', 0);
	// printf("or(): %+5c ^end^", 'c'); // undefined

	// ft_printf("ft(): %#5c ^end^", 'c');
	// ft_putchar_fd('\n', 0);
	// printf("or(): %#5c ^end^", 'c'); // undefined

	// ft_printf("ft(): %05c ^end^", 'c');
	// ft_putchar_fd('\n', 0);
	// printf("or(): %05c ^end^", 'c'); // undefined ----- HANDLE!!!!!

	// ft_printf("ft(): %5.3c^end^", 'c');
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5.3c^end^", 'c'); // undefined ------CHECK



	// ________________________________UNSIGNED__________________________________
	// ft_printf("ft(): %u^end^", -1);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %u^end^", -1);

	// ft_printf("ft(): %u^end^", 4294967275);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %u^end^", 4294907275);
	// //2147483648


	// ________________________________DIGITS__________________________________
	// ft_printf("ft(): %d^end^", -1);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %d^end^", -1);

	// ft_printf("ft(): %d^end^", -2147483648);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %d^end^", -2147483648);

	// _____________n_len < PRECISION || WIDTH____________
	// ft_printf("ft(): %5d^end^", 45); // ------ ONLY WIDTH
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5d^end^", 45); // ^^^45

	// ft_printf("ft(): %.5d^end^", 45); // ------ ONLY PRECISION
	// ft_putchar_fd('\n', 0);
	// printf("or(): %.5d^end^", 45); // 00045

	// ft_printf("ft(): %3.5d^end^", 45); // ------ PRECISION > WIDTH
	// ft_putchar_fd('\n', 0);
	// printf("or(): %3.5d^end^", 45); // 00045

	// ft_printf("ft(): %5.3d^end^", 45); // ------ PRECISION < WIDTH
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5.3d^end^", 45); // ^^045

	// _____________n_len > PRECISION || WIDTH____________
	// ft_printf("ft(): %3d^end^", 6660666); // ------ ONLY WIDTH
	// ft_putchar_fd('\n', 0);
	// printf("or(): %3d^end^", 6660666); // 6660666

	// ft_printf("ft(): %.3d^end^", 6660666); // ------ ONLY PRECISION
	// ft_putchar_fd('\n', 0);
	// printf("or(): %.3d^end^", 6660666); // 6660666

	// ft_printf("ft(): %5.3d^end^", 6660666); // ------ PRECISION < WIDTH
	// ft_putchar_fd('\n', 0);
	// printf("or(): %5.3d^end^", 6660666); // 6660666

	// ft_printf("ft(): %3.5d^end^", 6660666); // ------ PRECISION > WIDTH
	// ft_putchar_fd('\n', 0);
	// printf("or(): %3.5d^end^", 6660666); // 6660666

	// *************************************************************************************

	// ft_printf("ft(): %-5d^end^", 45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %-5d^end^", 45);

	// ft_printf("ft(): %05d^end^", 45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %05d^end^", 45);

	// ft_printf("ft(): %-05d^end^", 45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %-05d^end^", 45); // 0 is ignored

	// ft_printf("ft(): %+05d^end^", 45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %+05d^end^", 45);

	// ft_printf("ft(): %+-5d^end^", 45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %+-5d^end^", 45);

	// ft_printf("ft(): %+- 5d^end^", 45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %+- 5d^end^", 45); // ' ' is ignored

	// ft_printf("ft(): %- 5d^end^", 45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %- 5d^end^", 45);

	// ft_printf("ft(): %-+5d^end^", -45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %-+5d^end^", -45);

	// ft_printf("ft(): %++--++--+-5d^end^", -45);
	// ft_putchar_fd('\n', 0);
	// printf("or(): %++--++--+-5d^end^", -45);

	// 	ft_printf("ft(): %#5d^end^", -45);
	// 	ft_putchar_fd('\n', 0);
	// 	printf("or(): %#5d^end^", -45); // undefined


	// ________________________________STRINGS__________________________________
	// ________ PACO ________
	// ft_printf("ft() %s ", "-");
	// ft_putchar_fd('\n', 1);
	// printf("or() %s ", "-");

	// ft_printf("ft() %s %s ", "", "-");
	// ft_putchar_fd('\n', 1);
	// printf("or() %s %s ", "", "-");

	// ft_printf(" NULL %s NULL ", NULL);
	// ft_putchar_fd('\n', 1);
	// printf(" NULL %s NULL ", NULL);

	// ________ MY TESTS ________
	// ft_printf("ft(): %s^end^", "NicoCastel");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %s^end^", "NicoCastel");

	// ft_printf("ft(): %+s^end^", "NicoCastel");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %+s^end^", "NicoCastel"); // undefined

	// ft_printf("ft(): %00s^end^", "NicoCastel");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %00s^end^", "NicoCastel"); // undefined

	// ft_printf("ft(): %   s^end^", "NicoCastel");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %   s^end^", "NicoCastel"); // undefined

	// ft_printf("ft(): % #  s^end^", "NicoCastel");
	// ft_putchar_fd('\n', 0);
	// printf("or(): % #  s^end^", "NicoCastel"); // undefined

	// ________ PRECISION & WIDTH ________
	// ft_printf("ft(): %12s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %12s^end^", "Nico");

	// ft_printf("ft(): %2.1s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.1s^end^", "Nico");

	// ft_printf("ft(): %1.2s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %1.2s^end^", "Nico");

	// ft_printf("ft(): %2.8s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.8s^end^", "Nico");

	// ft_printf("ft(): %8.2s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %8.2s^end^", "Nico");

	// ft_printf("ft(): %0.2s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %0.2s^end^", "Nico");

	// ft_printf("ft(): %2.0s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.0s^end^", "Nico");

	// ft_printf("ft(): %2.s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.s^end^", "Nico");

	// ft_printf("ft(): %0.0s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %0.0s^end^", "Nico");

	// ft_printf("ft(): %.2.1s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %.2.1s^end^", "Nico");


	// ________ TO HANDLE ________
	// ft_printf("ft(): %-12s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %-12s^end^", "Nico");

	// ft_printf("ft(): %2.1s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.1s^end^", "Nico");

	// ft_printf("ft(): %1.2s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %1.2s^end^", "Nico");

	// ft_printf("ft(): %2.8s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.8s^end^", "Nico");

	// ft_printf("ft(): %8.2s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %8.2s^end^", "Nico");

	// ft_printf("ft(): %0.2s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %0.2s^end^", "Nico");

	// ft_printf("ft(): %2.0s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.0s^end^", "Nico");

	// ft_printf("ft(): %2.s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %2.s^end^", "Nico");

	// ft_printf("ft(): %0.0s^end^", "Nico");
	// ft_putchar_fd('\n', 0);
	// printf("or(): %0.0s^end^", "Nico");



	// ________________________________POINTER__________________________________
	// int len1 = ft_printf("%x", -2147483648);
	// ft_putchar_fd('\n', 0);
	// int len = printf("%lx", -2147483648); // 10 --> a
	// printf("PRINT() LEN %d\n", len);
	// printf("FT_PRINT() LEN %d\n", len1);

	ft_printf("ft(): %p^end^", 0);
	ft_putchar_fd('\n', 0);
	printf("or(): %p^end^", 0); // 7e8c49cc

}
