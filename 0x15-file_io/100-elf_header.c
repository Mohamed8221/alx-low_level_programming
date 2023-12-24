#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* print_elf_header - prints the ELF header information
* @header: pointer to the ELF header structure
*/
void print_elf_header(Elf32_Ehdr *header)
{
int i;

printf("Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");


printf("Version:                           %d (current)\n",
header->e_ident[EI_VERSION]);
printf("Entry point address:               0x%x\n", header->e_entry);
}

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
int fd;
Elf32_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: elf_header elf_filename\n");
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error reading ELF header\n");
return (98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Not an ELF file\n");
return (98);
}

print_elf_header(&header);

close(fd);
return (0);
}
