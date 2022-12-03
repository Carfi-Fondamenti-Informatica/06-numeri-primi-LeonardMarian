bool is_prime_recorsive(int n, int divisore, int contatore){
    if (n == 1)
        return true;

    if (n%divisore == 0)
        contatore ++;
    int divisoremenouno = divisore-1;
    if (divisoremenouno == 0)
        return contatore == 2;

    return is_prime_recorsive(n, divisoremenouno, contatore);
}

