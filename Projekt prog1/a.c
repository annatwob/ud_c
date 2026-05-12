#include<stdio.h>
#include<string.h>

#define VERSION "1.0.0" // Stringként kezelve a legegyszerűbb

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

void Help()
{
    printf("alap v%s\n\n", VERSION); // Verzió kiírása a fejlécben
    printf("Usage: alap <template_id> [option]\n\n");
    printf("Available options:\n");
    printf(" -h, --help      shows this help info\n");
    printf(" -v, --version   version info\n");
    printf(" --stdout        don't create source file, prints result to stdout\n\n");
    
    printf("Available languages: c    bash    py      cs      cpp\n");
}

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
        Help();
        return 0;
    }

    if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
    {
        Help();
        return 0;
    }

    if(strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0)
    {
        printf("alap v%s\n", VERSION); // A %s helyére behelyettesíti a VERSION tartalmát
        return 0;
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
        printf("Hiba: A(z) '%s' nyelvhez nincs sablon.\n", argv[1]);
        Help();
        return 1;
    }

    return 0;
}
