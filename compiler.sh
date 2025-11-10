#!/bin/bash

# Script de compilation du document LaTeX sur les Pthreads
# Usage: ./compiler.sh

echo "=========================================="
echo "  Compilation du Cours Pthreads"
echo "=========================================="
echo ""

# Vérifier que le fichier .tex existe
if [ ! -f "cours_pthreads.tex" ]; then
    echo "❌ Erreur : cours_pthreads.tex n'existe pas !"
    exit 1
fi

echo "📝 Première compilation..."
pdflatex -interaction=nonstopmode cours_pthreads.tex > /dev/null 2>&1

if [ $? -ne 0 ]; then
    echo "❌ Erreur lors de la première compilation !"
    echo "Consultez le fichier cours_pthreads.log pour plus de détails"
    exit 1
fi

echo "📝 Deuxième compilation (pour la table des matières)..."
pdflatex -interaction=nonstopmode cours_pthreads.tex > /dev/null 2>&1

if [ $? -ne 0 ]; then
    echo "❌ Erreur lors de la deuxième compilation !"
    echo "Consultez le fichier cours_pthreads.log pour plus de détails"
    exit 1
fi

echo ""
echo "✅ Compilation réussie !"
echo ""
echo "📄 Fichier généré : cours_pthreads.pdf"

# Afficher les informations sur le PDF
if [ -f "cours_pthreads.pdf" ]; then
    SIZE=$(ls -lh cours_pthreads.pdf | awk '{print $5}')
    echo "📊 Taille du fichier : $SIZE"
    
    # Compter le nombre de pages (si pdfinfo est disponible)
    if command -v pdfinfo &> /dev/null; then
        PAGES=$(pdfinfo cours_pthreads.pdf 2>/dev/null | grep "Pages:" | awk '{print $2}')
        if [ ! -z "$PAGES" ]; then
            echo "📖 Nombre de pages : $PAGES"
        fi
    fi
fi

echo ""
echo "🧹 Nettoyage des fichiers temporaires..."
rm -f cours_pthreads.aux cours_pthreads.log cours_pthreads.out cours_pthreads.toc

echo "✨ Terminé !"
echo ""
echo "=========================================="
echo "  Vous pouvez maintenant ouvrir"
echo "  cours_pthreads.pdf"
echo "=========================================="
