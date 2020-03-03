void    ft_swap(int *a, int *b)
{
    int i;

    i = *a;
    *a = *b;
    *b = i;
}

/*
**  *a ^= *b;
**  *b ^= *a;   Ca marche aussi même pour les négatifs mais, vas savoir pourquoi, pas pour la moulinette.
**  *a ^= *b;
*/