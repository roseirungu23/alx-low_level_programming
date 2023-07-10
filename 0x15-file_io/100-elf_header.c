#include "main.h"
/*
 * print_error - prints an error message
 * print_elf_header_info - displays the information contained in the ELF header
 * at the start of elf file
 * read_elf_header - reads the headr of elf file
 * Return: 0 on success.
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
void print_elf_header_info(ElfHeader *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < ELF_MAGIC_SIZE; i++)
	{
		printf("%02x ", header->magic[i]);
	}
	printf("\n");
	printf("Class:                             ");
	switch (header->class)
	{
		case 1:
			printf("ELF32\n");
			break;
		case 2:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}
	printf("Data:                              ");
	switch (header->data)
	{
		case 1:
			printf("2's complement, little endian\n");
			break;
		case 2:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}
	printf("Version:                           %d (current)\n", header->version);
	printf("OS/ABI:                            ");
	switch (header->os_abi)
	{
		case 0:
			printf("System V\n");
			break;
		case 1:
			printf("HP-UX\n");
			break;
		case 2:
			printf("NetBSD\n");
			break;
		case 3:
			printf("Linux\n");
			break;
		case 6:
			printf("Solaris\n");
			break;
		case 9:
			printf("FreeBSD\n");
			break;
		default:
			printf("Unknown OS/ABI\n");
			break;
	}
	printf("ABI Version:                       %d\n", header->abi_version);
	printf("Type:                              ");
	switch (header->type)
	{
		case 0:
			printf("NONE (No file type)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown type\n");
			break;
	}
	printf("Entry point address:               0x%lx\n",
			header->entry_point_address);
}
void read_elf_header(const char *filename)
{
	int file_d = open(filename, O_RDONLY);
	
	ElfHeader header;
	if (file_d == -1)
	{
		print_error("Error opening file");
	}
	if (read(file_d, &header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		print_error("Error reading ELF header");
	}
	if (header.magic[0] != 0x7f || header.magic[1] != 'E'
			|| header.magic[2] != 'L' || header.magic[3] != 'F')
	{
		print_error("Not an ELF file");
	}
	print_elf_header_info(&header);
	close(file_d);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	read_elf_header(argv[1]);
	return (0);
}
