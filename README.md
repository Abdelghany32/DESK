# Guide Complet des Pthreads - Document de Révision pour Examen

## 📚 Description

Ce document PDF est un **cours complet et détaillé sur les Pthreads (POSIX Threads)** en langage C, spécialement conçu pour vous aider à réussir votre examen.

## ✨ Contenu du Document (22 pages)

### 1. **Introduction aux Pthreads**
- Définition des threads
- Différence entre processus et threads
- Avantages des pthreads
- Compilation avec `-pthread`

### 2. **Création et Gestion des Threads**
- `pthread_create()` - Création de threads
- `pthread_join()` - Attente de terminaison
- `pthread_exit()` - Terminaison explicite
- `pthread_detach()` - Détachement de threads
- **8 exemples de code complets** avec explications ligne par ligne

### 3. **Synchronisation : Mutex**
- Problème de la section critique (race condition)
- Utilisation des mutex pour protéger les données partagées
- `pthread_mutex_lock()` / `pthread_mutex_unlock()`
- Exemples : compteur partagé, compte bancaire

### 4. **Variables de Condition**
- Attente d'événements avec `pthread_cond_wait()`
- Signalisation avec `pthread_cond_signal()` et `pthread_cond_broadcast()`
- Problème classique : Producteur-Consommateur

### 5. **Sémaphores POSIX**
- `sem_init()`, `sem_wait()`, `sem_post()`
- Limitation de ressources (pool de connexions)

### 6. **Barrières de Synchronisation**
- Synchronisation de phases entre threads
- `pthread_barrier_wait()`

### 7. **Thread-Local Storage (TLS)**
- Variables locales aux threads avec `__thread`

### 8. **Gestion des Erreurs**
- Codes d'erreur courants
- Vérification des valeurs de retour

### 9. **Problèmes Classiques**
- **Deadlock** : causes et solutions
- Ordre de verrouillage des mutex

### 10. **Bonnes Pratiques**
- 10 règles d'or pour la programmation avec pthreads

### 11. **Tableau Récapitulatif**
- Toutes les fonctions principales avec descriptions

### 12. **Exercices Types**
- Exemples de questions d'examen

## 🎨 Caractéristiques du Design

✅ **Code coloré** : Chaque ligne de code est commentée avec des couleurs différentes pour faciliter la compréhension
- 🔵 Mots-clés en bleu
- 🟢 Commentaires en vert
- 🔴 Éléments importants en rouge
- 🟣 Fonctions en violet
- 🟠 Numéros de ligne en orange

✅ **Boîtes colorées** :
- 🔴 Boîtes rouges pour les informations importantes
- 🔵 Boîtes bleues pour les définitions
- 🟢 Boîtes vertes pour les exemples

✅ **Structure claire** :
- Table des matières complète
- Sections numérotées
- En-têtes et pieds de page
- Design professionnel

## 📖 Comment Utiliser ce Document

1. **Pour l'examen** : Imprimez le PDF et apportez-le comme document autorisé
2. **Pour réviser** : Lisez les explications détaillées de chaque fonction
3. **Pour comprendre** : Étudiez les 8 exemples de code complets
4. **Pour pratiquer** : Compilez et testez les exemples fournis

## 🔧 Compilation des Exemples

Tous les exemples peuvent être compilés avec :

```bash
gcc -pthread exemple.c -o exemple
./exemple
```

**N'oubliez jamais l'option `-pthread` !**

## 📝 Fichiers Générés

- `cours_pthreads.tex` - Code source LaTeX
- `cours_pthreads.pdf` - Document PDF final (407 KB, 22 pages)

## 🎯 Points Clés à Retenir

1. **Threads** = exécution parallèle dans le même espace mémoire
2. **Mutex** = protection des sections critiques (1 seul thread à la fois)
3. **Variables de condition** = attente d'événements
4. **Sémaphores** = compteur de ressources
5. **Toujours** compiler avec `-pthread`
6. **Toujours** vérifier les valeurs de retour
7. **Attention** aux deadlocks !

## 📚 Exemples Inclus

1. ✅ Création simple d'un thread
2. ✅ Threads multiples avec valeurs de retour
3. ✅ Compteur partagé SANS mutex (problème)
4. ✅ Compteur partagé AVEC mutex (solution)
5. ✅ Compte bancaire avec transactions
6. ✅ Producteur-Consommateur avec buffer
7. ✅ Pool de connexions avec sémaphores
8. ✅ Calcul parallèle par phases avec barrières

## 🚀 Bonne Chance pour Votre Examen !

Ce document contient tout ce dont vous avez besoin pour maîtriser les pthreads et réussir votre examen. Chaque concept est expliqué en détail avec du code commenté ligne par ligne.

---

**Créé avec LaTeX** - Document professionnel et bien structuré
