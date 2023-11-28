#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>

/**
* main - displays the information contained in the ELF header at the start of an ELF file
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, or 98 on error
*/
int main(int argc, char *argv[])
{
int fd;
ssize_t n;
Elf64_Ehdr ehdr;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

n = read(fd, &ehdr, sizeof(ehdr));
if (n != sizeof(ehdr))
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
close(fd);
exit(98);
}

if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
close(fd);
exit(98);
}

printf("Magic:   ");
for (n = 0; n < EI_NIDENT; n++)
printf("%02x ", ehdr.e_ident[n]);
printf("\n");

printf("Class:                             %s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("Data:                              %s\n", ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);
printf("OS/ABI:                            UNIX - System V\n");
printf("ABI Version:                       %d\n", ehdr.e_ident[EI_OSABI]);
printf("Type:                              %s\n", ehdr.e_type == ET_REL ? "REL (Relocatable file)" : "EXEC (Executable file)");
printf("Entry point address:               %p\n", (void *)ehdr.e_entry);

close(fd);
return (0);
}
