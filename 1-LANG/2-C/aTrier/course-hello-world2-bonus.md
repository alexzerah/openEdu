# Hello world 2

```c
#include <unistd.h>

int main(void)
{
    write(1, "Hello world\n", 12);
    return (0);
}
```

```c
write(fd, buffer, size);
```

- fd : file descriptor (où écrire)
- buffer : données à écrire
- size : nombre d’octets

### File descriptors

- 0
  - stdin
  - entrée (clavier)
- 1
  - stdout
  - sortie standard
- 2
  - stderr
  - erreurs

```c
write(1, "Hello\n", 6); // terminal
write(2, "Error\n", 6); // erreurs
```

- "Hello world\n" : Pourquoi 12 ?
```c
H e l l o   w o r l d \n
1 2 3 4 5 6 7 8 9 10 11 12
```
