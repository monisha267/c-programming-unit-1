//program used to check user id and password ( username static and password is dynamic) conditions userid is Admin123 and password is 8 characters long
#include <stdio.h>
#include <string.h>
int main() {
    char userid[20];
    char password[20];
    printf("Enter User ID: ");
    scanf("%s", userid);
    printf("Enter Password: ");
    scanf("%s", password);
    // Check if User ID is "Admin123"
    if (strcmp(userid, "Admin123") != 0) {
        printf("Invalid User ID.\n");
        return 1;
    }
    // Check if Password length is 8 characters
    if (strlen(password) != 8) {
        printf("Password must be 8 characters long.\n");
        return 1;
    }
    printf("Login Successful!\n");
    return 0;
}