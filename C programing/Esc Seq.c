#include <stdio.h>

int main() {
    printf("Escape Sequence Demonstration:\n\n");

    printf("1. Newline (\\n): Hello\nWorld\n");
    printf("2. Horizontal Tab (\\t): Hello\tWorld\n");
    printf("3. Backspace (\\b): Hello\bWorld\n");
    printf("4. Carriage Return (\\r): Hello\rWorld\n");
    printf("5. Form Feed (\\f): Hello\fWorld\n");
    printf("6. Vertical Tab (\\v): Hello\vWorld\n");

    printf("7. Single Quote (\\\'): \'Hello\'\n");
    printf("8. Double Quote (\\\"): \"Hello\"\n");
    printf("9. Backslash (\\\\): Hello\\World\n");
    printf("10. Question Mark (\\?): What\\?Why\n");

    printf("11. Octal (\\ooo): \101 = A\n");
    printf("12. Hexadecimal (\\xhh): \x41 = A\n");

    printf("13. Alert (\\a): Beep\a\n");

    return 0;
}
