#include <stdio.h>
#include <string.h>

int main(void) {
    char q[][200] = { //Array of source code
        "#include <stdio.h>",
        "#include <string.h>",
        "",
        "int main(void) {",
        "    char q[][200] = { //Array of source code",
        "   ",
        "    };",
        "    int i;",
        "    for (i = 0; i<16; i++){",
        "        for (int j = 0; j<strlen(q[i]); j++){",
        "            printf(\"%c\", q[i][j]);",
        "        }",
        "        printf(\"\\n\");",
        "    }",
        "    return 0;",
        "}",
    };
    int i;
    for (i = 0; i<16; i++){
        for (int j = 0; j<strlen(q[i]); j++){
            printf("%c", q[i][j]);
        }
        printf("\n");
    }
    return 0;
}
