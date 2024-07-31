#include "main.h"
/**
 * An ELF (Executable and Linkable Format) file is a standard file
 * format for executable files, object code, shared libraries,
 * and core dumps used in Unix and Unix-like operating systems
 */

/**
 * error_exit - Print error message and exit
 *
 * @code: Exit code
 * @message: Error message
 * @file: File name
 *
 * Return: Nothing
 */

void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * print_magic - Print magic of an ELF header
 *
 * @header: Pointer to the ELF header file
 *
 * Return: Nothing
 */

void print_magic(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", header->e_ident[i]);
	printf("\n");
}

/**
 * print_class - Print class of an ELF header
 *
 * @header: Pointer to the ELF header file
 *
 * Return: Noting
 */

void print_class(Elf64_Ehdr *header)
{
	printf("  Class:\t\t\t\t\t");

	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("NONE\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
	}
}

/**
 * print_data - Print data of an ELF header
 *
 * @header: Pointer to the ELF header file
 *
 * Return: Nothing
 */

void print_data(Elf64_Ehdr *header)
{
	printf("  Data: \t\t\t\t");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown data format\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement big-endian\n");
			break;
	}
}

/**
 * print_version - Print version of an ELF header
 * 
 * @header: Pointer to the ELF header file
 *
 * Return: Nothing
 */

void print_version(Elf64_Ehdr *header)
{
        printf("  Version: \t\t\t\t\t");

	switch (header->e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("%d (invalid)\n", EV_NONE);
			break;
		case EV_CURRENT:
			printf("%d (current)\n", EV_CURRENT);
			break;
	}
}

/**
 * print_os_abi - Print OS/ABI of an ELF header
 *
 * @header: Pointer to the ELF header file
 *
 * Return: Nothing
 */

void print_os_abi(Elf64_Ehdr *header)
{
	printf("  OS/ABI:\t\t\t\t\t");

	switch (header->e_ident[EI_OSABI])
	{
		/**
		 * case ELFOSABI_NONE:
		 * printf("UNIX - System V\n");
		 * break;
		 */
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
	}
}

/**
 * print_abi_version - Print ABI version of an ELF header
 *
 * @header: Pointer to the ELF header file
 *
 * Return: Nothing
 */

void print_abi_version(Elf64_Ehdr *header)
{
	printf("  ABI Version:\t\t\t\t");

        printf("%d\n", header->e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Print type of an ELF header
 *
 * @header: Pointer to the ELF header file
 *
 * Return: Nothing
 */

void print_type(Elf64_Ehdr *header)
{
	printf("  Type:\t\t\t\t\t");

        switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
	}
}

/**
 * print_entry_adress - Print the entry point address 
 * of an ELF header
 *
 * @header: Pointer to the ELF header file
 *
 * Return: Nothing
 */

void print_entry_adress(Elf64_Ehdr *header)
{
	printf("  Entry point address:\t\t\t\t\t");

	printf("0x%lx\n",(unsigned long)header->e_entry);
}

/**
 * main - Program that displays the information
 * contained in the ELF header at the start of an ELF file
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int elfile, reader;
	Elf64_Ehdr *headerFile;

	if (argc != 2)
		error_exit(98, "Usage: %s elf_filename\n", argv[0]);

	elfile = open(argv[1], O_RDONLY);
	if (elfile == -1)
		error_exit(98, "Can't read from file %s\n", argv[1]);

	headerFile = malloc(sizeof(Elf64_Ehdr));
	if (headerFile == NULL)
	{
		close(elfile);
		error_exit(98, "The memory allocation has failed\n", "");
	}

	reader = read(elfile, headerFile, sizeof(Elf64_Ehdr));
	if (reader == -1)
	{
		free(headerFile);
		close(elfile);
		error_exit(98, "Error: Can't read from file %s\n", argv[2]);
	}

	print_magic(headerFile);
	print_class(headerFile);
	print_data(headerFile);
	print_version(headerFile);
	print_os_abi(headerFile);
	print_abi_version(headerFile);
	print_type(headerFile);
	print_entry_adress(headerFile);

	free(headerFile);
	if (close(elfile) == -1)
		error_exit(98, "Error: Can't close fd %d\n", argv[1]);

	return (0);
}
