#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>
#include <string.h>

void error_exit(const char *msg);
void read_elf_header(const char *filename);

/**
 * error_exit - Checks if a file is an ELF file.
 * @msg: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */

void error_exit(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

/**
 * read_elf_header - Checks if a file is an ELF file.
 * @filename: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void read_elf_header(const char *filename) {
    int fd, i;
    Elf64_Ehdr header;
    ssize_t num_read;

    if ((fd = open(filename, O_RDONLY)) < 0) {
        error_exit("Error: Unable to open file");
    }

    if ((num_read = read(fd, &header, sizeof(header))) < 0) {
        close(fd);
        error_exit("Error: Unable to read ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        close(fd);
        error_exit("Error: Not an ELF file");
    }

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");
    printf("Class:   %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
    printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
                             header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding");
    printf("Version: %d (current)\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:  %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
                            header.e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
                            header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "NetBSD" :
                            header.e_ident[EI_OSABI] == ELFOSABI_LINUX ? "Linux" :
                            header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Sun Solaris" :
                            header.e_ident[EI_OSABI] == ELFOSABI_IRIX ? "SGI Irix" :
                            header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD" :
                            header.e_ident[EI_OSABI] == ELFOSABI_TRU64 ? "Compaq TRU64 UNIX" :
                            header.e_ident[EI_OSABI] == ELFOSABI_ARM ? "ARM architecture" :
                            header.e_ident[EI_OSABI] == ELFOSABI_STANDALONE ? "Standalone (embedded) application" :
                            "Unknown");
    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:    %s\n", header.e_type == ET_NONE ? "None (No file type)" :
                            header.e_type == ET_REL ? "Relocatable file" :
                            header.e_type == ET_EXEC ? "Executable file" :
                            header.e_type == ET_DYN ? "Shared object file" :
                            header.e_type == ET_CORE ? "Core file" :
                            "Unknown");
    printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    read_elf_header(argv[1]);

    return 0;
}
