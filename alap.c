#include <stdio.h>
#include "prog1.h"
#include <string.h>
#include <unistd.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("alap v0.0.1\n");
        puts("");
        printf("Usage: alap <tample_id> [option]\n");
        puts("");
        printf("Available options:\n");
        puts("");
        printf("-h               show this help\n");
        printf("-v               version info\n");
        printf("-stdout          don't create source file, print result to stdout\n");
        puts("");
        printf("Available templates:\n");
        puts("");
        printf("* c             - C source code [main.c]\n");
        printf("* java          - Java source code [Main.java]\n");
        printf("* py            - Python source code [main.py]\n");
    }
    else
    {
        if (strcmp(argv[1], "java") == 0)
        {
            if (access("Main.java", F_OK) != -1)
            {
                if (argc == 3)
                {
                    if (strcmp(argv[2], "-stdout") != 0)
                    {
                        printf("ERROR! A fájl már létezik\n");
                    }
                }
                else
                {
                    printf("ERROR! A fájl már létezik\n");
                }
            }
            else
            {
                string fajlnev = "Main.java";
                FILE *file = fopen(fajlnev, "w");
                fprintf(file, "public class HelloWorld {\n");
                fprintf(file, "    public static void main(String[] args) {\n");
                fprintf(file, "        System.out.println(\"Hello World!\");\n");
                fprintf(file, "    }\n");
                fprintf(file, "}\n");
                printf("A %s sikeresn létrehozva!\n",fajlnev);
                return 0;
            }
        }
        if (strcmp(argv[1], "py") == 0)
        {
            if (access("main.py", F_OK) != -1)
            {
                if (argc == 3)
                {
                    if (strcmp(argv[2], "-stdout") != 0)
                    {
                        printf("ERROR! A fájl már létezik\n");
                    }
                }
                else
                {
                    printf("ERROR! A fájl már létezik\n");
                };
            }
            else
            {
                string fajlnev = "main.py";
                FILE *file = fopen(fajlnev, "w");
                fprintf(file, "#!/usr/bin/env python3\n");
                fprintf(file, "\n");
                fprintf(file, "def main():\n");
                fprintf(file, "    print(\"Py3\")\n");
                fprintf(file, "\n");
                fprintf(file, "###################################\n");
                fprintf(file, "\n");
                fprintf(file, "if __name__ == \"__main__\":\n");
                fprintf(file, "    main()\n");

                printf("A %s sikeresn létrehozva!\n",fajlnev);
                return 0;
            }
        }

        if (strcmp(argv[1], "c") == 0)
        {
            if (access("main.c", F_OK) != -1)
            {
                if (argc == 3)
                {
                    if (strcmp(argv[2], "-stdout") != 0)
                    {
                        printf("ERROR! A fájl már létezik\n");
                    }
                }
                else
                {
                    printf("ERROR! A fájl már létezik\n");
                }
            }
            else
            {
                string fajlnev = "main.c";
                FILE *file = fopen(fajlnev, "w");
                fprintf(file, "#include <stdio.h>\n");
                fprintf(file, "\n");
                fprintf(file, "int main()\n");
                fprintf(file, "{\n");
                fprintf(file, "\n");
                fprintf(file, "    printf(\"Hello World!\");\n");
                fprintf(file, "\n");
                fprintf(file, "    return 0;\n");
                fprintf(file, "}\n");
                fclose(file);
                printf("A %s sikeresn létrehozva!\n",fajlnev);
                return 0;
            }
        }
        if (argc == 3)
        {
            if (strcmp(argv[1], "c") == 0 && strcmp(argv[2], "-stdout") == 0)
            {
                printf("#include <stdio.h>\n");
                puts("");
                printf("int main()\n");
                printf("{\n");
                puts("");
                printf("    printf(\"Hello World!\");\n");
                puts("");
                printf("    return 0;\n");
                printf("}\n");
                return 0;
            }
            if (strcmp(argv[1], "py") == 0 && strcmp(argv[2], "-stdout") == 0)
            {
                printf("#!/usr/bin/env python3\n");
                puts("");
                printf("def main():\n");
                printf("    print(\"Py3\")\n");
                puts("");
                printf("###################################\n");
                puts("");
                printf("if __name__ == \"__main__\":\n");
                printf("    main()\n");
                return 0;
            }
            if (strcmp(argv[1], "java") == 0 && strcmp(argv[2], "-stdout") == 0)
            {
                printf("public class HelloWorld {\n");
                printf("    public static void main(String[] args) {\n");
                printf("        System.out.println(\"Hello World!\");\n");
                printf("    }\n");
                printf("}\n");
                return 0;
            }
        }
    }

    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "-h") == 0)
        {
            printf("alap v0.0.1\n");
            puts("");
            printf("Usage: alap <tample_id> [option]\n");
            puts("");
            printf("Available options:\n");
            puts("");
            printf("-h               show this help\n");
            printf("-v               version info\n");
            printf("-stdout          show this help\n");
            puts("");
            printf("Available templates:\n");
            puts("");
            printf("* c             - C source code [main.c]\n");
            printf("* java          - Java source code [Main.java]\n");
            printf("* py            - Python source code [main.py]\n");
            break;
        }
        if (strcmp(argv[i], "-v") == 0)
        {
            printf("alap v0.0.1\n");
            break;
        }
    }

    return 0;
}