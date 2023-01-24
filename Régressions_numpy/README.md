Avec du travail, j'ai réussi à coder des régressions linéraires, polynomiales et à variables multiples. 

Le principe est globalement le même. Nous disposons d'un dataset avec une ou plusieurs features. 
On introduit un vecteur thêta qui définit notre premier modèle.
Par la suite, on calcule l'erreur quadratique moyenne de notre modèle avec la fonction coût puis on applique une descente de gradient.

Ainsi, on obtient un vecteur thêta final qui nous donne les meilleurs paramètres de notre modèle minimisant l'erreur entre le modèle et les données.
