/*
7) Dado los siguientes programas, indique cuantas veces se imprime cada letra:

int main(int argc, char *argv[])
{
    int rc;
    int status;
    char
        *args[3];
    args[0] = (char *)"pgm";
    args[1] = (char *)"X";
    args[2] = (char *)0;
    rc = fork();
    printf("A\n");
    if (rc != 0)
    {
        rc = fork();
    }
    printf("B\n");
    rc =
        fork();
    printf("C\n");
    if (rc == 0)
    {
        rc = execv("pgm", args);
        printf("D\n");
    }
    else
    {
        waitpid(rc, &status, 0);
    }
    printf("E\n");
    return 0;
}

// programa pgm:
int main(int argc, char *argv[]) {
printf("%s\n", argv[1]); return 0;
}
*/

int main(int argc, char *argv[])
{
    int rc;
    int status;
    char
        *args[3];
    args[0] = (char *)"pgm";
    args[1] = (char *)"X";
    args[2] = (char *)0;
    rc = fork();
    printf("A\n");
    if (rc != 0)
    {
        rc = fork();
    }
    printf("B\n");
    rc =
        fork();
    printf("C\n");
    if (rc == 0)
    {
        rc = execv("pgm", args);
        printf("D\n");
    }
    else
    {
        waitpid(rc, &status, 0);
    }
    printf("E\n");
    return 0;
}

// programa pgm:
int main(int argc, char *argv[])
{
    printf("%s\n", argv[1]);
    return 0;
}