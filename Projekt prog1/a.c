#include<stdio.h>
#include<string.h>

typedef struct 
{
    char *name;
    char *filename;
    char **content;
} Template;

char *c_code[] = 
{
    "#include <stdio.h>",
    "",
    "int main(int argc, char *argv[])",
    "{",
    "   printf(\"Hello World!\\n\");",
    "   return 0;",
    "}",
    NULL
};

char *bash_code[] = 
{
    "#!/bin/bash",
    "",
    "echo \"Hello World!\"",
    NULL
};

char *phyton_code[] = 
{
    "def main():",
    "   print(\"Hello World!\")",
    "",
    "if __name__ == \"__main__\":",
    "   main()",
    NULL
};

char *csharp_code[] = 
{
    "using System;",
    "",
    "namespace Projekt",
    "{",
    "   class Program",
    "   {",
    "       static void Main(string[] args)",
    "       {",
    "           Console.WriteLine(\"Hello World!\");",
    "       }",
    "   }",
    "}",
    NULL
};

char *cpp_code[] = 
{
    "#include <iostream>",
    "",
    "int main() {",
    "   std::cout << \"Hello World!\" << std::endl;",
    "   return 0;",
    "}",
    NULL
};

Template templates[] = 
{
    {"c", "main.c", c_code},
    {"bash", "script.sh", bash_code},
    {"py", "main.py", phyton_code},
    {"cs", "Program.cs", csharp_code},
    {"cpp", "main.cpp", cpp_code}
};

void create_file(Template t) 
{
    FILE *f = fopen(t.filename, "w");
    if(f == NULL) 
    {
        perror("Hiba a fájl megnyitásakor");
        return;
    }

    for(int i=0; t.content[i] != NULL; i++)
    {
        fprintf(f, "%s\n", t.content[i]);
    }

    fclose(f);
    printf("Sikeresen létrehozva: %s\n", t.filename);
}

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Hiba: Nem adtál meg nyelvet!\n");
        printf("Használat: %s <c|bash|py|cs|cpp>\n", argv[0]);
        return 1;
    }

    int template_count = sizeof(templates) / sizeof(templates[0]);
    int found = 0;

    for(int i=0; i<template_count; i++)
    {
        if(strcmp(argv[1], templates[i].name) == 0)
        {
            create_file(templates[i]);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Hiba: A(z) '%s' nyelvhez nincs sablon. \n", argv[1]);
        printf("Elérhető nyelvek: ");
        for(int i=0; i<template_count; i++)
        {
            printf(" %s", templates[i].name);
        }
        printf("\n");
        return 1;
    }

    return 0;
}
