#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 100
    
typedef struct {
    char name[MAX_NAME_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
    int health;
} Player;
    
typedef struct {
    char name[MAX_NAME_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
    int damage;
} Enemy;
void initializePlayer(Player *player, const char *name, const char *description, int health) {
    strncpy(player->name, name, MAX_NAME_LENGTH - 1);
    strncpy(player->description, description, MAX_DESCRIPTION_LENGTH - 1);
    player->health = health;
}
    
void initializeEnemy(Enemy *enemy, const char *name, const char *description, int damage) {
    strncpy(enemy->name, name, MAX_NAME_LENGTH - 1);
    strncpy(enemy->description, description, MAX_DESCRIPTION_LENGTH - 1);
    enemy->damage = damage;
}
void attackEnemy(Player *player, Enemy *enemy) {
    printf("%s attacks %s!\n", player->name, enemy->name);
    enemy->damage -= player->health;
    printf("%s takes %d damage. %s's damage: %d\n", enemy->name, player->health, enemy->name, enemy->damage);
}
  
int main() {
    Player player;
    Enemy enemy1, enemy2, enemy3, enemy4, enemy5, enemy6, enemy7, enemy8, enemy9, enemy10;

    initializePlayer(&player, "Player1", "A brave adventurer", 100);
    initializeEnemy(&enemy1, "Goblin", "A small and ugly creature", 20);
    initializeEnemy(&enemy2, "Orc", "A powerful and aggressive warrior", 30);
    initializeEnemy(&enemy3, "Troll", "A massive and fearsome creature", 40);
    initializeEnemy(&enemy4, "Dragon", "A fire-breathing mythical beast", 50);
    initializeEnemy(&enemy5, "Skeleton", "An undead warrior", 25);
    initializeEnemy(&enemy6, "Spider", "A venomous arachnid", 15);
    initializeEnemy(&enemy7, "Witch", "A wicked sorceress", 35);
    initializeEnemy(&enemy8, "Zombie", "A reanimated corpse", 30);
    initializeEnemy(&enemy9, "Werewolf", "A creature with the ability to transform", 45);
    initializeEnemy(&enemy10, "Ghost", "A spectral entity", 25);
    printf("Welcome to the Adventure Game!\n");

    Enemy enemies[] = {enemy1, enemy2, enemy3, enemy4, enemy5, enemy6, enemy7, enemy8, enemy9, enemy10};
 
    for (int i = 0; i < 10; ++i) {
        printf("\nEncounter %d: You encounter a %s.\n", i + 1, enemies[i].name);

        while (player.health > 0 && enemies[i].damage > 0) {
            printf("1. Attack\n");
            printf("2. Run\n");

            int choice;
            printf("Enter your choice: ");
            scanf("%d", &choice);
      
            switch (choice) {
                case 1:
                    attackEnemy(&player, &enemies[i]);
                    break;
                case 2:
                    printf("You run away from the %s. Game over!\n", enemies[i].name);
                    return 0;
                default:
                    printf("Invalid choice. Try again.\n");
            }
        }
        if (player.health <= 0) {
            printf("You have been defeated by the %s. Game over!\n", enemies[i].name);
            return 0;
        } else {
            printf("Congratulations! You have defeated the %s.\n", enemies[i].name);
        }
    }
    printf("\nYou have defeated all enemies! You are a true hero. You win!\n");
    return 0;}
 
 
