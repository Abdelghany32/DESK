/*
 * Exemple de Test - Pthreads
 * Ce programme démontre l'utilisation basique des threads avec mutex
 * Compilez avec : gcc -pthread exemple_test.c -o exemple_test
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Variable partagée
int compteur = 0;

// Mutex pour protéger la variable partagée
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Fonction exécutée par chaque thread
void* incrementer(void* arg) {
    int id = *(int*)arg;
    
    for (int i = 0; i < 5; i++) {
        // Verrouillage du mutex
        pthread_mutex_lock(&mutex);
        
        // Section critique
        int valeur_locale = compteur;
        printf("Thread %d : lecture compteur = %d\n", id, valeur_locale);
        
        // Simulation d'un traitement
        usleep(100000); // 100ms
        
        compteur = valeur_locale + 1;
        printf("Thread %d : écriture compteur = %d\n", id, compteur);
        
        // Déverrouillage du mutex
        pthread_mutex_unlock(&mutex);
        
        // Pause entre les itérations
        usleep(50000); // 50ms
    }
    
    free(arg);
    return NULL;
}

int main() {
    printf("===========================================\n");
    printf("  Démonstration Pthreads avec Mutex\n");
    printf("===========================================\n\n");
    
    // Création de 3 threads
    pthread_t threads[3];
    
    printf("Création de 3 threads...\n\n");
    
    for (int i = 0; i < 3; i++) {
        int* id = malloc(sizeof(int));
        *id = i + 1;
        
        if (pthread_create(&threads[i], NULL, incrementer, id) != 0) {
            fprintf(stderr, "Erreur lors de la création du thread %d\n", i);
            return 1;
        }
    }
    
    printf("Threads créés. Attente de leur terminaison...\n\n");
    
    // Attente de la terminaison de tous les threads
    for (int i = 0; i < 3; i++) {
        pthread_join(threads[i], NULL);
    }
    
    printf("\n===========================================\n");
    printf("  Tous les threads ont terminé\n");
    printf("  Valeur finale du compteur : %d\n", compteur);
    printf("  Valeur attendue : 15 (3 threads × 5 incréments)\n");
    printf("===========================================\n");
    
    // Destruction du mutex
    pthread_mutex_destroy(&mutex);
    
    return 0;
}
