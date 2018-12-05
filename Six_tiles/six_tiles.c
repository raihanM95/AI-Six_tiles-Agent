#include<stdio.h>

int main()
{
    char A, B, C, D, E, F, location, state_a, state_b, state_c, state_d, state_e, state_f, all_clean;

    printf("Enter the location(A/B/C/D/E/F): ");
    scanf(" %c", &location);

    printf("\n->Like d for dirty and c for clean<-\n");

    printf("Enter condition of A: ");
    scanf(" %c", &state_a);
    printf("Enter condition of B: ");
    scanf(" %c", &state_b);
    printf("Enter condition of C: ");
    scanf(" %c", &state_c);
    printf("Enter condition of D: ");
    scanf(" %c", &state_d);
    printf("Enter condition of E: ");
    scanf(" %c", &state_e);
    printf("Enter condition of F: ");
    scanf(" %c", &state_f);

    while(1){
        if(location == 'A'){
            if(state_a == 'd'){
                printf(" %c is dirty and cleaned.\n", location);
                location = 'B';
            }
            else if(state_a == 'c'){
                printf(" %c is clean and turned right.\n", location);
                location = 'B';
            }
            A = 'c';
            if(A == 'c' && B == 'c' && C == 'c' && D == 'c' && E == 'c' && F == 'c'){
                printf("All the tiles are cleaned.\n");
                break;
            }
        }
        else if(location == 'B'){
            if(state_b == 'd'){
                printf(" %c is dirty and cleaned.\n", location);
                location = 'C';
            }
            else if(state_b == 'c'){
                printf(" %c is clean and turned right.\n", location);
                location = 'C';
            }
            B = 'c';
            if(A == 'c' && B == 'c' && C == 'c' && D == 'c' && E == 'c' && F == 'c'){
                printf("All the tiles are cleaned.\n");
                break;
            }
        }
        else if(location == 'C'){
            if(state_c == 'd'){
                printf(" %c is dirty and cleaned.\n", location);
                location = 'F';
            }
            else if(state_c == 'c'){
                printf(" %c is clean and turned down.\n", location);
                location='F';
            }
            C = 'c';
            if(A == 'c' && B == 'c' && C == 'c' && D == 'c' && E == 'c' && F == 'c'){
                printf("All the tiles are cleaned.\n");
                break;
            }
        }
        else if(location == 'F'){
            if(state_f == 'd'){
                printf(" %c is dirty and cleaned.\n", location);
                location = 'E';
            }
            else if(state_f == 'c'){
                printf(" %c is clean and turned left.\n", location);
                location = 'E';
            }
            F = 'c';
            if(A == 'c' && B == 'c' && C == 'c' && D == 'c' && E == 'c' && F == 'c'){
                printf("All the tiles are cleaned.\n");
                break;
            }
        }
        else if(location == 'E'){
            if(state_e == 'd'){
                printf(" %c is dirty and cleaned.\n", location);
                location = 'D';
            }
            else if(state_e == 'c'){
                printf(" %c is clean and turned left.\n", location);
                location = 'D';
            }
            E = 'c';
            if(A == 'c' && B == 'c' && C == 'c' && D == 'c' && E == 'c' && F == 'c'){
                printf("All the tiles are cleaned.\n");
                break;
            }
        }
        else if(location == 'D'){
            if(state_d == 'd'){
                printf(" %c is dirty and cleaned.\n", location);
                location = 'A';
            }
            else if(state_d == 'c'){
                printf(" %c is clean and turned up.\n", location);
                location = 'A';
            }
            D = 'c';
            if(A == 'c' && B == 'c' && C == 'c' && D == 'c' && E == 'c' && F == 'c'){
                printf("All the tiles are cleaned.\n");
                break;
            }
        }
    }
    return 0;
}

