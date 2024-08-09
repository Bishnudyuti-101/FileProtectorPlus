#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryptFile(const char *filename, const char *key);// Function prototypes
void decryptFile(const char *filename, const char *key);
void storeFileSecurely(const char *filename);
void recoverFile(const char *filename);
void userLogin();
void displayMenu();

// Encrypt file function
void encryptFile(const char *filename, const char *key) {
    printf("Encrypting file %s with key %s...\n", filename, key); // Placeholder for encryption logic
}

// Decrypt file function
void decryptFile(const char *filename, const char *key) {
    printf("Decrypting file %s with key %s...\n", filename, key);  // Placeholder for decryption logic
}

// Store file securely function
void storeFileSecurely(const char *filename) {
    printf("Storing file %s securely...\n", filename);   // Placeholder for secure file storage logic
}

// Recover file function
void recoverFile(const char *filename) {
    printf("Recovering file %s...\n", filename);  // Placeholder for file recovery logic
}

// User login function
void userLogin() {
    char username[256], password[256];

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Remove newline character

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 
   printf("User %s logged in successfully.\n", username); // Placeholder for user authentication logic
}

// Display menu function
void displayMenu() {
    printf("\n--- FileProtectorPlus ---\n");
    printf("1. Encrypt File\n");
    printf("2. Decrypt File\n");
    printf("3. Store File Securely\n");
    printf("4. Recover File\n");
    printf("5. User Login\n");
    printf("6. Exit\n");
}

int main() {
    int choice;
    char filename[256], key[256];

    userLogin(); // Prompt user login

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume newline character left by scanf

        switch (choice) {
            case 1:
                printf("Enter filename to encrypt: ");
                fgets(filename, sizeof(filename), stdin);
                filename[strcspn(filename, "\n")] = '\0'; 
                printf("Enter encryption key: ");
                fgets(key, sizeof(key), stdin);
                key[strcspn(key, "\n")] = '\0'; 
                encryptFile(filename, key);
                break;
            case 2:
                printf("Enter filename to decrypt: ");
                fgets(filename, sizeof(filename), stdin);
                filename[strcspn(filename, "\n")] = '\0'; 
                printf("Enter decryption key: ");
                fgets(key, sizeof(key), stdin);
                key[strcspn(key, "\n")] = '\0'; 
                decryptFile(filename, key);
                break;
            case 3:
                printf("Enter filename to store securely: ");
                fgets(filename, sizeof(filename), stdin);
                filename[strcspn(filename, "\n")] = '\0'; 
                storeFileSecurely(filename);
                break;
            case 4:
                printf("Enter filename to recover: ");
                fgets(filename, sizeof(filename), stdin);
                filename[strcspn(filename, "\n")] = '\0'; 
                recoverFile(filename);
                break;
            case 5:
                userLogin();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }

    return 0;
}

