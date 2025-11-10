# 📖 Guide d'Utilisation - Cours Pthreads

## 🎯 Objectif

Ce dossier contient un **cours complet sur les Pthreads** au format PDF, conçu spécialement pour être utilisé comme **document autorisé pendant votre examen**.

---

## 📁 Fichiers Disponibles

| Fichier | Description | Taille |
|---------|-------------|--------|
| `cours_pthreads.pdf` | **Document principal** - Cours complet (22 pages) | 407 KB |
| `cours_pthreads.tex` | Code source LaTeX du document | 38 KB |
| `exemple_test.c` | Exemple de code C fonctionnel à tester | 2 KB |
| `compiler.sh` | Script pour recompiler le PDF | 1 KB |
| `README.md` | Documentation complète | 4 KB |

---

## 🚀 Utilisation Rapide

### 1️⃣ Pour l'Examen
```bash
# Ouvrez simplement le PDF
xdg-open cours_pthreads.pdf
# ou
evince cours_pthreads.pdf
# ou
firefox cours_pthreads.pdf
```

### 2️⃣ Pour Tester les Exemples
```bash
# Compiler et exécuter l'exemple
gcc -pthread exemple_test.c -o exemple_test
./exemple_test
```

### 3️⃣ Pour Recompiler le PDF (si modifications)
```bash
# Méthode 1 : Utiliser le script
./compiler.sh

# Méthode 2 : Compilation manuelle
pdflatex cours_pthreads.tex
pdflatex cours_pthreads.tex  # 2 fois pour la table des matières
```

---

## 📚 Structure du Cours (22 pages)

### Page 1 : Page de Titre
- Titre principal
- Sous-titre
- Date

### Page 2 : Table des Matières
- Navigation complète du document

### Pages 3-22 : Contenu Détaillé

#### 🔹 Section 1 : Introduction (pages 3-4)
- Qu'est-ce qu'un thread ?
- Différence processus vs thread
- Avantages des pthreads
- Compilation avec `-pthread`

#### 🔹 Section 2 : Création et Gestion (pages 4-7)
- `pthread_create()` - Création
- `pthread_join()` - Attente
- `pthread_exit()` - Terminaison
- `pthread_detach()` - Détachement
- **3 exemples complets avec code**

#### 🔹 Section 3 : Mutex (pages 7-11)
- Problème de race condition
- Protection avec mutex
- `pthread_mutex_lock()` / `unlock()`
- **3 exemples : compteur, compte bancaire**

#### 🔹 Section 4 : Variables de Condition (pages 11-13)
- `pthread_cond_wait()` / `signal()` / `broadcast()`
- **Exemple : Producteur-Consommateur**

#### 🔹 Section 5 : Sémaphores (pages 13-15)
- `sem_init()` / `wait()` / `post()`
- **Exemple : Pool de connexions**

#### 🔹 Section 6 : Barrières (pages 15-16)
- `pthread_barrier_wait()`
- **Exemple : Calcul par phases**

#### 🔹 Section 7 : Thread-Local Storage (page 16)
- Variables `__thread`

#### 🔹 Section 8 : Gestion d'Erreurs (pages 16-17)
- Codes d'erreur
- Vérification des retours

#### 🔹 Section 9 : Deadlock (pages 17-18)
- Causes et solutions
- Ordre de verrouillage

#### 🔹 Section 10 : Bonnes Pratiques (page 19)
- 10 règles d'or

#### 🔹 Section 11 : Tableau Récapitulatif (page 20)
- Toutes les fonctions

#### 🔹 Section 12 : Exercices (pages 20-21)
- Questions types d'examen

#### 🔹 Section 13 : Conclusion (page 22)
- Points clés à retenir

---

## 🎨 Caractéristiques du Design

### Couleurs du Code
- 🔵 **Bleu** : Mots-clés C (`int`, `void`, `pthread_t`, etc.)
- 🟢 **Vert** : Commentaires explicatifs
- 🔴 **Rouge** : Chaînes de caractères
- 🟣 **Violet** : Noms de fonctions
- 🟠 **Orange** : Numéros de ligne

### Boîtes Colorées
- 🔴 **Rouge** : Informations importantes / Avertissements
- 🔵 **Bleue** : Définitions / Prototypes
- 🟢 **Verte** : Exemples / Exercices

### Mise en Page
- ✅ En-têtes avec titre du cours
- ✅ Pieds de page avec numéros
- ✅ Sections numérotées
- ✅ Table des matières cliquable
- ✅ Code avec numéros de ligne
- ✅ Cadres autour du code

---

## 💡 Conseils pour l'Examen

### ✅ À Faire
1. **Imprimez le PDF** en couleur si possible (meilleure lisibilité)
2. **Annotez** les sections importantes avec des post-it
3. **Marquez** les exemples que vous comprenez le mieux
4. **Révisez** la section "Bonnes Pratiques" (page 19)
5. **Mémorisez** le tableau récapitulatif (page 20)

### ❌ À Éviter
1. Ne pas oublier l'option `-pthread` lors de la compilation
2. Ne pas oublier de vérifier les valeurs de retour
3. Ne pas oublier de libérer les mutex verrouillés
4. Ne pas créer de deadlock (ordre de verrouillage)
5. Ne pas oublier `pthread_join()` ou `pthread_detach()`

---

## 🔍 Recherche Rapide dans le PDF

### Fonctions Principales
- **Création** : Cherchez "pthread_create" → page 4
- **Attente** : Cherchez "pthread_join" → page 5
- **Mutex** : Cherchez "pthread_mutex" → page 7
- **Condition** : Cherchez "pthread_cond" → page 11
- **Sémaphore** : Cherchez "sem_" → page 13
- **Barrière** : Cherchez "pthread_barrier" → page 15

### Exemples de Code
- **Exemple 1** : Thread simple → page 4
- **Exemple 2** : Threads multiples → page 5
- **Exemple 3** : Race condition → page 7
- **Exemple 4** : Mutex solution → page 8
- **Exemple 5** : Compte bancaire → page 9
- **Exemple 6** : Producteur-Consommateur → page 11
- **Exemple 7** : Pool connexions → page 14
- **Exemple 8** : Barrières → page 15

---

## 📝 Compilation des Exemples du PDF

Tous les exemples du PDF peuvent être copiés et compilés directement :

```bash
# Créer un fichier avec le code de l'exemple
nano mon_exemple.c

# Copier-coller le code depuis le PDF

# Compiler
gcc -pthread mon_exemple.c -o mon_exemple

# Exécuter
./mon_exemple
```

---

## 🛠️ Dépannage

### Problème : "pthread.h: No such file or directory"
**Solution** : Installez les bibliothèques de développement
```bash
sudo dnf install glibc-devel
```

### Problème : "undefined reference to pthread_create"
**Solution** : Ajoutez l'option `-pthread`
```bash
gcc -pthread programme.c -o programme
```

### Problème : Le PDF ne s'affiche pas correctement
**Solution** : Utilisez un lecteur PDF moderne
```bash
sudo dnf install evince  # ou
sudo dnf install okular
```

### Problème : Erreur de compilation LaTeX
**Solution** : Réinstallez les packages
```bash
sudo dnf install texlive-scheme-medium texlive-babel-french
```

---

## 📊 Statistiques du Document

- **Pages** : 22
- **Sections** : 12
- **Exemples de code** : 8
- **Fonctions documentées** : 25+
- **Lignes de code** : 500+
- **Commentaires** : 200+

---

## 🎓 Concepts Couverts

### Niveau Débutant ✅
- ✅ Création de threads
- ✅ Attente de threads
- ✅ Passage d'arguments
- ✅ Valeurs de retour

### Niveau Intermédiaire ✅
- ✅ Mutex et sections critiques
- ✅ Variables de condition
- ✅ Sémaphores
- ✅ Gestion d'erreurs

### Niveau Avancé ✅
- ✅ Deadlock et solutions
- ✅ Barrières de synchronisation
- ✅ Thread-Local Storage
- ✅ Attributs de threads

---

## 📞 Support

Si vous avez des questions ou besoin d'aide :

1. **Consultez** le README.md pour plus de détails
2. **Testez** l'exemple fourni (exemple_test.c)
3. **Relisez** les sections du PDF
4. **Pratiquez** avec les exercices

---

## ✨ Résumé Ultra-Rapide

```c
// 1. Créer un thread
pthread_t thread;
pthread_create(&thread, NULL, fonction, argument);

// 2. Attendre le thread
pthread_join(thread, NULL);

// 3. Protéger avec mutex
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_lock(&mutex);
// section critique
pthread_mutex_unlock(&mutex);

// 4. Compiler
gcc -pthread programme.c -o programme
```

---

## 🎯 Checklist Avant l'Examen

- [ ] PDF imprimé et annoté
- [ ] Sections importantes marquées
- [ ] Tableau récapitulatif (page 20) relu
- [ ] Bonnes pratiques (page 19) mémorisées
- [ ] Au moins 3 exemples compris en détail
- [ ] Différence mutex/sémaphore/condition claire
- [ ] Problème de deadlock compris
- [ ] Option `-pthread` mémorisée

---

## 🏆 Bonne Chance !

Vous avez maintenant tous les outils pour réussir votre examen sur les pthreads. Le document est complet, bien structuré, et contient tous les concepts essentiels avec des exemples pratiques.

**N'oubliez pas** : La pratique est la clé ! Testez les exemples, modifiez-les, et assurez-vous de bien comprendre chaque concept.

---

*Document créé avec ❤️ pour votre réussite*
