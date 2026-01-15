#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Add two short numbers (2 bytes, WORD)\n");
        printf("2. Add two int numbers   (4 bytes, DWORD)\n");
        printf("3. Add two long numbers  (8 bytes, QWORD)\n");
        printf("4. Subtract two short numbers (2 bytes, WORD)\n");
        printf("5. Subtract two int numbers   (4 bytes, DWORD)\n");
        printf("6. Subtract two long numbers  (8 bytes, QWORD)\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {   // ADD short
                short a, b, result;
                printf("Enter two short numbers: ");
                scanf("%hd %hd", &a, &b);

                asm volatile (
                    "movw %1, %%ax\n\t"
                    "addw %2, %%ax\n\t"
                    "movw %%ax, %0\n\t"
                    : "=r"(result)
                    : "r"(a), "r"(b)
                    : "%ax"
                );

                printf("Result (short add) = %hd\n", result);
                break;
            }

            case 2: {   // ADD int
                int a, b, result;
                printf("Enter two int numbers: ");
                scanf("%d %d", &a, &b);

                asm volatile (
                    "movl %1, %%eax\n\t"
                    "addl %2, %%eax\n\t"
                    "movl %%eax, %0\n\t"
                    : "=r"(result)
                    : "r"(a), "r"(b)
                    : "%eax"
                );

                printf("Result (int add) = %d\n", result);
                break;
            }

            case 3: {   // ADD long
                unsigned long a, b, result;
                printf("Enter two long numbers: ");
                scanf("%lu %lu", &a, &b);

                asm volatile (
                    "movq %1, %%rax\n\t"
                    "addq %2, %%rax\n\t"
                    "movq %%rax, %0\n\t"
                    : "=r"(result)
                    : "r"(a), "r"(b)
                    : "%rax"
                );

                printf("Result (long add) = %lu\n", result);
                break;
            }

            case 4: {   // SUB short
                short a, b, result;
                printf("Enter two short numbers: ");
                scanf("%hd %hd", &a, &b);

                asm volatile (
                    "movw %1, %%ax\n\t"
                    "subw %2, %%ax\n\t"
                    "movw %%ax, %0\n\t"
                    : "=r"(result)
                    : "r"(a), "r"(b)
                    : "%ax"
                );

                printf("Result (short subtract) = %hd\n", result);
                break;
            }

            case 5: {   // SUB int
                int a, b, result;
                printf("Enter two int numbers: ");
                scanf("%d %d", &a, &b);

                asm volatile (
                    "movl %1, %%eax\n\t"
                    "subl %2, %%eax\n\t"
                    "movl %%eax, %0\n\t"
                    : "=r"(result)
                    : "r"(a), "r"(b)
                    : "%eax"
                );

                printf("Result (int subtract) = %d\n", result);
                break;
            }

            case 6: {   // SUB long
                unsigned long a, b, result;
                printf("Enter two long numbers: ");
                scanf("%lu %lu", &a, &b);

                asm volatile (
                    "movq %1, %%rax\n\t"
                    "subq %2, %%rax\n\t"
                    "movq %%rax, %0\n\t"
                    : "=r"(result)
                    : "r"(a), "r"(b)
                    : "%rax"
                );

                printf("Result (long subtract) = %lu\n", result);
                break;
            }

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);

    return 0;
}
