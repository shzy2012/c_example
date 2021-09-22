```bash
$ gcc -c sum.c   // produces a sum.o object file
$ ar -rc libforme.a sum.o
$ nm libforme.a
$ gcc main.c -L./static_libraries -lforme -o main
```

# https://medium.com/@eightlimbed/how-to-create-and-use-a-c-static-library-eec33d502aeb
