#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define VERSION "v1.0"

void kiir_help() {
    printf("alap %s\n\n", VERSION);
    printf("Usage: alap <template_id> [option]\n\n");
    printf("Available options:\n\n");
    printf("-h, --help      show this help\n");
    printf("-v, --version   version info\n");
    printf("--stdout        don't create source file, print result to stdout\n\n");
    printf("Available templates:\n\n");
    printf("* c             - C source code [main.c]\n");
    printf("* java          - Java source code [Main.java]\n");
    printf("* sh            - Bash source code [main.sh]\n");
}

int main(int argc, char *argv[]) {
    // help, verziószám
    if ((argc < 2) || (strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0))
    {
        kiir_help();
        return 0;
    }
    if ((strcmp(argv[1], "-v") == 0) || (strcmp(argv[1], "--version") == 0))
    {
        printf("alap %s\n", VERSION);
        return 0;
    }

    char *nyelv = argv[1];
    char *fajlnev = "";
    char *forraskod = "";

    // a forráskód kiválasztása nyelv szerint

    if (strcmp(nyelv, "c") == 0)
    {
        fajlnev = "main.c";
        forraskod = 
            "#include <stdio.h>\n"
            "\n"
            "int main()\n"
            "{\n"
            "    printf(\"hello\\n\");\n"
            "\n"
            "    return 0;\n"
            "}\n";
    }
    else if (strcmp(nyelv, "java") == 0)
    {
        fajlnev = "Main.java";
        forraskod = 
            "public class Main {\n"
            "    public static void main(String[] args) {\n"
            "        System.out.println(\"hello\");\n"
            "    }\n"
            "}\n";
    }
    else if (strcmp(nyelv, "sh") == 0)
    {
        fajlnev = "main.sh";
        forraskod = 
            "#!/bin/bash\n"
            "\n"
            "echo \"hello\"\n";
    }
    else
    {
        fprintf(stderr, "Error: unknown template_id: %s\n", nyelv);
        return 1;
    }

    // stdout

    if ((argc > 2) && (strcmp(argv[2], "--stdout") == 0))
    {
        printf("%s", forraskod);
    }
    else
    {
        // van e már ilyen fájl

        if (access(fajlnev, F_OK) == 0)
        {
            fprintf(stderr, "Error: the file '%s' already exists\n", fajlnev);
            return 1;
        }

        FILE *fp = fopen(fajlnev, "w");
        if (fp == NULL)
        {
            fprintf(stderr,"Error: file could not be opened");
            return 1;
        }
        fputs(forraskod, fp);
        printf("# %s was created\n",fajlnev);
        fclose(fp);
    }

    return 0;
}